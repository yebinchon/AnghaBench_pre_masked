
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_vm_allocation {void* ptr; scalar_t__ size; } ;
struct cuse_alloc_info {int alloc_nr; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 struct cuse_vm_allocation* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,int ,struct cuse_alloc_info*) ;
 int FUNC_4 (struct cuse_alloc_info*,int ,int) ;
 int FUNC_5 (void*,scalar_t__) ;

void
FUNC_6(void *VAR_5)
{
 struct cuse_vm_allocation VAR_6;
 struct cuse_alloc_info VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_4 < 0)
  return;

 FUNC_0();
 for (VAR_9 = 0; VAR_9 != VAR_0; VAR_9++) {
  if (VAR_2[VAR_9].ptr != VAR_5)
   continue;

  VAR_6 = VAR_2[VAR_9];

  FUNC_1();

  FUNC_5(VAR_6.ptr, VAR_6.size);

  FUNC_4(&VAR_7, 0, sizeof(VAR_7));

  VAR_7.alloc_nr = VAR_9;

  VAR_8 = FUNC_3(VAR_4, VAR_1, &VAR_7);

  if (VAR_8 != 0) {

   FUNC_2("Freeing memory failed: %d\n", VAR_3);
  }
  FUNC_0();

  VAR_2[VAR_9].ptr = ((void*)0);
  VAR_2[VAR_9].size = 0;

  break;
 }
 FUNC_1();
}
