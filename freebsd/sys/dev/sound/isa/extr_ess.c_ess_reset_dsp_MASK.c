
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int io_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ess_info*,int) ;
 int FUNC_3 (struct ess_info*) ;
 int FUNC_4 (struct ess_info*,int ,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct ess_info *VAR_2)
{
     FUNC_4(VAR_2, VAR_1, 3);
     FUNC_1(100);
     FUNC_4(VAR_2, VAR_1, 0);
     if (FUNC_3(VAR_2) != 0xAA) {
         FUNC_0(FUNC_5("ess_reset_dsp 0x%lx failed\n",
      FUNC_6(VAR_2->io_base)));
  return VAR_0;
     }
     FUNC_2(VAR_2, 0xc6);
     return 0;
}
