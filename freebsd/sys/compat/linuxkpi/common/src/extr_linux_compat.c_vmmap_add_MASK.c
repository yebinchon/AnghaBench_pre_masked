
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmap {unsigned long vm_size; void* vm_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vmmap*,int ) ;
 size_t FUNC_1 (void*) ;
 struct vmmap* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(void *VAR_4, unsigned long VAR_5)
{
 struct vmmap *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 FUNC_3(&VAR_3);
 VAR_6->vm_size = VAR_5;
 VAR_6->vm_addr = VAR_4;
 FUNC_0(&VAR_2[FUNC_1(VAR_4)], VAR_6, VAR_1);
 FUNC_4(&VAR_3);
}
