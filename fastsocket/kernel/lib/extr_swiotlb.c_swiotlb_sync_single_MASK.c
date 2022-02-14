
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct device*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int ,size_t,int,int) ;

__attribute__((used)) static void
FUNC_6(struct device *VAR_2, dma_addr_t VAR_3,
      size_t VAR_4, int VAR_5, int VAR_6)
{
 phys_addr_t VAR_7 = FUNC_2(VAR_2, VAR_3);

 FUNC_0(VAR_5 == VAR_1);

 if (FUNC_3(VAR_7)) {
  FUNC_5(VAR_2, FUNC_4(VAR_7), VAR_4, VAR_5, VAR_6);
  return;
 }

 if (VAR_5 != VAR_0)
  return;

 FUNC_1(FUNC_4(VAR_7), VAR_4);
}
