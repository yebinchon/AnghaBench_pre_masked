
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* t_emem; int t_type; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_7__ {char* el_name; struct TYPE_7__* el_next; int el_number; } ;
typedef TYPE_2__ elist_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*,char**) ;
 char* FUNC_2 (char*,int *) ;
 int FUNC_3 (int,int *,char*,int ,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(char *VAR_1, tdesc_t **VAR_2)
{
 elist_t *VAR_3, **VAR_4;
 char *VAR_5;

 (*VAR_2)->t_type = VAR_0;
 (*VAR_2)->t_emem = ((void*)0);

 VAR_4 = &((*VAR_2)->t_emem);
 while (*VAR_1 != ';') {
  VAR_3 = FUNC_5(sizeof (*VAR_3));
  VAR_3->el_next = ((void*)0);
  *VAR_4 = VAR_3;
  VAR_1 = FUNC_1(VAR_1, &VAR_5);
  VAR_3->el_name = VAR_5;
  VAR_1 = FUNC_2(VAR_1, &VAR_3->el_number);
  FUNC_3(3, ((void*)0), "enum %s: %s=%d", FUNC_4(*VAR_2),
      VAR_3->el_name, VAR_3->el_number);
  VAR_4 = &VAR_3->el_next;
  if (*VAR_1++ != ',')
   FUNC_0("enumdef", ",", VAR_1 - 1);
 }
}
