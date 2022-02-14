
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keytype {int type; int nid; char const* name; } ;


 struct keytype* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_1, int VAR_2)
{
 const struct keytype *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->type != -1; VAR_3++) {
  if (VAR_3->type == VAR_1 && (VAR_3->nid == 0 || VAR_3->nid == VAR_2))
   return VAR_3->name;
 }
 return "ssh-unknown";
}
