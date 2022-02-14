
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_arg_field {int ref; char* name; struct perf_probe_arg_field* next; int index; } ;
struct perf_probe_arg {char* var; int * name; struct perf_probe_arg_field* field; int * type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char*,char) ;
 void* FUNC_4 (char*) ;
 void* FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char**,int ) ;
 struct perf_probe_arg_field* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(char *VAR_2, struct perf_probe_arg *VAR_3)
{
 char *VAR_4, *VAR_5;
 struct perf_probe_arg_field **VAR_6;

 FUNC_1("parsing arg: %s into ", VAR_2);

 VAR_4 = FUNC_3(VAR_2, '=');
 if (VAR_4) {
  VAR_3->name = FUNC_5(VAR_2, VAR_4 - VAR_2);
  if (VAR_3->name == ((void*)0))
   return -VAR_1;
  FUNC_1("name:%s ", VAR_3->name);
  VAR_2 = VAR_4 + 1;
 }

 VAR_4 = FUNC_3(VAR_2, ':');
 if (VAR_4) {
  *VAR_4 = '\0';
  VAR_3->type = FUNC_4(VAR_4 + 1);
  if (VAR_3->type == ((void*)0))
   return -VAR_1;
  FUNC_1("type:%s ", VAR_3->type);
 }

 VAR_4 = FUNC_6(VAR_2, "-.[");
 if (!FUNC_0(VAR_2) || !VAR_4) {

  VAR_3->var = FUNC_4(VAR_2);
  if (VAR_3->var == ((void*)0))
   return -VAR_1;
  FUNC_1("%s\n", VAR_3->var);
  return 0;
 }


 VAR_3->var = FUNC_5(VAR_2, VAR_4 - VAR_2);
 if (VAR_3->var == ((void*)0))
  return -VAR_1;
 VAR_5 = VAR_3->var;
 FUNC_1("%s, ", VAR_3->var);
 VAR_6 = &VAR_3->field;

 do {
  *VAR_6 = FUNC_8(sizeof(struct perf_probe_arg_field));
  if (*VAR_6 == ((void*)0))
   return -VAR_1;
  if (*VAR_4 == '[') {
   VAR_2 = VAR_4;
   (*VAR_6)->index = FUNC_7(VAR_2 + 1, &VAR_4, 0);
   (*VAR_6)->ref = 1;
   if (*VAR_4 != ']' || VAR_4 == VAR_2 + 1) {
    FUNC_2("Array index must be a"
      " number.\n");
    return -VAR_0;
   }
   VAR_4++;
   if (*VAR_4 == '\0')
    VAR_4 = ((void*)0);
  } else {
   if (*VAR_4 == '.') {
    VAR_2 = VAR_4 + 1;
    (*VAR_6)->ref = 0;
   } else if (VAR_4[1] == '>') {
    VAR_2 = VAR_4 + 2;
    (*VAR_6)->ref = 1;
   } else {
    FUNC_2("Argument parse error: %s\n",
            VAR_2);
    return -VAR_0;
   }
   VAR_4 = FUNC_6(VAR_2, "-.[");
  }
  if (VAR_4) {
   (*VAR_6)->name = FUNC_5(VAR_2, VAR_4 - VAR_2);
   if ((*VAR_6)->name == ((void*)0))
    return -VAR_1;
   if (*VAR_2 != '[')
    VAR_5 = (*VAR_6)->name;
   FUNC_1("%s(%d), ", (*VAR_6)->name, (*VAR_6)->ref);
   VAR_6 = &(*VAR_6)->next;
  }
 } while (VAR_4);
 (*VAR_6)->name = FUNC_4(VAR_2);
 if ((*VAR_6)->name == ((void*)0))
  return -VAR_1;
 if (*VAR_2 != '[')
  VAR_5 = (*VAR_6)->name;
 FUNC_1("%s(%d)\n", (*VAR_6)->name, (*VAR_6)->ref);


 if (!VAR_3->name) {
  VAR_3->name = FUNC_4(VAR_5);
  if (VAR_3->name == ((void*)0))
   return -VAR_1;
 }
 return 0;
}
