
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef TYPE_1__* gss_OID ;
struct TYPE_3__ {scalar_t__ length; int elements; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,size_t,int const**) ;
 scalar_t__ FUNC_1 (int const*,int ,scalar_t__) ;
 int * FUNC_2 (int const*) ;

OM_uint32
FUNC_3(u_char **VAR_3,
      size_t VAR_4,
      gss_OID VAR_5)
{
    const u_char *VAR_6;
    ssize_t VAR_7;

    VAR_7 = FUNC_0 (*VAR_3, VAR_4, &VAR_6);
    if (VAR_7 < 0)
 return VAR_2;

    if (VAR_7 != VAR_5->length)
 return VAR_0;
    if (FUNC_1(VAR_6,
    VAR_5->elements,
    VAR_5->length) != 0)
 return VAR_0;
    VAR_6 += VAR_7;
    *VAR_3 = FUNC_2(VAR_6);
    return VAR_1;
}
