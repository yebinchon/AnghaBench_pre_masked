
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int vm_memattr_t ;
struct ttm_tt {int * pages; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int ) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ttm_tt *VAR_3, void *VAR_4,
    unsigned long VAR_5,
    vm_memattr_t VAR_6)
{
 vm_page_t VAR_7 = VAR_3->pages[VAR_5];
 void *VAR_8;

 if (!VAR_7)
  return -VAR_0;

 VAR_4 = (void *)((unsigned long)VAR_4 + (VAR_5 << VAR_1));


 VAR_8 = FUNC_2(FUNC_0(VAR_7), VAR_2, VAR_6);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(VAR_8, VAR_4, VAR_2);

 FUNC_3((vm_offset_t)VAR_8, VAR_2);

 return 0;
}
