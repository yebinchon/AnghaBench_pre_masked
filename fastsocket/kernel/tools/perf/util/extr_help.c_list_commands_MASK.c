
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdnames {unsigned int cnt; TYPE_1__** names; } ;
struct TYPE_2__ {unsigned int len; } ;


 int FUNC_0 (char,scalar_t__) ;
 char* FUNC_1 () ;
 int FUNC_2 (struct cmdnames*,unsigned int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char const*) ;

void FUNC_6(const char *VAR_0, struct cmdnames *VAR_1,
     struct cmdnames *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->cnt; VAR_3++)
  if (VAR_4 < VAR_1->names[VAR_3]->len)
   VAR_4 = VAR_1->names[VAR_3]->len;
 for (VAR_3 = 0; VAR_3 < VAR_2->cnt; VAR_3++)
  if (VAR_4 < VAR_2->names[VAR_3]->len)
   VAR_4 = VAR_2->names[VAR_3]->len;

 if (VAR_1->cnt) {
  const char *VAR_5 = FUNC_1();
  FUNC_3("available %s in '%s'\n", VAR_0, VAR_5);
  FUNC_3("----------------");
  FUNC_0('-', FUNC_5(VAR_0) + FUNC_5(VAR_5));
  FUNC_4('\n');
  FUNC_2(VAR_1, VAR_4);
  FUNC_4('\n');
 }

 if (VAR_2->cnt) {
  FUNC_3("%s available from elsewhere on your $PATH\n", VAR_0);
  FUNC_3("---------------------------------------");
  FUNC_0('-', FUNC_5(VAR_0));
  FUNC_4('\n');
  FUNC_2(VAR_2, VAR_4);
  FUNC_4('\n');
 }
}
