
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ip_set_id_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

ip_set_id_t
FUNC_3(ip_set_id_t VAR_3)
{
 if (VAR_3 > VAR_2)
  return VAR_0;

 FUNC_1();
 if (VAR_1[VAR_3])
  FUNC_0(VAR_3);
 else
  VAR_3 = VAR_0;
 FUNC_2();

 return VAR_3;
}
