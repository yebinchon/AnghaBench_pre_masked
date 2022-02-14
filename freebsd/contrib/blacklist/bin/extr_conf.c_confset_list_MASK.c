
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct confset {size_t cs_n; int * cs_c; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (char*,int,char*,char*,int *) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_5(const struct confset *VAR_2, const char *VAR_3, const char *VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_1)(VAR_1, "[%s]", VAR_3);
 FUNC_1)(VAR_1, "%20.20s\ttype\tproto\towner\tname\tnfail\tduration",
     VAR_4);
 for (size_t VAR_6 = 0; VAR_6 < VAR_2->cs_n; VAR_6++)
  FUNC_1)(VAR_1, "%s", FUNC_0(VAR_5, sizeof(VAR_5), "", "\t",
      &VAR_2->cs_c[VAR_6]));
}
