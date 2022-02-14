
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strhdr {struct strhdr* next; } ;
struct TYPE_2__ {struct strhdr* next; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*) ;
 TYPE_1__* VAR_1 ;

char *
FUNC_5(char *VAR_2)
{
 struct strhdr *VAR_3;
 size_t VAR_4;
 char *VAR_5;

 if (VAR_2 == ((void*)0))
  FUNC_2("bad name\n");
 VAR_4 = FUNC_4(VAR_2);
 VAR_3 = VAR_1[VAR_4 / VAR_0].next;
 if (VAR_3 != ((void*)0)) {
  VAR_1[VAR_4 / VAR_0].next = VAR_3->next;
  VAR_5 = (char *)VAR_3;
 } else {
  VAR_5 = FUNC_1(FUNC_0(VAR_4));
  if (VAR_5 == ((void*)0))
   FUNC_2("no space for string table\n");
 }
 (void) FUNC_3(VAR_5, VAR_2);
 return (VAR_5);
}
