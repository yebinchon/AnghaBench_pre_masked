
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;

void
FUNC_2(struct info *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1;
 if (FUNC_1(VAR_2->fd, VAR_0, &VAR_3) < 0)
  FUNC_0(1, "TIOCSETD");
}
