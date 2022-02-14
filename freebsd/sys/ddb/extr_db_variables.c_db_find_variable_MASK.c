
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_variable {int name; } ;


 struct db_variable* VAR_0 ;
 int FUNC_0 (char*) ;
 struct db_variable* VAR_1 ;
 int FUNC_1 () ;
 struct db_variable* VAR_2 ;
 int VAR_3 ;
 struct db_variable* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(struct db_variable **VAR_6)
{
 struct db_variable *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1();
 if (VAR_8 == VAR_5) {
  for (VAR_7 = VAR_4; VAR_7 < VAR_1; VAR_7++) {
   if (!FUNC_2(VAR_3, VAR_7->name)) {
    *VAR_6 = VAR_7;
    return (1);
   }
  }
  for (VAR_7 = VAR_2; VAR_7 < VAR_0; VAR_7++) {
   if (!FUNC_2(VAR_3, VAR_7->name)) {
    *VAR_6 = VAR_7;
    return (1);
   }
  }
 }
 FUNC_0("Unknown variable\n");
 return (0);
}
