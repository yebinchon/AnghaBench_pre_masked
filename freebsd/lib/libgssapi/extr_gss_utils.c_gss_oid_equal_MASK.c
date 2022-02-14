
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gss_OID ;
struct TYPE_4__ {scalar_t__ length; int elements; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(const gss_OID VAR_0, const gss_OID VAR_1)
{

 if (VAR_0 == VAR_1)
  return (1);
 if (!VAR_0 || !VAR_1)
  return (0);
 if (VAR_0->length != VAR_1->length)
  return (0);
 if (FUNC_0(VAR_0->elements, VAR_1->elements, VAR_0->length))
  return (0);
 return (1);
}
