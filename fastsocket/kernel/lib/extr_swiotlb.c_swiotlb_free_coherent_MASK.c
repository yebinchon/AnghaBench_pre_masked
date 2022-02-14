
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,void*,size_t,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct device *VAR_1, size_t VAR_2, void *VAR_3,
        dma_addr_t VAR_4)
{
 phys_addr_t VAR_5 = FUNC_1(VAR_1, VAR_4);

 FUNC_0(FUNC_5());
 if (!FUNC_6(VAR_5))
  FUNC_3((unsigned long)VAR_3, FUNC_4(VAR_2));
 else

  FUNC_2(VAR_1, VAR_3, VAR_2, VAR_0);
}
