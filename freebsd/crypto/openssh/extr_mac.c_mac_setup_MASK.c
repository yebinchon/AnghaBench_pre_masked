
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshmac {int dummy; } ;
struct macalg {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (struct sshmac*,struct macalg const*) ;
 struct macalg* VAR_1 ;
 scalar_t__ FUNC_1 (char*,int *) ;

int
FUNC_2(struct sshmac *VAR_2, char *VAR_3)
{
 const struct macalg *VAR_4;

 for (VAR_4 = VAR_1; VAR_4->name != ((void*)0); VAR_4++) {
  if (FUNC_1(VAR_3, VAR_4->name) != 0)
   continue;
  if (VAR_2 != ((void*)0))
   return FUNC_0(VAR_2, VAR_4);
  return 0;
 }
 return VAR_0;
}
