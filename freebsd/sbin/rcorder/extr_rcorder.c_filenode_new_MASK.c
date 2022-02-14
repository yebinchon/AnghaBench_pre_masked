
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* last; int in_progress; int * keyword_list; int * prov_list; int * req_list; int filename; } ;
typedef TYPE_1__ filenode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static filenode *
FUNC_3(char *VAR_2)
{
 filenode *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->filename = FUNC_1(VAR_2);
 VAR_3->req_list = ((void*)0);
 VAR_3->prov_list = ((void*)0);
 VAR_3->keyword_list = ((void*)0);
 VAR_3->in_progress = VAR_0;





 VAR_3->next = VAR_1->next;
 if (VAR_3->next != ((void*)0))
  VAR_3->next->last = VAR_3;
 VAR_3->last = VAR_1;
 VAR_1->next = VAR_3;
 return (VAR_3);
}
