
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {unsigned long pgoff; int page; } ;
struct vm_area_struct {scalar_t__ vm_private_data; } ;
struct usX2Ydev {scalar_t__ hwdep_pcm_shm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_1,
     struct vm_fault *VAR_2)
{
 unsigned long VAR_3;
 void *VAR_4;

 VAR_3 = VAR_2->pgoff << VAR_0;
 VAR_4 = (char*)((struct usX2Ydev *)VAR_1->vm_private_data)->hwdep_pcm_shm + VAR_3;
 VAR_2->page = FUNC_1(VAR_4);
 FUNC_0(VAR_2->page);
 return 0;
}
