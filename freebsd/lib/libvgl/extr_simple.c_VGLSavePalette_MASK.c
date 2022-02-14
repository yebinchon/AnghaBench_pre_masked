
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vi_mem_model; } ;


 TYPE_1__ VAR_0 ;
 void** VAR_1 ;
 void** VAR_2 ;
 void** VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

void
FUNC_2()
{
  int VAR_5;

  if (VAR_0.vi_mem_model == VAR_4)
    return;
  FUNC_1(0x3C6, 0xFF);
  FUNC_0(0x3DA);
  FUNC_1(0x3C7, 0x00);
  for (VAR_5=0; VAR_5<256; VAR_5++) {
    VAR_3[VAR_5] = FUNC_0(0x3C9);
    FUNC_0(0x84);
    VAR_2[VAR_5] = FUNC_0(0x3C9);
    FUNC_0(0x84);
    VAR_1[VAR_5] = FUNC_0(0x3C9);
    FUNC_0(0x84);
  }
  FUNC_0(0x3DA);
  FUNC_1(0x3C0, 0x20);
}
