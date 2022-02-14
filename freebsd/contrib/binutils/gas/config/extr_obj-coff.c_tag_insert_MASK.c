
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 char* FUNC_2 (int ,char const*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_1, symbolS *VAR_2)
{
  const char *VAR_3;

  if ((VAR_3 = FUNC_2 (VAR_0, VAR_1, (char *) VAR_2)))
    FUNC_1 (FUNC_0("Inserting \"%s\" into structure table failed: %s"),
       VAR_1, VAR_3);
}
