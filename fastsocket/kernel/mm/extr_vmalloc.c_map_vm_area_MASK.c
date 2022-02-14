
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {unsigned long size; scalar_t__ addr; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,int ,struct page**) ;

int FUNC_1(struct vm_struct *VAR_1, pgprot_t VAR_2, struct page ***VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->addr;
 unsigned long VAR_5 = VAR_4 + VAR_1->size - VAR_0;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_2, *VAR_3);
 if (VAR_6 > 0) {
  *VAR_3 += VAR_6;
  VAR_6 = 0;
 }

 return VAR_6;
}
