
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3, int VAR_4)
{
 struct pollfd VAR_5;
 int VAR_6;

 VAR_5.fd = VAR_3;
 VAR_5.events = VAR_2;

 if ((VAR_6 = FUNC_0(&VAR_5, 1, VAR_4)) == 1)
  return 0;

 if (VAR_6 == 0)
  return -VAR_1;

 return -VAR_0;
}
