
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ vm_nbusytag; int * vm_hashlist; int * vm_hash0; int vm_seglist; int vm_cursor; } ;
typedef TYPE_1__ vmem_t ;
typedef int bt_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_11(vmem_t *VAR_3)
{
 bt_t *VAR_4;




 FUNC_9(VAR_3);




 FUNC_4(VAR_3);
 FUNC_0(VAR_3->vm_nbusytag == 0);

 FUNC_2(&VAR_3->vm_seglist, &VAR_3->vm_cursor, VAR_1);
 while ((VAR_4 = FUNC_1(&VAR_3->vm_seglist)) != ((void*)0))
  FUNC_7(VAR_3, VAR_4);

 if (VAR_3->vm_hashlist != ((void*)0) && VAR_3->vm_hashlist != VAR_3->vm_hash0)
  FUNC_8(VAR_3->vm_hashlist, VAR_0);

 FUNC_6(VAR_3, 0);

 FUNC_3(VAR_3);
 FUNC_5(VAR_3);
 FUNC_10(VAR_2, VAR_3);
}
