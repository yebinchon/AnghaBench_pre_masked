
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; int * value; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static OM_uint32
FUNC_0(OM_uint32 *VAR_3,
  const gss_buffer_t VAR_4,
  int *VAR_5)
{
    if (VAR_4->value == ((void*)0) || VAR_4->length != 1) {
 *VAR_3 = VAR_0;
 return VAR_2;
    }
    *VAR_5 = *((const char *)VAR_4->value) != 0;
    return VAR_1;
}
