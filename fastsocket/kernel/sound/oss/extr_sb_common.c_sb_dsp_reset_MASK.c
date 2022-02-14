
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ model; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;

int FUNC_7(sb_devc * VAR_4)
{
 int VAR_5;

 FUNC_1(FUNC_5("Entered sb_dsp_reset()\n"));

 if (VAR_4->model == VAR_3) return FUNC_2 (VAR_4);



 FUNC_4(1, VAR_2);

 FUNC_6(10);
 FUNC_4(0, VAR_2);
 FUNC_6(30);

 for (VAR_5 = 0; VAR_5 < 1000 && !(FUNC_3(VAR_0) & 0x80); VAR_5++);

 if (FUNC_3(VAR_1) != 0xAA)
 {
  FUNC_0(FUNC_5("sb: No response to RESET\n"));
  return 0;
 }

 FUNC_1(FUNC_5("sb_dsp_reset() OK\n"));

 return 1;
}
