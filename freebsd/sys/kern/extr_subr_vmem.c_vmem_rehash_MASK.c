
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vm_hashsize; struct vmem_hashlist* vm_hash0; struct vmem_hashlist* vm_hashlist; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;
struct vmem_hashlist {int dummy; } ;
typedef int bt_t ;


 int VAR_0 ;
 int * FUNC_0 (struct vmem_hashlist*) ;
 int FUNC_1 (struct vmem_hashlist*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (struct vmem_hashlist*,int ) ;
 struct vmem_hashlist* FUNC_8 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_9(vmem_t *VAR_3, vmem_size_t VAR_4)
{
 bt_t *VAR_5;
 int VAR_6;
 struct vmem_hashlist *VAR_7;
 struct vmem_hashlist *VAR_8;
 vmem_size_t VAR_9;

 FUNC_2(VAR_4 > 0);

 VAR_7 = FUNC_8(sizeof(struct vmem_hashlist) * VAR_4,
     VAR_2, VAR_1);
 if (VAR_7 == ((void*)0))
  return VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_1(&VAR_7[VAR_6]);
 }

 FUNC_3(VAR_3);
 VAR_8 = VAR_3->vm_hashlist;
 VAR_9 = VAR_3->vm_hashsize;
 VAR_3->vm_hashlist = VAR_7;
 VAR_3->vm_hashsize = VAR_4;
 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_3);
  return 0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  while ((VAR_5 = FUNC_0(&VAR_8[VAR_6])) != ((void*)0)) {
   FUNC_6(VAR_3, VAR_5);
   FUNC_5(VAR_3, VAR_5);
  }
 }
 FUNC_4(VAR_3);

 if (VAR_8 != VAR_3->vm_hash0) {
  FUNC_7(VAR_8, VAR_2);
 }

 return 0;
}
