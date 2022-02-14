
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pollfd*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct pollfd VAR_5;

 VAR_5.fd = VAR_4;
 VAR_5.events = VAR_2 | VAR_1 | VAR_3;

 (void)FUNC_2(1);
 (void)FUNC_0(&VAR_5, 1, VAR_0);
 (void)FUNC_1("child2 exit\n");
}
