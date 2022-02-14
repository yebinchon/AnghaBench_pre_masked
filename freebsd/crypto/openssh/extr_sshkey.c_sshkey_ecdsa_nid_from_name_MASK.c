
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keytype {int type; int nid; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct keytype* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

int
FUNC_1(const char *VAR_3)
{
 const struct keytype *VAR_4;

 for (VAR_4 = VAR_2; VAR_4->type != -1; VAR_4++) {
  if (VAR_4->type != VAR_0 && VAR_4->type != VAR_1)
   continue;
  if (VAR_4->name != ((void*)0) && FUNC_0(VAR_3, VAR_4->name) == 0)
   return VAR_4->nid;
 }
 return -1;
}
