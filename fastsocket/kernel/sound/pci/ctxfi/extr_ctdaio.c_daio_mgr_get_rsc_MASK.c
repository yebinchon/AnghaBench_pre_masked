
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union daio_usage {int data; } ;
struct rsc_mgr {scalar_t__ rscs; } ;
typedef enum DAIOTYP { ____Placeholder_DAIOTYP } DAIOTYP ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rsc_mgr *VAR_1, enum DAIOTYP VAR_2)
{
 if (((union daio_usage *)VAR_1->rscs)->data & (0x1 << VAR_2))
  return -VAR_0;

 ((union daio_usage *)VAR_1->rscs)->data |= (0x1 << VAR_2);

 return 0;
}
