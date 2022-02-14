
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int truncated ;
struct passwd {char const* pw_name; char const* pw_gecos; } ;
struct TYPE_6__ {int* min; int max; scalar_t__ similar_deny; } ;
typedef TYPE_1__ passwdqc_params_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,char*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (char*,int ,int) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (char const*,char const*,int) ;
 char* FUNC_10 (char const*) ;

const char *FUNC_11(passwdqc_params_t *VAR_9,
    const char *VAR_10, const char *VAR_11, struct passwd *VAR_12)
{
 char VAR_13[9], *VAR_14;
 char *VAR_15, *VAR_16;
 char *VAR_17;
 char *VAR_18, *VAR_19;
 const char *VAR_20;
 int VAR_21;

 VAR_14 = ((void*)0);
 VAR_15 = VAR_16 = ((void*)0);
 VAR_17 = ((void*)0);
 VAR_18 = VAR_19 = ((void*)0);

 VAR_20 = ((void*)0);

 if (VAR_11 && !FUNC_6(VAR_11, VAR_10))
  VAR_20 = VAR_3;

 VAR_21 = FUNC_7(VAR_10);

 if (!VAR_20 && VAR_21 < VAR_9->min[4])
  VAR_20 = VAR_4;

 if (!VAR_20 && VAR_21 > VAR_9->max) {
  if (VAR_9->max == 8) {
   VAR_13[0] = '\0';
   FUNC_8(VAR_13, VAR_10, 8);
   VAR_10 = VAR_13;
   if (VAR_11 && !FUNC_9(VAR_11, VAR_10, 8))
    VAR_20 = VAR_3;
  } else
   VAR_20 = VAR_1;
 }

 if (!VAR_20 && FUNC_2(VAR_9, VAR_10)) {
  if (VAR_21 < VAR_9->min[1] && VAR_9->min[1] <= VAR_9->max)
   VAR_20 = VAR_7;
  else
   VAR_20 = VAR_6;
 }

 if (!VAR_20) {
  if ((VAR_14 = FUNC_5(VAR_10))) {
   VAR_15 = FUNC_10(VAR_10);
   VAR_16 = FUNC_10(VAR_14);
   if (VAR_11)
    VAR_17 = FUNC_10(VAR_11);
   if (VAR_12) {
    VAR_18 = FUNC_10(VAR_12->pw_name);
    VAR_19 = FUNC_10(VAR_12->pw_gecos);
   }
  }
  if (!VAR_14 ||
      !VAR_15 || !VAR_16 ||
      (VAR_11 && !VAR_17) ||
      (VAR_12 && (!VAR_18 || !VAR_19)))
   VAR_20 = VAR_0;
 }

 if (!VAR_20 && VAR_11 && VAR_9->similar_deny &&
     (FUNC_1(VAR_9, VAR_17, VAR_15, VAR_10) ||
     FUNC_1(VAR_9, VAR_17, VAR_16, VAR_14)))
  VAR_20 = VAR_5;

 if (!VAR_20 && VAR_12 &&
     (FUNC_1(VAR_9, VAR_18, VAR_15, VAR_10) ||
     FUNC_1(VAR_9, VAR_18, VAR_16, VAR_14) ||
     FUNC_1(VAR_9, VAR_19, VAR_15, VAR_10) ||
     FUNC_1(VAR_9, VAR_19, VAR_16, VAR_14)))
  VAR_20 = VAR_2;

 if (!VAR_20 && (int)FUNC_7(VAR_10) < VAR_9->min[2] &&
     (FUNC_3(VAR_9, VAR_15, VAR_10) ||
     FUNC_3(VAR_9, VAR_16, VAR_14)))
  VAR_20 = VAR_8;

 FUNC_4(VAR_13, 0, sizeof(VAR_13));
 FUNC_0(VAR_14);
 FUNC_0(VAR_15); FUNC_0(VAR_16);
 FUNC_0(VAR_17);
 FUNC_0(VAR_18); FUNC_0(VAR_19);

 return VAR_20;
}
