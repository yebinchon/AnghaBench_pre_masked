
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int set ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; int value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int) ;

__attribute__((used)) static OM_uint32
FUNC_1(OM_uint32 *VAR_2,
   const gss_buffer_t VAR_3,
   OM_uint32 VAR_4)
{
    *VAR_2 = 0;
    if (VAR_3->length == sizeof(VAR_4))
 FUNC_0(VAR_3->value, &VAR_4, sizeof(VAR_4));
    else
 return VAR_1;

    return VAR_0;
}
