
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tube_callback_type ;
struct tube {int sr; int listen_com; void* listen_arg; int * listen_cb; } ;
struct comm_base {int dummy; } ;


 int FUNC_0 (struct comm_base*,int ,int ,int ,struct tube*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

int FUNC_2(struct tube* VAR_2, struct comm_base* VAR_3,
        tube_callback_type* VAR_4, void* VAR_5)
{
 VAR_2->listen_cb = VAR_4;
 VAR_2->listen_arg = VAR_5;
 if(!(VAR_2->listen_com = FUNC_0(VAR_3, VAR_2->sr,
  0, VAR_1, VAR_2))) {
  int VAR_6 = VAR_0;
  FUNC_1("tube_setup_bg_l: commpoint creation failed");
  VAR_0 = VAR_6;
  return 0;
 }
 return 1;
}
