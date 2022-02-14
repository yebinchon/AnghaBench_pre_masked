
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int * th_notify_fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct event_base *VAR_1)
{
 char VAR_2[1];
 int VAR_3;
 VAR_2[0] = (char) 0;



 VAR_3 = FUNC_2(VAR_1->th_notify_fd[1], VAR_2, 1);

 return (VAR_3 < 0 && ! FUNC_0(VAR_0)) ? -1 : 0;
}
