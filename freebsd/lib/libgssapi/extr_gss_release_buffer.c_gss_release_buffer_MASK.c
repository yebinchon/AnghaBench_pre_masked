
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
struct TYPE_4__ {scalar_t__ value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_1,
     gss_buffer_t VAR_2)
{

 *VAR_1 = 0;
 if (VAR_2->value)
  FUNC_1(VAR_2->value);
 FUNC_0(VAR_2);

 return (VAR_0);
}
