
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct user_segment_descriptor {int dummy; } ;
struct proc_ldt {scalar_t__ ldt_refcnt; scalar_t__ ldt_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc_ldt*,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct proc_ldt *VAR_2)
{
 vm_offset_t VAR_3;
 vm_size_t VAR_4;

 if (--VAR_2->ldt_refcnt == 0) {
  VAR_3 = (vm_offset_t)VAR_2->ldt_base;
  VAR_4 = VAR_1 * sizeof(struct user_segment_descriptor);
  FUNC_2(VAR_3, VAR_3 + VAR_4);
  FUNC_1(VAR_3, VAR_4);
  FUNC_0(VAR_2, VAR_0);
 }
}
