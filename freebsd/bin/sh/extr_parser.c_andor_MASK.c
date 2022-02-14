
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union node {int dummy; } node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union node* FUNC_0 (int,union node*,union node*) ;
 union node* FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;

__attribute__((used)) static union node *
FUNC_3(void)
{
 union node *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1();
 for (;;) {
  if ((VAR_6 = FUNC_2()) == VAR_2) {
   VAR_6 = VAR_0;
  } else if (VAR_6 == VAR_3) {
   VAR_6 = VAR_1;
  } else {
   VAR_4++;
   return VAR_5;
  }
  VAR_5 = FUNC_0(VAR_6, VAR_5, FUNC_1());
 }
}
