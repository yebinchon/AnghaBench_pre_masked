
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int state; } ;
typedef TYPE_1__ log_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int VAR_5 ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,char const*,char const*) ;
 char const* VAR_6 ;
 int FUNC_5 (char*) ;

unsigned
FUNC_6(log_var_t *VAR_7) {
 const char *VAR_8 = VAR_7->name;
 const char *VAR_9 = VAR_7->name + FUNC_5(VAR_7->name);


 const char *VAR_10 = VAR_6;





 if (!FUNC_1(&VAR_5, VAR_0)) {
  return VAR_4;
 }

 while (1) {
  const char *VAR_11 = FUNC_3(
      VAR_10);
  FUNC_0(VAR_11 < VAR_6 + VAR_2);
  if (FUNC_4(VAR_10, VAR_11,
      VAR_8, VAR_9)) {
   FUNC_2(&VAR_7->state, VAR_3,
       VAR_1);
   return VAR_3;
  }
  if (*VAR_11 == '\0') {

   FUNC_2(&VAR_7->state,
       VAR_4, VAR_1);
   return VAR_4;
  }

  VAR_10 = VAR_11 + 1;
 }
}
