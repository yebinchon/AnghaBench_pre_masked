
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_args {int changelist; } ;
struct kevent {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct kevent*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, struct kevent *VAR_2, int VAR_3)
{
 struct kevent_args *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3 <= VAR_0, ("count (%d) > KQ_NEVENTS", VAR_3));
 VAR_4 = (struct kevent_args *)VAR_1;

 VAR_5 = FUNC_1(VAR_4->changelist, VAR_2, VAR_3 * sizeof *VAR_2);
 if (VAR_5 == 0)
  VAR_4->changelist += VAR_3;
 return (VAR_5);
}
