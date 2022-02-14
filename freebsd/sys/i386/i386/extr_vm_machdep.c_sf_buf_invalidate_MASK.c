
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct sf_buf {scalar_t__ kva; int m; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct sf_buf *VAR_1)
{
 vm_page_t VAR_2 = VAR_1->m;






 FUNC_1(VAR_1->kva, &VAR_2, 1);
 FUNC_0(VAR_1->kva, VAR_1->kva + VAR_0);
}
