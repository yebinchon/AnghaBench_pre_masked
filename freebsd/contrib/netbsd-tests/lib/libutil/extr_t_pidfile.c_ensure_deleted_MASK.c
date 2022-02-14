
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3)
{
 FUNC_3("Ensuring pidfile %s does not exist any more\n", VAR_3);
 if (FUNC_0(VAR_3, VAR_1) != -1) {
  FUNC_4(VAR_3);
  if (VAR_2)
   FUNC_2(VAR_0, "The pidfile %s was not deleted",
       VAR_3);
  else
   FUNC_1("The pidfile %s was not deleted", VAR_3);
 }
}
