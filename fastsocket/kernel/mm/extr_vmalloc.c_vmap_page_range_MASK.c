
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pgprot_t ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long,int ,struct page**) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_0, unsigned long VAR_1,
      pgprot_t VAR_2, struct page **VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_0, VAR_1);
 return VAR_4;
}
