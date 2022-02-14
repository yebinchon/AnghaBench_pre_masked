
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int *,unsigned long,unsigned long,scalar_t__,int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int * FUNC_4 (unsigned long) ;

int FUNC_5(unsigned long VAR_0,
         unsigned long VAR_1, phys_addr_t VAR_2, pgprot_t VAR_3)
{
 pgd_t *VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(VAR_0 >= VAR_1);

 VAR_5 = VAR_0;
 VAR_2 -= VAR_0;
 VAR_4 = FUNC_4(VAR_0);
 do {
  VAR_6 = FUNC_3(VAR_0, VAR_1);
  VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_6, VAR_2+VAR_0, VAR_3);
  if (VAR_7)
   break;
 } while (VAR_4++, VAR_0 = VAR_6, VAR_0 != VAR_1);

 FUNC_1(VAR_5, VAR_1);

 return VAR_7;
}
