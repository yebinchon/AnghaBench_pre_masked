
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcsection {int dummy; } ;
struct rckey {void* rk_value; } ;
struct rcfile {char* rf_name; int * rf_f; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 struct rcsection* FUNC_3 (struct rcfile*,char*) ;
 struct rckey* FUNC_4 (struct rcsection*,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct rcfile *VAR_7)
{
 FILE *VAR_8 = VAR_7->rf_f;
 int VAR_9 = VAR_4, VAR_10;
 struct rcsection *VAR_11 = ((void*)0);
 struct rckey *VAR_12 = ((void*)0);
 char VAR_13[2048];
 char *VAR_14 = VAR_13, *VAR_15 = &VAR_13[sizeof(VAR_13)-1];

 while ((VAR_10 = FUNC_1 (VAR_8)) != VAR_0) {
  if (VAR_10 == '\r')
   continue;
  if (VAR_9 == VAR_4) {
   VAR_14 = VAR_13;
   if (FUNC_2(VAR_10))
    continue;
   if (VAR_10 == '[') {
    VAR_9 = VAR_3;
    VAR_11 = ((void*)0);
    continue;
   }
   if (VAR_10 == '#' || VAR_10 == ';') {
    VAR_9 = VAR_5;
   } else {
    VAR_9 = VAR_1;
   }
  }
  if (VAR_9 == VAR_5 || VAR_14 == VAR_15) {
   if (VAR_10 == '\n'){
    VAR_9 = VAR_4;
    VAR_14 = VAR_13;
   }
   continue;
  }
  if (VAR_9 == VAR_3) {
   if (VAR_10 == ']') {
    *VAR_14 = 0;
    VAR_14 = VAR_13;
    VAR_11 = FUNC_3(VAR_7, VAR_13);
    VAR_9 = VAR_5;
   } else
    *VAR_14++ = VAR_10;
   continue;
  }
  if (VAR_9 == VAR_1) {
   if (VAR_10 == ' ' || VAR_10 == '\t')
    continue;
   if (VAR_10 == '\n') {
    VAR_9 = VAR_4;
    continue;
   }
   if (VAR_10 != '=') {
    *VAR_14++ = VAR_10;
    continue;
   }
   *VAR_14 = 0;
   if (VAR_11 == ((void*)0)) {
    FUNC_0(VAR_6, "Key '%s' defined before section\n", VAR_13);
    VAR_9 = VAR_5;
    continue;
   }
   VAR_12 = FUNC_4(VAR_11, VAR_13, ((void*)0));
   VAR_14 = VAR_13;
   VAR_9 = VAR_2;
   continue;
  }

  if (VAR_9 != VAR_2) {
   FUNC_0(VAR_6, "Well, I can't parse file '%s'\n",VAR_7->rf_name);
   VAR_9 = VAR_5;
  }
  if (VAR_10 != '\n') {
   *VAR_14++ = VAR_10;
   continue;
  }
  *VAR_14 = 0;
  VAR_12->rk_value = FUNC_5(VAR_13);
  VAR_9 = VAR_4;
  VAR_12 = ((void*)0);
 }
 if (VAR_10 == VAR_0 && VAR_9 == VAR_2) {
  *VAR_14 = 0;
  VAR_12->rk_value = FUNC_5(VAR_13);
 }
 return;
}
