
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atalk_iface {struct atalk_iface* next; } ;
typedef scalar_t__ loff_t ;


 struct atalk_iface* VAR_0 ;

__attribute__((used)) static __inline__ struct atalk_iface *FUNC_0(loff_t VAR_1)
{
 struct atalk_iface *VAR_2;

 for (VAR_2 = VAR_0; VAR_1 && VAR_2; VAR_2 = VAR_2->next)
  --VAR_1;

 return VAR_2;
}
