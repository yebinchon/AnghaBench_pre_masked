
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_script {int ds_script; int ds_scriptname; } ;


 int VAR_0 ;
 struct ddb_script* FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1)
{
 struct ddb_script *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 FUNC_1(VAR_2->ds_scriptname, "");
 FUNC_1(VAR_2->ds_script, "");
 return (0);
}
