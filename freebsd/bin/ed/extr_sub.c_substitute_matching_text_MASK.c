
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int rm_eo; int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_11__ {int re_nsub; } ;
typedef TYPE_2__ pattern_t ;
struct TYPE_12__ {int len; } ;
typedef TYPE_3__ line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,TYPE_1__*,int,int ) ;
 char* VAR_4 ;
 char* FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__,char*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*,char*,int,TYPE_1__*,int ) ;

int
FUNC_7(pattern_t *VAR_8, line_t *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;
 regmatch_t VAR_16[VAR_3];
 char *VAR_17;
 char *VAR_18;

 if ((VAR_17 = FUNC_4(VAR_9)) == ((void*)0))
  return VAR_0;
 if (VAR_5)
  FUNC_1(VAR_17, VAR_9->len);
 VAR_18 = VAR_17 + VAR_9->len;
 if (!FUNC_6(VAR_8, VAR_17, VAR_3, VAR_16, 0)) {
  do {
   if (!VAR_11 || VAR_11 == ++VAR_14) {
    VAR_13++;
    VAR_15 = VAR_16[0].rm_so;
    FUNC_2(VAR_6, VAR_7, VAR_12 + VAR_15, VAR_0);
    if (VAR_5)
     FUNC_0(VAR_17, VAR_16[0].rm_eo);
    FUNC_5(VAR_6 + VAR_12, VAR_17, VAR_15);
    VAR_12 += VAR_15;
    if ((VAR_12 = FUNC_3(VAR_17, VAR_16, VAR_12,
        VAR_8->re_nsub)) < 0)
     return VAR_0;
   } else {
    VAR_15 = VAR_16[0].rm_eo;
    FUNC_2(VAR_6, VAR_7, VAR_12 + VAR_15, VAR_0);
    if (VAR_5)
     FUNC_0(VAR_17, VAR_15);
    FUNC_5(VAR_6 + VAR_12, VAR_17, VAR_15);
    VAR_12 += VAR_15;
   }
   VAR_17 += VAR_16[0].rm_eo;
  } while (*VAR_17 &&
                        (!VAR_13 || ((VAR_10 & VAR_1) && VAR_16[0].rm_eo)) &&
          !FUNC_6(VAR_8, VAR_17, VAR_3, VAR_16, VAR_2));
  VAR_15 = VAR_18 - VAR_17;
  FUNC_2(VAR_6, VAR_7, VAR_12 + VAR_15 + 2, VAR_0);
  if (VAR_15 > 0 && !VAR_16[0].rm_eo && (VAR_10 & VAR_1)) {
   VAR_4 = "infinite substitution loop";
   return VAR_0;
  }
  if (VAR_5)
   FUNC_0(VAR_17, VAR_15);
  FUNC_5(VAR_6 + VAR_12, VAR_17, VAR_15);
  FUNC_5(VAR_6 + VAR_12 + VAR_15, "\n", 2);
 }
 return VAR_13 ? VAR_12 + VAR_15 + 1 : 0;
}
