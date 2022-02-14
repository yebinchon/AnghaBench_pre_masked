
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct bufferevent *VAR_2, short VAR_3, void *VAR_4)
{
 if (VAR_3 & VAR_1) {
  FUNC_2("Error from bufferevent");
  FUNC_1(1);
 } else if (VAR_3 & (VAR_0 | VAR_1)) {
  FUNC_0(VAR_2);
 }
}
