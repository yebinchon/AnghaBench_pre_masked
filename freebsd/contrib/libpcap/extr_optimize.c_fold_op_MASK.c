
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stmt {int code; int k; } ;
struct TYPE_5__ {scalar_t__ done; TYPE_1__* vmap; } ;
typedef TYPE_2__ opt_state_t ;
typedef int compiler_state_t ;
typedef int bpf_u_int32 ;
struct TYPE_4__ {int const_val; } ;





 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;




 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void
FUNC_3(compiler_state_t *VAR_2, opt_state_t *VAR_3,
    struct stmt *VAR_4, int VAR_5, int VAR_6)
{
 bpf_u_int32 VAR_7, VAR_8;

 VAR_7 = VAR_3->vmap[VAR_5].const_val;
 VAR_8 = VAR_3->vmap[VAR_6].const_val;

 switch (FUNC_0(VAR_4->code)) {
 case 137:
  VAR_7 += VAR_8;
  break;

 case 129:
  VAR_7 -= VAR_8;
  break;

 case 132:
  VAR_7 *= VAR_8;
  break;

 case 135:
  if (VAR_8 == 0)
   FUNC_2(VAR_2, "division by zero");
  VAR_7 /= VAR_8;
  break;

 case 133:
  if (VAR_8 == 0)
   FUNC_2(VAR_2, "modulus by zero");
  VAR_7 %= VAR_8;
  break;

 case 136:
  VAR_7 &= VAR_8;
  break;

 case 131:
  VAR_7 |= VAR_8;
  break;

 case 128:
  VAR_7 ^= VAR_8;
  break;

 case 134:
  VAR_7 <<= VAR_8;
  break;

 case 130:
  VAR_7 >>= VAR_8;
  break;

 default:
  FUNC_1();
 }
 VAR_4->k = VAR_7;
 VAR_4->code = VAR_1|VAR_0;
 VAR_3->done = 0;
}
