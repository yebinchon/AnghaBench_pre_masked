
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {void** input; } ;
typedef TYPE_1__ chacha_ctx ;


 void* FUNC_0 (int const*) ;

void
FUNC_1(chacha_ctx *VAR_0, const u8 *VAR_1, const u8 *VAR_2)
{
  VAR_0->input[12] = VAR_2 == ((void*)0) ? 0 : FUNC_0(VAR_2 + 0);
  VAR_0->input[13] = VAR_2 == ((void*)0) ? 0 : FUNC_0(VAR_2 + 4);
  VAR_0->input[14] = FUNC_0(VAR_1 + 0);
  VAR_0->input[15] = FUNC_0(VAR_1 + 4);
}
