
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union ng_patch_op_val {int v1; int v2; int v4; int v8; } ;
struct TYPE_8__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef TYPE_6__* priv_p ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int caddr_t ;
struct TYPE_12__ {int patched; } ;
struct TYPE_13__ {TYPE_5__ stats; TYPE_4__* conf; } ;
struct TYPE_11__ {int count; TYPE_3__* ops; } ;
struct TYPE_9__ {int v1; int v2; int v4; int v8; } ;
struct TYPE_10__ {int offset; int length; scalar_t__ mode; TYPE_2__ val; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mbuf*,int,int,int ) ;
 int FUNC_5 (struct mbuf*,int,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(priv_p VAR_0, struct mbuf *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 union ng_patch_op_val VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_0->conf->count; VAR_3++) {
  VAR_4 = VAR_2 + VAR_0->conf->ops[VAR_3].offset;

  if (VAR_4 + VAR_0->conf->ops[VAR_3].length > VAR_1->m_pkthdr.len)
   continue;


  if (VAR_0->conf->ops[VAR_3].mode != 132)
   FUNC_5(VAR_1, VAR_4, VAR_0->conf->ops[VAR_3].length, (caddr_t) &VAR_6);

  switch (VAR_0->conf->ops[VAR_3].length)
  {
   case 1:
    switch (VAR_0->conf->ops[VAR_3].mode)
    {
     case 132:
      VAR_6.v1 = VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 138:
      VAR_6.v1 += VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 129:
      VAR_6.v1 -= VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 135:
      VAR_6.v1 *= VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 136:
      VAR_6.v1 /= VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 134:
      *((int8_t *) &VAR_6) = - *((int8_t *) &VAR_6);
      break;
     case 137:
      VAR_6.v1 &= VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 133:
      VAR_6.v1 |= VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 128:
      VAR_6.v1 ^= VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 131:
      VAR_6.v1 <<= VAR_0->conf->ops[VAR_3].val.v1;
      break;
     case 130:
      VAR_6.v1 >>= VAR_0->conf->ops[VAR_3].val.v1;
      break;
    }
    break;

   case 2:
    VAR_6.v2 = FUNC_7(VAR_6.v2);

    switch (VAR_0->conf->ops[VAR_3].mode)
    {
     case 132:
      VAR_6.v2 = VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 138:
      VAR_6.v2 += VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 129:
      VAR_6.v2 -= VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 135:
      VAR_6.v2 *= VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 136:
      VAR_6.v2 /= VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 134:
      *((int16_t *) &VAR_6) = - *((int16_t *) &VAR_6);
      break;
     case 137:
      VAR_6.v2 &= VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 133:
      VAR_6.v2 |= VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 128:
      VAR_6.v2 ^= VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 131:
      VAR_6.v2 <<= VAR_0->conf->ops[VAR_3].val.v2;
      break;
     case 130:
      VAR_6.v2 >>= VAR_0->conf->ops[VAR_3].val.v2;
      break;
    }

    VAR_6.v2 = FUNC_3(VAR_6.v2);

    break;

   case 4:
    VAR_6.v4 = FUNC_6(VAR_6.v4);

    switch (VAR_0->conf->ops[VAR_3].mode)
    {
     case 132:
      VAR_6.v4 = VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 138:
      VAR_6.v4 += VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 129:
      VAR_6.v4 -= VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 135:
      VAR_6.v4 *= VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 136:
      VAR_6.v4 /= VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 134:
      *((int32_t *) &VAR_6) = - *((int32_t *) &VAR_6);
      break;
     case 137:
      VAR_6.v4 &= VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 133:
      VAR_6.v4 |= VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 128:
      VAR_6.v4 ^= VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 131:
      VAR_6.v4 <<= VAR_0->conf->ops[VAR_3].val.v4;
      break;
     case 130:
      VAR_6.v4 >>= VAR_0->conf->ops[VAR_3].val.v4;
      break;
    }

    VAR_6.v4 = FUNC_2(VAR_6.v4);

    break;

   case 8:
    VAR_6.v8 = FUNC_0(VAR_6.v8);

    switch (VAR_0->conf->ops[VAR_3].mode)
    {
     case 132:
      VAR_6.v8 = VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 138:
      VAR_6.v8 += VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 129:
      VAR_6.v8 -= VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 135:
      VAR_6.v8 *= VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 136:
      VAR_6.v8 /= VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 134:
      *((int64_t *) &VAR_6) = - *((int64_t *) &VAR_6);
      break;
     case 137:
      VAR_6.v8 &= VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 133:
      VAR_6.v8 |= VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 128:
      VAR_6.v8 ^= VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 131:
      VAR_6.v8 <<= VAR_0->conf->ops[VAR_3].val.v8;
      break;
     case 130:
      VAR_6.v8 >>= VAR_0->conf->ops[VAR_3].val.v8;
      break;
    }

    VAR_6.v8 = FUNC_1(VAR_6.v8);

    break;
  }

  FUNC_4(VAR_1, VAR_4, VAR_0->conf->ops[VAR_3].length, (caddr_t) &VAR_6);
  VAR_5 = 1;
 }

 if (VAR_5)
  VAR_0->stats.patched++;
}
