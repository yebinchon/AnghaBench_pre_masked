
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* last; struct TYPE_7__* next; TYPE_2__* fnode; void* in_progress; void* head; } ;
typedef TYPE_1__ provnode ;
struct TYPE_8__ {TYPE_3__* prov_list; int filename; } ;
typedef TYPE_2__ filenode ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__* pnode; } ;
typedef TYPE_3__ f_provnode ;
typedef int Hash_Entry ;


 int * FUNC_0 (int ,char*,int*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_5(filenode *VAR_3, char *VAR_4)
{
 Hash_Entry *VAR_5;
 f_provnode *VAR_6;
 provnode *VAR_7, *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_0(VAR_2, VAR_4, &VAR_9);
 VAR_8 = FUNC_1(VAR_5);


 if (VAR_8 == ((void*)0)) {
  VAR_8 = FUNC_3(sizeof(*VAR_8));
  VAR_8->head = VAR_1;
  VAR_8->in_progress = VAR_0;
  VAR_8->fnode = ((void*)0);
  VAR_8->last = VAR_8->next = ((void*)0);
  FUNC_2(VAR_5, VAR_8);
 }
 VAR_7 = FUNC_3(sizeof(*VAR_7));
 VAR_7->head = VAR_0;
 VAR_7->in_progress = VAR_0;
 VAR_7->fnode = VAR_3;
 VAR_7->next = VAR_8->next;
 VAR_7->last = VAR_8;
 VAR_8->next = VAR_7;
 if (VAR_7->next != ((void*)0))
  VAR_7->next->last = VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6));
 VAR_6->pnode = VAR_7;
 VAR_6->next = VAR_3->prov_list;
 VAR_3->prov_list = VAR_6;
}
