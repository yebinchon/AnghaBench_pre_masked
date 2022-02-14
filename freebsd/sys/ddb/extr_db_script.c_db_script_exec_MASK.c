
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_script {int ds_scriptname; int ds_script; } ;
struct db_recursion_data {char* drd_buffer; } ;
typedef void* jmp_buf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,...) ;
 size_t VAR_3 ;
 struct db_recursion_data* VAR_4 ;
 struct ddb_script* FUNC_3 (char const*) ;
 void* FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_5, int VAR_6)
{
 struct db_recursion_data *VAR_7;
 struct ddb_script *VAR_8;
 char *VAR_9, *VAR_10;
 void *VAR_11;
 jmp_buf VAR_12;

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 == ((void*)0)) {
  if (VAR_6)
   FUNC_2("script '%s' not found\n", VAR_5);
  return (VAR_2);
 }

 if (VAR_3 >= VAR_0) {
  FUNC_2("Script stack too deep\n");
  return (VAR_1);
 }
 VAR_3++;
 VAR_7 = &VAR_4[VAR_3];




 VAR_9 = VAR_7->drd_buffer;
 FUNC_6(VAR_9, VAR_8->ds_script);
 while ((VAR_10 = FUNC_7(&VAR_9, ";")) != ((void*)0)) {
  FUNC_2("db:%d:%s> %s\n", VAR_3, VAR_8->ds_scriptname,
      VAR_10);
  FUNC_1(&VAR_10);
  VAR_11 = FUNC_4(VAR_12);
  if (FUNC_5(VAR_12) == 0)
   FUNC_0(VAR_10);
  else
   FUNC_2("Script command '%s' returned error\n",
       VAR_10);
  FUNC_4(VAR_11);
 }
 VAR_3--;
 return (0);
}
