
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mods ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const**,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int VAR_1 ;
 char const** VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 const char *VAR_8[20];
 int VAR_9, VAR_10;

 if ((VAR_7 = FUNC_4(VAR_6 = VAR_5, "a")) == ((void*)0))
  FUNC_2("failed to open output file '%s'", VAR_6);

 FUNC_5("%s\n", VAR_3);

 for (VAR_10 = 0; VAR_2[VAR_10] != ((void*)0); VAR_10++)
  FUNC_5("%s\n", VAR_2[VAR_10]);

 VAR_9 = FUNC_0(VAR_1, VAR_8,
     sizeof (VAR_8) / sizeof (char *) - 1);

 if (VAR_9 >= sizeof (VAR_8) / sizeof (char *))
  FUNC_2("unexpectedly large number of modules!");

 VAR_8[VAR_9++] = "dtrace";

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  FUNC_5("forceload: drv/%s\n", VAR_8[VAR_10]);

 FUNC_5("%s\n", VAR_4);

 if (FUNC_3(VAR_7) == VAR_0)
  FUNC_2("failed to close output file '%s'", VAR_6);

 FUNC_1("added forceload directives to %s\n", VAR_6);
}
