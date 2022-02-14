
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct confset {scalar_t__ cs_n; scalar_t__ cs_m; } ;



__attribute__((used)) static bool
FUNC_0(const struct confset *VAR_0)
{
 return VAR_0->cs_n == VAR_0->cs_m;
}
