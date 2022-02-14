
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; struct roff_node* next; struct roff_node* child; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char**,struct roff_node const*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char**,char*,char*,int) ;
 char* FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,unsigned int,char*) ;
 unsigned int FUNC_6 (int *,char*) ;
 int * FUNC_7 (char*,char) ;

char *
FUNC_8(const struct roff_node *VAR_2, int VAR_3)
{
 const struct roff_node *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 for (VAR_4 = VAR_2->child; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  if (VAR_4->type != VAR_0)
   return ((void*)0);

 VAR_5 = ((void*)0);
 FUNC_0(&VAR_5, VAR_2);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 for (VAR_7 = VAR_5; *VAR_7 != '\0'; VAR_7++)
  if (FUNC_2((unsigned char)*VAR_7) == 0 &&
      FUNC_7("!$&'()*+,-./:;=?@_~", *VAR_7) == ((void*)0))
   *VAR_7 = '_';

 if (VAR_3 == 0)
  return VAR_5;



 VAR_6 = ((void*)0);
 VAR_9 = 1;
 VAR_8 = FUNC_6(&VAR_1, VAR_5);
 VAR_7 = FUNC_4(&VAR_1, VAR_8);
 if (VAR_7 != ((void*)0)) {
  while (VAR_7 != ((void*)0)) {
   FUNC_1(VAR_6);
   if (++VAR_9 > 127) {
    FUNC_1(VAR_5);
    return ((void*)0);
   }
   FUNC_3(&VAR_6, "%s_%d", VAR_5, VAR_9);
   VAR_8 = FUNC_6(&VAR_1, VAR_6);
   VAR_7 = FUNC_4(&VAR_1, VAR_8);
  }
  FUNC_1(VAR_5);
  VAR_5 = VAR_6;
 }
 FUNC_5(&VAR_1, VAR_8, VAR_5);
 return VAR_5;
}
