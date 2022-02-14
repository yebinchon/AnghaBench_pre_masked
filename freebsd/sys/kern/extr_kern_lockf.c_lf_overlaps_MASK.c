
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry {scalar_t__ lf_start; scalar_t__ lf_end; } ;



__attribute__((used)) static int
FUNC_0(struct lockf_entry *VAR_0, struct lockf_entry *VAR_1)
{

 return (VAR_0->lf_start <= VAR_1->lf_end && VAR_0->lf_end >= VAR_1->lf_start);
}
