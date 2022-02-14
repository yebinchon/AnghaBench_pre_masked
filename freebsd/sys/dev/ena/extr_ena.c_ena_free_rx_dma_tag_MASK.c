
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int * rx_buf_tag; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct ena_adapter *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->rx_buf_tag);

 if (FUNC_1(VAR_1 == 0))
  VAR_0->rx_buf_tag = ((void*)0);

 return (VAR_1);
}
