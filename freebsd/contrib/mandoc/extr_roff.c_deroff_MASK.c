
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; char* string; struct roff_node* next; struct roff_node* child; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (char**,char*,char*,int,char*) ;
 char* FUNC_3 (char*,size_t) ;
 int * FUNC_4 (char*,char) ;
 size_t FUNC_5 (char*) ;

void
FUNC_6(char **VAR_1, const struct roff_node *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 if (VAR_2->type != VAR_0) {
  for (VAR_2 = VAR_2->child; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
   FUNC_6(VAR_1, VAR_2);
  return;
 }



 for (VAR_3 = VAR_2->string; *VAR_3 != '\0'; VAR_3++) {
  if (VAR_3[0] == '\\' && VAR_3[1] != '\0' &&
      FUNC_4(" %&0^|~", VAR_3[1]) != ((void*)0))
   VAR_3++;
  else if ( ! FUNC_1((unsigned char)*VAR_3))
   break;
 }



 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 > 0 && VAR_3[VAR_4 - 1] == '\\')
  VAR_4--;



 for (; VAR_4; VAR_4--)
  if ( ! FUNC_1((unsigned char)VAR_3[VAR_4-1]))
   break;



 if (VAR_4 == 0)
  return;

 if (*VAR_1 == ((void*)0)) {
  *VAR_1 = FUNC_3(VAR_3, VAR_4);
  return;
 }

 FUNC_2(&VAR_3, "%s %*s", *VAR_1, (int)VAR_4, VAR_3);
 FUNC_0(*VAR_1);
 *VAR_1 = VAR_3;
}
