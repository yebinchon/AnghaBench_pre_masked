
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* req_list; } ;
typedef TYPE_1__ filenode ;
struct TYPE_6__ {struct TYPE_6__* next; int * entry; } ;
typedef TYPE_2__ f_reqnode ;
typedef int Hash_Entry ;


 int * FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(filenode *VAR_1, char *VAR_2)
{
 Hash_Entry *VAR_3;
 f_reqnode *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_0, VAR_2, &VAR_5);
 if (VAR_5)
  FUNC_1(VAR_3, ((void*)0));
 VAR_4 = FUNC_2(sizeof(*VAR_4));
 VAR_4->entry = VAR_3;
 VAR_4->next = VAR_1->req_list;
 VAR_1->req_list = VAR_4;
}
