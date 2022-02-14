
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_node {int an_cached; scalar_t__ an_wildcards; int * an_parent; struct autofs_mount* an_mount; } ;
struct autofs_mount {int dummy; } ;


 int FUNC_0 (struct autofs_mount*) ;
 int FUNC_1 (struct autofs_mount*) ;
 int FUNC_2 (struct autofs_mount*) ;
 int FUNC_3 (struct autofs_node*,char const*,int,int *) ;

bool
FUNC_4(struct autofs_node *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;
 struct autofs_mount *VAR_4;

 VAR_4 = VAR_0->an_mount;

 FUNC_0(VAR_4);
 if (VAR_0->an_parent == ((void*)0) && VAR_2 != 0 && VAR_0->an_wildcards) {
  FUNC_1(VAR_4);
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2, ((void*)0));
  FUNC_2(VAR_4);
  if (VAR_3 != 0)
   return (0);
 }

 return (VAR_0->an_cached);
}
