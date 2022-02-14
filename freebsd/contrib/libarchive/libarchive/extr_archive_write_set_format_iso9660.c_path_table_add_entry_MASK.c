
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_table {int cnt; struct isoent** last; } ;
struct isoent {struct isoent* ptnext; } ;



__attribute__((used)) static inline void
FUNC_0(struct path_table *VAR_0, struct isoent *VAR_1)
{
 VAR_1->ptnext = ((void*)0);
 *VAR_0->last = VAR_1;
 VAR_0->last = &(VAR_1->ptnext);
 VAR_0->cnt ++;
}
