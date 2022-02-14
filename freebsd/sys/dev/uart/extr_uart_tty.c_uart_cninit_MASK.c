
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_devinfo {int type; struct consdev* cookie; } ;
struct consdev {struct uart_devinfo* cn_arg; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct uart_devinfo*) ;
 int FUNC_2 (struct uart_devinfo*) ;

__attribute__((used)) static void
FUNC_3(struct consdev *VAR_1)
{
 struct uart_devinfo *VAR_2;
 VAR_2 = VAR_1->cn_arg;
 FUNC_0(VAR_2->cookie == ((void*)0), ("foo"));
 VAR_2->cookie = VAR_1;
 VAR_2->type = VAR_0;
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
}
