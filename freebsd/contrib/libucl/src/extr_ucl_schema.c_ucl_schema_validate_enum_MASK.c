
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct ucl_schema_error {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int const*) ;
 int * FUNC_1 (int const*,int **,int) ;
 int FUNC_2 (struct ucl_schema_error*,int ,int const*,char*) ;

__attribute__((used)) static bool
FUNC_3 (const ucl_object_t *VAR_1, const ucl_object_t *VAR_2,
  struct ucl_schema_error *VAR_3)
{
 ucl_object_iter_t VAR_4 = ((void*)0);
 const ucl_object_t *VAR_5;
 bool VAR_6 = 0;

 while ((VAR_5 = FUNC_1 (VAR_1, &VAR_4, 1)) != ((void*)0)) {
  if (FUNC_0 (VAR_5, VAR_2) == 0) {
   VAR_6 = 1;
   break;
  }
 }

 if (!VAR_6) {
  FUNC_2 (VAR_3, VAR_0, VAR_2,
    "object is not one of enumerated patterns");
 }

 return VAR_6;
}
