
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry {int lf_outedges; } ;
struct lockf_edge {int dummy; } ;


 struct lockf_edge* FUNC_0 (int *) ;
 int FUNC_1 (struct lockf_edge*) ;

__attribute__((used)) static void
FUNC_2(struct lockf_entry *VAR_0)
{
 struct lockf_edge *VAR_1;

 while ((VAR_1 = FUNC_0(&VAR_0->lf_outedges)) != ((void*)0)) {
  FUNC_1(VAR_1);
 }
}
