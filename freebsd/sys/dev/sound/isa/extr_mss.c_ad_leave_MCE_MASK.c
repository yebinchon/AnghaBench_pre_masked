
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mss_info {int bd_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mss_info*,int) ;
 int FUNC_2 (struct mss_info*,int ) ;
 int FUNC_3 (struct mss_info*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct mss_info*) ;

__attribute__((used)) static void
FUNC_6(struct mss_info *VAR_4)
{
     u_char VAR_5;

     if ((VAR_4->bd_flags & VAR_0) == 0) {
  FUNC_0(FUNC_4("--- hey, leave_MCE: MCE bit was not set!\n"));
  return;
     }

     FUNC_1(VAR_4, 1000000);

     VAR_4->bd_flags &= ~VAR_0;

     VAR_5 = FUNC_2(VAR_4, VAR_1);
     VAR_5 &= ~VAR_3;
     FUNC_3(VAR_4, VAR_1, VAR_5 & ~VAR_2);
     FUNC_5(VAR_4);
}
