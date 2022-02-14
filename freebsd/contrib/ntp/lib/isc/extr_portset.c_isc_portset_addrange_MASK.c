
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_portset_t ;
typedef scalar_t__ in_port_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;

void
FUNC_2(isc_portset_t *VAR_0, in_port_t VAR_1,
       in_port_t VAR_2)
{
 in_port_t VAR_3;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 <= VAR_2);

 VAR_3 = VAR_1;
 do {
  FUNC_1(VAR_0, VAR_3);
 } while (VAR_3++ < VAR_2);
}
