
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int agent_fd; int keys; } ;
struct TYPE_7__ {struct TYPE_7__* filename; int key; } ;
typedef TYPE_1__ Identity ;
typedef TYPE_2__ Authctxt ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(Authctxt *VAR_1)
{
 Identity *VAR_2;

 if (VAR_1->agent_fd != -1)
  FUNC_3(VAR_1->agent_fd);
 for (VAR_2 = FUNC_0(&VAR_1->keys); VAR_2;
     VAR_2 = FUNC_0(&VAR_1->keys)) {
  FUNC_1(&VAR_1->keys, VAR_2, VAR_0);
  FUNC_4(VAR_2->key);
  FUNC_2(VAR_2->filename);
  FUNC_2(VAR_2);
 }
}
