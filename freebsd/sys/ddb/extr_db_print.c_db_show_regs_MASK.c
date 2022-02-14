
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_variable {int name; } ;
typedef unsigned long db_expr_t ;
typedef int db_addr_t ;


 int FUNC_0 () ;
 struct db_variable* VAR_0 ;
 int FUNC_1 (int ,char const**,unsigned long*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct db_variable*,unsigned long*) ;
 struct db_variable* VAR_2 ;

void
FUNC_5(db_expr_t VAR_3, bool VAR_4, db_expr_t VAR_5, char *VAR_6)
{
 struct db_variable *VAR_7;
 db_expr_t VAR_8, VAR_9;
 const char *VAR_10;

 for (VAR_7 = VAR_2; VAR_7 < VAR_0; VAR_7++) {
  if (!FUNC_4(VAR_7, &VAR_8))
   continue;
  FUNC_3("%-12s%#*lr", VAR_7->name,
      (int)(sizeof(unsigned long) * 2 + 2), (unsigned long)VAR_8);
  FUNC_1((db_addr_t)VAR_8, &VAR_10, &VAR_9);
  if (VAR_10 != ((void*)0) && VAR_9 <= (unsigned long)VAR_1 &&
      VAR_9 != VAR_8) {
   FUNC_3("\t%s", VAR_10);
   if (VAR_9 != 0)
    FUNC_3("+%+#lr", (long)VAR_9);
  }
  FUNC_3("\n");
 }
 FUNC_2(FUNC_0());
}
