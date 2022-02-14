
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,int *,char const*,int,int) ;
 int * FUNC_2 (int *,char const*,int) ;
 int * FUNC_3 (int const*) ;

bool
FUNC_4 (ucl_object_t *VAR_0,
  const ucl_object_t *VAR_1, const ucl_object_t *VAR_2)
{
 const ucl_object_t *VAR_3;
 ucl_object_t *VAR_4;

 if (VAR_0 && VAR_1 && VAR_2) {
  VAR_3 = FUNC_2 (VAR_0,
    (const char *)&VAR_1, sizeof (void *));

  if (VAR_3) {

   VAR_4 = FUNC_3 (VAR_3);
   FUNC_0 (VAR_0, (const char *)&VAR_1,
     sizeof (void *));
   FUNC_1 (VAR_0, VAR_4, (const char *)&VAR_2,
     sizeof (void *), 1);

   return 1;
  }
 }

 return 0;
}
