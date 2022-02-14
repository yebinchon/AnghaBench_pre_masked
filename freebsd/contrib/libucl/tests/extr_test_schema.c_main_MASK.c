
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct ucl_parser {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (char**) ;
 int VAR_1 ;
 int * FUNC_4 (int *,int **,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ucl_parser*,char*,int ) ;
 int FUNC_7 (struct ucl_parser*) ;
 char* FUNC_8 (struct ucl_parser*) ;
 int * FUNC_9 (struct ucl_parser*) ;
 struct ucl_parser* FUNC_10 (int ) ;

int
FUNC_11 (int VAR_2, char **VAR_3)
{
 char *VAR_4 = ((void*)0);
 struct ucl_parser *VAR_5;
 ucl_object_t *VAR_6 = ((void*)0);
 const ucl_object_t *VAR_7;
 ucl_object_iter_t VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (FUNC_3 (&VAR_4) == -1) {
  FUNC_0 (VAR_0);
 }

 VAR_5 = FUNC_10 (0);

 FUNC_6 (VAR_5, VAR_4, 0);

 if (FUNC_8 (VAR_5) != ((void*)0)) {
  FUNC_1 (VAR_1, "Error occurred: %s\n", FUNC_8 (VAR_5));
  VAR_9 = 1;
  return VAR_0;
 }
 VAR_6 = FUNC_9 (VAR_5);
 FUNC_7 (VAR_5);

 while ((VAR_7 = FUNC_4 (VAR_6, &VAR_8, 1)) != ((void*)0)) {
  VAR_9 = FUNC_2 (VAR_7);
  if (VAR_9 != 0) {
   break;
  }
 }

 FUNC_5 (VAR_6);

 return VAR_9;
}
