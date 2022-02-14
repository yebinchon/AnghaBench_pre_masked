
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {scalar_t__ bd_id; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mss_info*,int) ;
 int FUNC_2 (struct mss_info*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct mss_info *VAR_3)
{
     int VAR_4;
     VAR_4 = FUNC_2(VAR_3, 1000000);
     if (VAR_4 & VAR_2) FUNC_3("mss: Auto calibration timed out(1).\n");





 if (VAR_3->bd_id == VAR_0 || VAR_3->bd_id == VAR_1) {
  for (VAR_4 = 100; VAR_4 > 0 && (FUNC_1(VAR_3, 11) & 0x20) == 0; VAR_4--);
 } else {




    for (VAR_4 = 100; VAR_4 > 0 && (FUNC_1(VAR_3, 11) & 0x20) == 0; VAR_4--) FUNC_0(100);
 }
     for (VAR_4 = 100; VAR_4 > 0 && FUNC_1(VAR_3, 11) & 0x20; VAR_4--) FUNC_0(100);
}
