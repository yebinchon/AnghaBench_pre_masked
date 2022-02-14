
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_kernel_status {int deny_unknown; scalar_t__ policyload; int enforcing; scalar_t__ sequence; int version; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct selinux_kernel_status* FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* VAR_5 ;

struct page *FUNC_5(void)
{
 struct selinux_kernel_status *VAR_6;
 struct page *VAR_7 = ((void*)0);

 FUNC_1(&VAR_4);
 if (!VAR_5) {
  VAR_5 = FUNC_0(VAR_0|VAR_2);

  if (VAR_5) {
   VAR_6 = FUNC_3(VAR_5);

   VAR_6->version = VAR_1;
   VAR_6->sequence = 0;
   VAR_6->enforcing = VAR_3;






   VAR_6->policyload = 0;
   VAR_6->deny_unknown = !FUNC_4();
  }
 }
 VAR_7 = VAR_5;
 FUNC_2(&VAR_4);

 return VAR_7;
}
