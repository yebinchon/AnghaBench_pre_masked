
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;
typedef int (* enabler ) (struct archive*) ;
typedef int (* destructor ) (struct archive*) ;
typedef struct archive* (* constructor ) () ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 int * FUNC_1 (struct archive*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct archive*,int,int) ;

__attribute__((used)) static void
FUNC_4(constructor VAR_2, enabler VAR_3, destructor VAR_4)
{
 struct archive *VAR_5 = VAR_2();
 int VAR_6 = VAR_3(VAR_5);
 if (VAR_6 == VAR_1) {
  FUNC_2(((void*)0) != FUNC_1(VAR_5));
  FUNC_3(VAR_5, -1, FUNC_0(VAR_5));
 } else {
  FUNC_3(VAR_5, VAR_0, VAR_6);
  FUNC_2(((void*)0) == FUNC_1(VAR_5));
  FUNC_3(VAR_5, 0, FUNC_0(VAR_5));
 }
 VAR_4(VAR_5);
}
