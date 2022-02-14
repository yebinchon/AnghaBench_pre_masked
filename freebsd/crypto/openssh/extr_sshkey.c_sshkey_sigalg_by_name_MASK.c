
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keytype {int type; char const* name; char const* sigalg; int nid; int cert; } ;


 struct keytype* VAR_0 ;
 char const* FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

const char *
FUNC_3(const char *VAR_1)
{
 const struct keytype *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->type != -1; VAR_2++) {
  if (FUNC_2(VAR_2->name, VAR_1) != 0)
   continue;
  if (VAR_2->sigalg != ((void*)0))
   return VAR_2->sigalg;
  if (!VAR_2->cert)
   return VAR_2->name;
  return FUNC_0(
      FUNC_1(VAR_2->type), VAR_2->nid);
 }
 return ((void*)0);
}
