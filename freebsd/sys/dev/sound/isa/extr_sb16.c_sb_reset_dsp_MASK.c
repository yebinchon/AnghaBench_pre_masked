
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sb_info {int io_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sb_info*) ;
 int FUNC_5 (struct sb_info*) ;
 int FUNC_6 (struct sb_info*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct sb_info *VAR_2)
{
 u_char VAR_3;

 FUNC_5(VAR_2);
     FUNC_6(VAR_2, VAR_1, 3);
     FUNC_1(100);
     FUNC_6(VAR_2, VAR_1, 0);
 VAR_3 = FUNC_4(VAR_2);
     if (VAR_3 != 0xAA) {
         FUNC_0(FUNC_2("sb_reset_dsp 0x%lx failed\n",
      FUNC_3(VAR_2->io_base)));
  return VAR_0;
     }
     return 0;
}
