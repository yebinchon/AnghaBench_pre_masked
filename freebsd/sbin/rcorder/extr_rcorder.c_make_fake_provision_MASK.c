
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* last; struct TYPE_6__* next; TYPE_2__* fnode; void* in_progress; void* head; } ;
typedef TYPE_1__ provnode ;
struct TYPE_7__ {TYPE_3__* prov_list; } ;
typedef TYPE_2__ filenode ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_1__* pnode; } ;
typedef TYPE_3__ f_provnode ;
typedef int Hash_Entry ;


 int * FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char*,int ) ;

__attribute__((used)) static Hash_Entry *
FUNC_4(filenode *VAR_3)
{
 Hash_Entry *VAR_4;
 f_provnode *VAR_5;
 provnode *VAR_6, *VAR_7;
 static int VAR_8 = 0;
 int VAR_9;
 char VAR_10[30];

 do {
  FUNC_3(VAR_10, sizeof VAR_10, "fake_prov_%08d", VAR_8++);
  VAR_4 = FUNC_0(VAR_2, VAR_10, &VAR_9);
 } while (VAR_9 == 0);
 VAR_6 = FUNC_2(sizeof(*VAR_6));
 VAR_6->head = VAR_1;
 VAR_6->in_progress = VAR_0;
 VAR_6->fnode = ((void*)0);
 VAR_6->last = VAR_6->next = ((void*)0);
 FUNC_1(VAR_4, VAR_6);

 VAR_7 = FUNC_2(sizeof(*VAR_7));
 VAR_7->head = VAR_0;
 VAR_7->in_progress = VAR_0;
 VAR_7->fnode = VAR_3;
 VAR_7->next = VAR_6->next;
 VAR_7->last = VAR_6;
 VAR_6->next = VAR_7;
 if (VAR_7->next != ((void*)0))
  VAR_7->next->last = VAR_7;

 VAR_5 = FUNC_2(sizeof(*VAR_5));
 VAR_5->pnode = VAR_7;
 VAR_5->next = VAR_3->prov_list;
 VAR_3->prov_list = VAR_5;

 return (VAR_4);
}
