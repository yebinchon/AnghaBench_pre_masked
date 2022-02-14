
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union daio_usage {int data; } ;
struct rsc_mgr {scalar_t__ rscs; } ;
typedef enum DAIOTYP { ____Placeholder_DAIOTYP } DAIOTYP ;



__attribute__((used)) static int FUNC_0(struct rsc_mgr *VAR_0, enum DAIOTYP VAR_1)
{
 ((union daio_usage *)VAR_0->rscs)->data &= ~(0x1 << VAR_1);

 return 0;
}
