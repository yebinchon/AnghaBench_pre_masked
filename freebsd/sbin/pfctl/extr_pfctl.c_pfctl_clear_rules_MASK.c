
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct pfr_buffer {int pfrb_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pfr_buffer*,int ,int) ;
 scalar_t__ FUNC_3 (struct pfr_buffer*,int ,char*) ;
 scalar_t__ FUNC_4 (int,struct pfr_buffer*,int ,int ) ;
 int VAR_6 ;

int
FUNC_5(int VAR_7, int VAR_8, char *VAR_9)
{
 struct pfr_buffer VAR_10;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.pfrb_type = VAR_2;
 if (FUNC_3(&VAR_10, VAR_5, VAR_9) ||
     FUNC_3(&VAR_10, VAR_4, VAR_9) ||
     FUNC_4(VAR_7, &VAR_10, VAR_0, 0) ||
     FUNC_4(VAR_7, &VAR_10, VAR_1, 0))
  FUNC_0(1, "pfctl_clear_rules");
 if ((VAR_8 & VAR_3) == 0)
  FUNC_1(VAR_6, "rules cleared\n");
 return (0);
}
