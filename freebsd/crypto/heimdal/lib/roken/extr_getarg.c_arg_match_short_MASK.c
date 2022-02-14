
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getargs {char short_name; scalar_t__ type; struct getarg_collect_info* value; } ;
struct getarg_collect_info {int data; scalar_t__ (* func ) (int ,int,char**,int*,int*,int ) ;} ;
typedef int getarg_strings ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (char*,char*,...) ;
 size_t FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int,char**,int*,int*,int ) ;

__attribute__((used)) static int
FUNC_4 (struct getargs *VAR_12, size_t VAR_13,
   char *VAR_14, int VAR_15, char **VAR_16, int *VAR_17)
{
    size_t VAR_18, VAR_19;

    for(VAR_18 = 1; VAR_18 > 0 && VAR_18 < FUNC_2(VAR_16[*VAR_17]); VAR_18++) {
 for(VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
     char *VAR_20;

     if(VAR_12[VAR_19].short_name == 0)
  continue;
     if(VAR_14[VAR_18] == VAR_12[VAR_19].short_name) {
  if(VAR_12[VAR_19].type == VAR_7) {
      *(int*)VAR_12[VAR_19].value = 1;
      break;
  }
  if(VAR_12[VAR_19].type == VAR_9) {
      *(int*)VAR_12[VAR_19].value = 0;
      break;
  }
  if(VAR_12[VAR_19].type == VAR_5) {
      ++*(int *)VAR_12[VAR_19].value;
      break;
  }
  if(VAR_12[VAR_19].type == VAR_4) {
      struct getarg_collect_info *VAR_21 = VAR_12[VAR_19].value;
      int VAR_22 = (int)VAR_18;

      if((*VAR_21->func)(VAR_3, VAR_15, VAR_16, VAR_17, &VAR_22, VAR_21->data))
   return VAR_0;
      VAR_18 = VAR_22;
      break;
  }

  if(VAR_14[VAR_18 + 1])
      VAR_20 = &VAR_14[VAR_18 + 1];
  else {
      ++*VAR_17;
      VAR_20 = VAR_16[*VAR_17];
  }
  if(VAR_20 == ((void*)0)) {
      --*VAR_17;
      return VAR_1;
  }
  if(VAR_12[VAR_19].type == VAR_8) {
      int VAR_23;
      if(FUNC_1(VAR_20, "%d", &VAR_23) != 1)
   return VAR_0;
      *(int*)VAR_12[VAR_19].value = VAR_23;
      return 0;
  } else if(VAR_12[VAR_19].type == VAR_10) {
      *(char**)VAR_12[VAR_19].value = VAR_20;
      return 0;
  } else if(VAR_12[VAR_19].type == VAR_11) {
      return FUNC_0((getarg_strings*)VAR_12[VAR_19].value, VAR_20);
  } else if(VAR_12[VAR_19].type == VAR_6) {
      double VAR_24;
      if(FUNC_1(VAR_20, "%lf", &VAR_24) != 1)
   return VAR_0;
      *(double*)VAR_12[VAR_19].value = VAR_24;
      return 0;
  }
  return VAR_0;
     }
 }
 if (VAR_19 == VAR_13)
     return VAR_2;
    }
    return 0;
}
