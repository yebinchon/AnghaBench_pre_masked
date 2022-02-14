
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollop {struct pollop* idxplus1_by_fd; struct pollop* event_w_back; struct pollop* event_r_back; struct pollop* event_set; } ;


 int FUNC_0 (struct pollop*) ;
 int FUNC_1 (struct pollop*,int ,int) ;

void
FUNC_2(void *VAR_0)
{
 struct pollop *VAR_1 = VAR_0;

 if (VAR_1->event_set)
  FUNC_0(VAR_1->event_set);
 if (VAR_1->event_r_back)
  FUNC_0(VAR_1->event_r_back);
 if (VAR_1->event_w_back)
  FUNC_0(VAR_1->event_w_back);
 if (VAR_1->idxplus1_by_fd)
  FUNC_0(VAR_1->idxplus1_by_fd);

 FUNC_1(VAR_1, 0, sizeof(struct pollop));
 FUNC_0(VAR_1);
}
