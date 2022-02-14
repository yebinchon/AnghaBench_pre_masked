
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct confset {size_t cs_n; struct conf* cs_c; } ;
struct conf {int dummy; } ;



__attribute__((used)) static struct conf *
FUNC_0(struct confset *VAR_0)
{
 return &VAR_0->cs_c[VAR_0->cs_n];
}
