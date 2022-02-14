
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int s; TYPE_5__* node; struct TYPE_11__* next; } ;
typedef TYPE_2__ strnodelist ;
struct TYPE_12__ {TYPE_1__* fnode; scalar_t__ head; struct TYPE_12__* next; } ;
typedef TYPE_3__ provnode ;
struct TYPE_13__ {struct TYPE_13__* next; int * entry; } ;
typedef TYPE_4__ f_reqnode ;
struct TYPE_14__ {int filename; } ;
struct TYPE_10__ {TYPE_4__* req_list; } ;
typedef int Hash_Entry ;


 int * FUNC_0 (int ,int ,int*) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_2__* VAR_0 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 Hash_Entry *VAR_2, *VAR_3;
 provnode *VAR_4;
 f_reqnode *VAR_5;
 strnodelist *VAR_6;
 int VAR_7;

 while (VAR_0 != ((void*)0)) {
  VAR_6 = VAR_0->next;

  VAR_3 = FUNC_4(VAR_0->node);

  VAR_2 = FUNC_0(VAR_1, VAR_0->s, &VAR_7);
  if (VAR_7 == 1)
   FUNC_5("file `%s' is before unknown provision `%s'", VAR_0->node->filename, VAR_0->s);

  for (VAR_4 = FUNC_1(VAR_2); VAR_4; VAR_4 = VAR_4->next) {
   if (VAR_4->head)
    continue;

   VAR_5 = FUNC_2(sizeof(*VAR_5));
   VAR_5->entry = VAR_3;
   VAR_5->next = VAR_4->fnode->req_list;
   VAR_4->fnode->req_list = VAR_5;
  }

  FUNC_3(VAR_0);
  VAR_0 = VAR_6;
 }
}
