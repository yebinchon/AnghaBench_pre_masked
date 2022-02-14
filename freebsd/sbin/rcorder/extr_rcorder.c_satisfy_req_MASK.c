
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ in_progress; TYPE_1__* next; } ;
typedef TYPE_2__ provnode ;
struct TYPE_8__ {int * entry; } ;
typedef TYPE_3__ f_reqnode ;
struct TYPE_6__ {int fnode; } ;
typedef int Hash_Entry ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,char*) ;

__attribute__((used)) static void
FUNC_4(f_reqnode *VAR_2, char *VAR_3)
{
 Hash_Entry *VAR_4;
 provnode *VAR_5;

 VAR_4 = VAR_2->entry;
 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 == ((void*)0)) {
  FUNC_3("requirement `%s' in file `%s' has no providers.",
      FUNC_0(VAR_4), VAR_3);
  VAR_1 = 1;
  return;
 }


 if (VAR_5->next == ((void*)0))
  return;





 if (VAR_5->in_progress == VAR_0) {
  FUNC_3("Circular dependency on provision `%s' in file `%s'.",
      FUNC_0(VAR_4), VAR_3);
  VAR_1 = 1;
  return;
 }

 VAR_5->in_progress = VAR_0;





 while (VAR_5->next != ((void*)0))
  FUNC_2(VAR_5->next->fnode);
}
