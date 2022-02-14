
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,uintptr_t,int ,int,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__,struct kevent*,int,int *,int ,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_11 ;

int
FUNC_3(void)
{
 struct kevent VAR_12[1];

 VAR_10 = FUNC_2();
 if (VAR_10 < 0) {
  return -1;
 }
 FUNC_0(&VAR_12[0], (uintptr_t)VAR_11, VAR_0,
  VAR_1 | VAR_2, VAR_4 |
  VAR_9 | VAR_5 | VAR_3 |
  VAR_6 | VAR_7 | VAR_8, 0, 0);
 return FUNC_1(VAR_10, VAR_12, 1, ((void*)0), 0, ((void*)0));
}
