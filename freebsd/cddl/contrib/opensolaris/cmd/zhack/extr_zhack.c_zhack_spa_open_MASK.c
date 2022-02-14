
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,char*,char const*,int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,int **,void*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_5, boolean_t VAR_6, void *VAR_7, spa_t **VAR_8)
{
 int VAR_9;

 FUNC_1(VAR_5, VAR_6);

 VAR_4 = VAR_1;
 VAR_9 = FUNC_2(VAR_5, VAR_8, VAR_7);
 VAR_4 = VAR_0;

 if (VAR_9 != 0)
  FUNC_0(*VAR_8, VAR_2, "cannot open '%s': %s", VAR_5,
      FUNC_4(VAR_9));
 if (FUNC_3(*VAR_8) < VAR_3) {
  FUNC_0(*VAR_8, VAR_2, "'%s' has version %d, features not enabled",
      VAR_5, (int)FUNC_3(*VAR_8));
 }
}
