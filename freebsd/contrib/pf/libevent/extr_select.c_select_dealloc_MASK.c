
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selectop {struct selectop* event_w_by_fd; struct selectop* event_r_by_fd; struct selectop* event_writeset_out; struct selectop* event_readset_out; struct selectop* event_writeset_in; struct selectop* event_readset_in; } ;


 int FUNC_0 (struct selectop*) ;
 int FUNC_1 (struct selectop*,int ,int) ;

void
FUNC_2(void *VAR_0)
{
 struct selectop *VAR_1 = VAR_0;

 if (VAR_1->event_readset_in)
  FUNC_0(VAR_1->event_readset_in);
 if (VAR_1->event_writeset_in)
  FUNC_0(VAR_1->event_writeset_in);
 if (VAR_1->event_readset_out)
  FUNC_0(VAR_1->event_readset_out);
 if (VAR_1->event_writeset_out)
  FUNC_0(VAR_1->event_writeset_out);
 if (VAR_1->event_r_by_fd)
  FUNC_0(VAR_1->event_r_by_fd);
 if (VAR_1->event_w_by_fd)
  FUNC_0(VAR_1->event_w_by_fd);

 FUNC_1(VAR_1, 0, sizeof(struct selectop));
 FUNC_0(VAR_1);
}
