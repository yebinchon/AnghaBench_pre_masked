
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int * FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,unsigned long,unsigned long,int ,struct page**,int*) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_0, unsigned long VAR_1,
       pgprot_t VAR_2, struct page **VAR_3)
{
 pgd_t *VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6 = VAR_0;
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_0(VAR_6 >= VAR_1);
 VAR_4 = FUNC_2(VAR_6);
 do {
  VAR_5 = FUNC_1(VAR_6, VAR_1);
  VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_5, VAR_2, VAR_3, &VAR_8);
  if (VAR_7)
   return VAR_7;
 } while (VAR_4++, VAR_6 = VAR_5, VAR_6 != VAR_1);

 return VAR_8;
}
