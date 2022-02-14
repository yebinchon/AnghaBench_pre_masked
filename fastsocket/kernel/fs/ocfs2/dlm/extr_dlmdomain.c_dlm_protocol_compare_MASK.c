
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_protocol_version {scalar_t__ pv_major; scalar_t__ pv_minor; } ;



__attribute__((used)) static int FUNC_0(struct dlm_protocol_version *VAR_0,
    struct dlm_protocol_version *VAR_1)
{
 if (VAR_0->pv_major != VAR_1->pv_major)
  return 1;

 if (VAR_0->pv_minor > VAR_1->pv_minor)
  return 1;

 if (VAR_0->pv_minor < VAR_1->pv_minor)
  VAR_1->pv_minor = VAR_0->pv_minor;

 return 0;
}
