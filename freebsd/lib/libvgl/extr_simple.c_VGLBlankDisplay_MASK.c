
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {scalar_t__ vi_mem_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,int) ;

void
FUNC_4(int VAR_5)
{
  byte VAR_6;

  if (VAR_3.vi_mem_model == VAR_4 && FUNC_2(0, VAR_1, 0))
    return;
  FUNC_0();
  FUNC_3(0x3C4, 0x01); VAR_6 = FUNC_1(0x3C5); FUNC_3(0x3C4, 0x01);
  FUNC_3(0x3C5, ((VAR_5) ? (VAR_6 |= 0x20) : (VAR_6 &= 0xDF)));
  VAR_2 = VAR_5;
  if (VAR_3.vi_mem_model == VAR_4)
    FUNC_2(0, VAR_0, 0);
}
