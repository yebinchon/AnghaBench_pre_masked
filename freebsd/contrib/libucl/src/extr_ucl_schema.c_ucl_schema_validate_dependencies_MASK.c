
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct ucl_schema_error {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*,int **,int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (struct ucl_schema_error*,int ,TYPE_1__ const*,char*,int ,int ) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__ const*,int,struct ucl_schema_error*,TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_6 (const ucl_object_t *VAR_3,
  const ucl_object_t *VAR_4, struct ucl_schema_error *VAR_5,
  const ucl_object_t *VAR_6,
  ucl_object_t *VAR_7)
{
 const ucl_object_t *VAR_8, *VAR_9, *VAR_10;
 ucl_object_iter_t VAR_11 = ((void*)0), VAR_12;
 bool VAR_13 = 1;

 while (VAR_13 && (VAR_9 = FUNC_0 (VAR_3, &VAR_11, 1)) != ((void*)0)) {
  VAR_8 = FUNC_2 (VAR_4, FUNC_1 (VAR_9));
  if (VAR_8 != ((void*)0)) {

   if (VAR_9->type == VAR_0) {
    VAR_12 = ((void*)0);
    while (VAR_13 && (VAR_10 = FUNC_0 (VAR_9, &VAR_12, 1)) != ((void*)0)) {
     if (FUNC_2 (VAR_4, FUNC_3 (VAR_10)) == ((void*)0)) {
      FUNC_4 (VAR_5, VAR_2, VAR_8,
        "dependency %s is missing for key %s",
        FUNC_3 (VAR_10), FUNC_1 (VAR_9));
      VAR_13 = 0;
      break;
     }
    }
   }
   else if (VAR_9->type == VAR_1) {
    VAR_13 = FUNC_5 (VAR_9, VAR_4, 1, VAR_5, VAR_6, VAR_7);
   }
  }
 }

 return VAR_13;
}
