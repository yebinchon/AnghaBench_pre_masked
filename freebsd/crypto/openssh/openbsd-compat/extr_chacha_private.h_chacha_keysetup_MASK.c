
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct TYPE_3__ {void** input; } ;
typedef TYPE_1__ chacha_ctx ;


 void* FUNC_0 (char const*) ;
 char* VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_1(chacha_ctx *VAR_2,const u8 *VAR_3,u32 VAR_4,u32 VAR_5)
{
  const char *VAR_6;

  VAR_2->input[4] = FUNC_0(VAR_3 + 0);
  VAR_2->input[5] = FUNC_0(VAR_3 + 4);
  VAR_2->input[6] = FUNC_0(VAR_3 + 8);
  VAR_2->input[7] = FUNC_0(VAR_3 + 12);
  if (VAR_4 == 256) {
    VAR_3 += 16;
    VAR_6 = VAR_0;
  } else {
    VAR_6 = VAR_1;
  }
  VAR_2->input[8] = FUNC_0(VAR_3 + 0);
  VAR_2->input[9] = FUNC_0(VAR_3 + 4);
  VAR_2->input[10] = FUNC_0(VAR_3 + 8);
  VAR_2->input[11] = FUNC_0(VAR_3 + 12);
  VAR_2->input[0] = FUNC_0(VAR_6 + 0);
  VAR_2->input[1] = FUNC_0(VAR_6 + 4);
  VAR_2->input[2] = FUNC_0(VAR_6 + 8);
  VAR_2->input[3] = FUNC_0(VAR_6 + 12);
}
