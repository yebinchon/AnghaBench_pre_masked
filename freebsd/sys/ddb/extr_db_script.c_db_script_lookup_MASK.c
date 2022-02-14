
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_script {int ds_scriptname; } ;


 int DB_MAXSCRIPTS ;
 struct ddb_script* db_script_table ;
 scalar_t__ strcmp (int ,char const*) ;

__attribute__((used)) static struct ddb_script *
db_script_lookup(const char *scriptname)
{
 int i;

 for (i = 0; i < DB_MAXSCRIPTS; i++) {
  if (strcmp(db_script_table[i].ds_scriptname, scriptname) ==
      0)
   return (&db_script_table[i]);
 }
 return (((void*)0));
}
