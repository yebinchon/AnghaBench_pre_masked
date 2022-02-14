
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct pollfd VAR_4;

 VAR_4.fd = VAR_3;
 VAR_4.events = VAR_1 | VAR_0 | VAR_2;

 (void)FUNC_0(&VAR_4, 1, 2000);
 (void)FUNC_1("child1 exit\n");
}
