
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {scalar_t__ ip; } ;
typedef int int64_t ;



__attribute__((used)) static int64_t
FUNC_0(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 return (int64_t)(VAR_1->ip - VAR_0->ip);
}
