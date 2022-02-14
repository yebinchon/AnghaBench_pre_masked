
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct glob_lim {int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {scalar_t__ gl_pathc; scalar_t__ gl_offs; int gl_flags; int (* gl_errfunc ) (char const*,int) ;scalar_t__ gl_matchc; int * gl_statv; int * gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int*,TYPE_1__*,struct glob_lim*) ;
 int FUNC_1 (int*,TYPE_1__*,struct glob_lim*) ;
 scalar_t__ FUNC_2 (char const*,scalar_t__) ;

int
FUNC_3(const char *VAR_13, int VAR_14, int (*VAR_15)(const char *, int),
    glob_t *VAR_16)
{
 const u_char *VAR_17;
 int VAR_18;
 Char *VAR_19, *VAR_20, VAR_21[VAR_9];
 struct glob_lim VAR_22 = { 0, 0, 0 };

 if (FUNC_2(VAR_13, VAR_11) == VAR_11)
  return(VAR_6);

 VAR_17 = (u_char *) VAR_13;
 if (!(VAR_14 & VAR_1)) {
  VAR_16->gl_pathc = 0;
  VAR_16->gl_pathv = ((void*)0);
  VAR_16->gl_statv = ((void*)0);
  if (!(VAR_14 & VAR_3))
   VAR_16->gl_offs = 0;
 }
 VAR_16->gl_flags = VAR_14 & ~VAR_4;
 VAR_16->gl_errfunc = VAR_15;
 VAR_16->gl_matchc = 0;

 if (VAR_16->gl_offs < 0 || VAR_16->gl_pathc < 0 ||
     VAR_16->gl_offs >= VAR_8 || VAR_16->gl_pathc >= VAR_8 ||
     VAR_16->gl_pathc >= VAR_8 - VAR_16->gl_offs - 1)
  return VAR_7;

 VAR_19 = VAR_21;
 VAR_20 = VAR_19 + VAR_9 - 1;
 if (VAR_14 & VAR_5)
  while (VAR_19 < VAR_20 && (VAR_18 = *VAR_17++) != VAR_0)
   *VAR_19++ = VAR_18;
 else {

  while (VAR_19 < VAR_20 && (VAR_18 = *VAR_17++) != VAR_0)
   if (VAR_18 == VAR_12) {
    if ((VAR_18 = *VAR_17++) == VAR_0) {
     VAR_18 = VAR_12;
     --VAR_17;
    }
    *VAR_19++ = VAR_18 | VAR_10;
   } else
    *VAR_19++ = VAR_18;
 }
 *VAR_19 = VAR_0;

 if (VAR_14 & VAR_2)
  return FUNC_1(VAR_21, VAR_16, &VAR_22);
 else
  return FUNC_0(VAR_21, VAR_16, &VAR_22);
}
