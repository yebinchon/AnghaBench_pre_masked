
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_schema_error {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*,int const*,int,struct ucl_schema_error*,int const*,int *) ;

bool
FUNC_3 (const ucl_object_t *VAR_1,
  const ucl_object_t *VAR_2,
  const ucl_object_t *VAR_3,
  ucl_object_t *VAR_4,
  struct ucl_schema_error *VAR_5)
{
 bool VAR_6, VAR_7 = 0;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0 (VAR_0);
  VAR_7 = 1;
 }

 VAR_6 = FUNC_2 (VAR_1, VAR_2, 1, VAR_5, VAR_3, VAR_4);

 if (VAR_7) {
  FUNC_1 (VAR_4);
 }

 return VAR_6;
}
