
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int fd; scalar_t__ off; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

void
FUNC_1(struct info *VAR_1)
{

 if (VAR_1->off) {
  int VAR_2 = 0;
  (void)FUNC_0(VAR_1->fd, VAR_0, &VAR_2);
 } else {
  int VAR_3 = 1;
  (void)FUNC_0(VAR_1->fd, VAR_0, &VAR_3);
 }
}
