
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tube {int sw; int res_com; } ;
struct comm_base {int dummy; } ;


 int FUNC_0 (struct comm_base*,int ,int,int ,struct tube*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

int FUNC_2(struct tube* VAR_2, struct comm_base* VAR_3)
{
 if(!(VAR_2->res_com = FUNC_0(VAR_3, VAR_2->sw,
  1, VAR_1, VAR_2))) {
  int VAR_4 = VAR_0;
  FUNC_1("tube_setup_bg_w: commpoint creation failed");
  VAR_0 = VAR_4;
  return 0;
 }
 return 1;
}
