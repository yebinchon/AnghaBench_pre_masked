
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_0)
{
 FUNC_0("Analyze events for ");

 if (VAR_0 == -1)
  FUNC_0("all VCPUs:\n\n");
 else
  FUNC_0("VCPU %d:\n\n", VAR_0);
}
