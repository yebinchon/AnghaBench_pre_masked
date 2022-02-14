
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; struct TYPE_8__* next; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_schema_error {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (struct ucl_schema_error*,int ,TYPE_1__ const*,char*,long) ;

__attribute__((used)) static bool
FUNC_3 (const ucl_object_t *VAR_2, const ucl_object_t *VAR_3,
  struct ucl_schema_error *VAR_4)
{
 const ucl_object_t *VAR_5, *VAR_6;
 int64_t VAR_7, VAR_8;

 VAR_5 = FUNC_0 (VAR_2, "maxValues");
 if (VAR_5 != ((void*)0) && VAR_5->type == VAR_0) {
  VAR_7 = FUNC_1 (VAR_5);
  VAR_6 = VAR_3;
  VAR_8 = 0;
  while (VAR_6) {
   if (VAR_8 > VAR_7) {
    FUNC_2 (VAR_4, VAR_1, VAR_3,
     "object has more values than defined: %ld",
     (long int)VAR_7);
    return 0;
   }
   VAR_8 ++;
   VAR_6 = VAR_6->next;
  }
 }
 VAR_5 = FUNC_0 (VAR_2, "minValues");
 if (VAR_5 != ((void*)0) && VAR_5->type == VAR_0) {
  VAR_7 = FUNC_1 (VAR_5);
  VAR_6 = VAR_3;
  VAR_8 = 0;
  while (VAR_6) {
   if (VAR_8 >= VAR_7) {
    break;
   }
   VAR_8 ++;
   VAR_6 = VAR_6->next;
  }
  if (VAR_8 < VAR_7) {
   FUNC_2 (VAR_4, VAR_1, VAR_3,
     "object has less values than defined: %ld",
     (long int)VAR_7);
   return 0;
  }
 }

 return 1;
}
