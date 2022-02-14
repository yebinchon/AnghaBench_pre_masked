
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_script {int ds_script; int ds_scriptname; } ;


 int VAR_0 ;
 struct ddb_script* FUNC_0 (char const*) ;
 struct ddb_script* FUNC_1 () ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, const char *VAR_2)
{
 struct ddb_script *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4)
  return (VAR_4);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_1();
  if (VAR_3 == ((void*)0))
   return (VAR_0);
  FUNC_3(VAR_3->ds_scriptname, VAR_1,
      sizeof(VAR_3->ds_scriptname));
 }
 FUNC_3(VAR_3->ds_script, VAR_2, sizeof(VAR_3->ds_script));
 return (0);
}
