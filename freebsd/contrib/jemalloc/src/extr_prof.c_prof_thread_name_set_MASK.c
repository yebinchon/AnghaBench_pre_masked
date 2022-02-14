
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_3__ {char* thread_name; } ;
typedef TYPE_1__ prof_tdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *,int *,int,int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 char* FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

int
FUNC_7(tsd_t *VAR_2, const char *VAR_3) {
 prof_tdata_t *VAR_4;
 unsigned VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_3(VAR_2, 1);
 if (VAR_4 == ((void*)0)) {
  return VAR_0;
 }


 if (VAR_3 == ((void*)0)) {
  return VAR_1;
 }
 for (VAR_5 = 0; VAR_3[VAR_5] != '\0'; VAR_5++) {
  char VAR_7 = VAR_3[VAR_5];
  if (!FUNC_2(VAR_7) && !FUNC_1(VAR_7)) {
   return VAR_1;
  }
 }

 VAR_6 = FUNC_4(FUNC_6(VAR_2), VAR_3);
 if (VAR_6 == ((void*)0)) {
  return VAR_0;
 }

 if (VAR_4->thread_name != ((void*)0)) {
  FUNC_0(FUNC_6(VAR_2), VAR_4->thread_name, ((void*)0), ((void*)0), 1,
      1);
  VAR_4->thread_name = ((void*)0);
 }
 if (FUNC_5(VAR_6) > 0) {
  VAR_4->thread_name = VAR_6;
 }
 return 0;
}
