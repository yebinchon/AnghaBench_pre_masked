
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {scalar_t__ vi_mem_model; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

void
FUNC_3(byte *VAR_5, byte *VAR_6, byte *VAR_7)
{
  int VAR_8;

  if (VAR_0.vi_mem_model == VAR_4)
    return;
  for (VAR_8=0; VAR_8<256; VAR_8++) {
    VAR_3[VAR_8] = VAR_5[VAR_8];
    VAR_2[VAR_8] = VAR_6[VAR_8];
    VAR_1[VAR_8] = VAR_7[VAR_8];
  }
  FUNC_0();
  FUNC_2(0x3C6, 0xFF);
  FUNC_1(0x3DA);
  FUNC_2(0x3C8, 0x00);
  for (VAR_8=0; VAR_8<256; VAR_8++) {
    FUNC_2(0x3C9, VAR_3[VAR_8]);
    FUNC_1(0x84);
    FUNC_2(0x3C9, VAR_2[VAR_8]);
    FUNC_1(0x84);
    FUNC_2(0x3C9, VAR_1[VAR_8]);
    FUNC_1(0x84);
  }
  FUNC_1(0x3DA);
  FUNC_2(0x3C0, 0x20);
}
