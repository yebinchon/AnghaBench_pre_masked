
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* voidp ;
struct TYPE_7__ {scalar_t__ fs_refc; int fs_flags; struct TYPE_7__* fs_host; struct TYPE_7__* fs_ip; scalar_t__ fs_private; int (* fs_prfree ) (scalar_t__) ;int fs_q; } ;
typedef TYPE_1__ fserver ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(voidp VAR_1)
{
  fserver *VAR_2 = VAR_1;





  if (VAR_2->fs_refc == 0) {
    FUNC_1("Deleting file server %s", VAR_2->fs_host);
    if (VAR_2->fs_flags & VAR_0)
      FUNC_4(VAR_2);




    FUNC_2(&VAR_2->fs_q);



    if (VAR_2->fs_private && VAR_2->fs_prfree)
      (*VAR_2->fs_prfree) (VAR_2->fs_private);




    FUNC_0(VAR_2->fs_ip);




    FUNC_0(VAR_2->fs_host);




    FUNC_0(VAR_2);
  }
}
