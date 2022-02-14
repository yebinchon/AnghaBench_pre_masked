
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(long long* VAR_0, long long* VAR_1, long long VAR_2, long long VAR_3)
{

 (*VAR_0) += VAR_2;
 (*VAR_1) += VAR_3;
 if((*VAR_1) > 1000000) {
  (*VAR_1) -= 1000000;
  (*VAR_0)++;
 }

}
