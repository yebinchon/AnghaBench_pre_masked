
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keytype {int type; int nid; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct keytype* VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int *,size_t) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4, size_t VAR_5, int *VAR_6)
{
 const struct keytype *VAR_7;

 for (VAR_7 = VAR_3; VAR_7->type != -1; VAR_7++) {
  if (VAR_7->name == ((void*)0) || FUNC_1(VAR_7->name) != VAR_5)
   continue;
  if (FUNC_0(VAR_4, VAR_7->name, VAR_5) == 0) {
   *VAR_6 = -1;
   if (VAR_7->type == VAR_0 || VAR_7->type == VAR_1)
    *VAR_6 = VAR_7->nid;
   return VAR_7->type;
  }
 }
 return VAR_2;
}
