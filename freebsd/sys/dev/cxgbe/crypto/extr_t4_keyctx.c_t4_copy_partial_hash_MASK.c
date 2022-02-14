
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int * state; } ;
struct TYPE_11__ {int * state; } ;
struct TYPE_10__ {int * state; } ;
struct TYPE_9__ {int * state; } ;
struct TYPE_7__ {int * b32; } ;
struct TYPE_8__ {TYPE_1__ h; } ;
union authctx {TYPE_6__ sha512ctx; TYPE_5__ sha384ctx; TYPE_4__ sha256ctx; TYPE_3__ sha224ctx; TYPE_2__ sha1ctx; } ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(int VAR_3, union authctx *VAR_4, void *VAR_5)
{
 uint32_t *VAR_6;
 uint64_t *VAR_7;
 u_int VAR_8;

 VAR_6 = (uint32_t *)VAR_5;
 VAR_7 = (uint64_t *)VAR_5;
 switch (VAR_3) {
 case 137:
 case 136:
  for (VAR_8 = 0; VAR_8 < VAR_0 / 4; VAR_8++)
   VAR_6[VAR_8] = FUNC_0(VAR_4->sha1ctx.h.b32[VAR_8]);
  break;
 case 135:
 case 134:
  for (VAR_8 = 0; VAR_8 < VAR_1 / 4; VAR_8++)
   VAR_6[VAR_8] = FUNC_0(VAR_4->sha224ctx.state[VAR_8]);
  break;
 case 133:
 case 132:
  for (VAR_8 = 0; VAR_8 < VAR_1 / 4; VAR_8++)
   VAR_6[VAR_8] = FUNC_0(VAR_4->sha256ctx.state[VAR_8]);
  break;
 case 131:
 case 130:
  for (VAR_8 = 0; VAR_8 < VAR_2 / 8; VAR_8++)
   VAR_7[VAR_8] = FUNC_1(VAR_4->sha384ctx.state[VAR_8]);
  break;
 case 129:
 case 128:
  for (VAR_8 = 0; VAR_8 < VAR_2 / 8; VAR_8++)
   VAR_7[VAR_8] = FUNC_1(VAR_4->sha512ctx.state[VAR_8]);
  break;
 }
}
