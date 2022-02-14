
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union parameter_info {int dummy; } parameter_info ;
struct ipcp_formal {union parameter_info cvalue; } ;



__attribute__((used)) static inline union parameter_info *
FUNC_0 (struct ipcp_formal *VAR_0)
{
  return &(VAR_0->cvalue);
}
