
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {size_t len; scalar_t__* s; } ;
struct stat {int st_mode; } ;
struct dirent {scalar_t__* d_name; } ;
struct TYPE_4__ {int gl_flags; scalar_t__ (* gl_errfunc ) (scalar_t__*,int) ;} ;
typedef TYPE_1__ glob_t ;
typedef int __Char ;
typedef int DIR ;
typedef scalar_t__ Char ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*,struct stat*) ;
 int VAR_6 ;
 scalar_t__ const VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ const VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t FUNC_1 (int *,scalar_t__ const*,int ) ;
 int * FUNC_2 (scalar_t__*) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_12 ;
 int FUNC_6 (struct strbuf*,scalar_t__ const*,TYPE_1__*,int) ;
 int FUNC_7 (scalar_t__*,scalar_t__ const*,scalar_t__ const*,int) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (struct strbuf*,scalar_t__*) ;
 int FUNC_10 (struct strbuf*,int ) ;
 int FUNC_11 (struct strbuf*) ;
 scalar_t__ FUNC_12 (scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_13(struct strbuf *VAR_13, const Char *VAR_14, const Char *VAR_15,
      const Char *VAR_16, glob_t *VAR_17, int VAR_18)
{
    DIR *VAR_19;
    struct dirent *VAR_20;
    struct stat VAR_21;
    int VAR_22;
    Char VAR_23 = (VAR_17->gl_flags & VAR_3) ? VAR_8 : VAR_10;
    size_t VAR_24;
    int VAR_25 = 0;
    int VAR_26 = 0;
    const Char *VAR_27 = ((void*)0);

    FUNC_11(VAR_13);
    VAR_24 = VAR_13->len;
    VAR_12 = VAR_22 = 0;

    while (VAR_16 < VAR_15) {
 __Char VAR_28;
 size_t VAR_29 = FUNC_1(&VAR_28, VAR_16, VAR_6);
 if ((VAR_16[0] & VAR_9) == VAR_7 &&
     (VAR_16[VAR_29] & VAR_9) == VAR_7) {
     VAR_25 = 1;
     VAR_26 = (VAR_16[2 * VAR_29] & VAR_9) == VAR_7;
     VAR_27 = VAR_16 + (2 + VAR_26) * VAR_29;
     break;
 }
        VAR_16 += VAR_29;
    }

    if (VAR_25) {
 VAR_22 = VAR_16==VAR_14 && VAR_27==VAR_15 ?
  *VAR_15 == VAR_1 ?
  FUNC_6(VAR_13, VAR_15 - 1, VAR_17, VAR_18) :
  FUNC_6(VAR_13, VAR_15 + 1, VAR_17, VAR_18) :
  FUNC_13(VAR_13, VAR_14, VAR_15, VAR_27, VAR_17, VAR_18);
 if (VAR_22)
     return VAR_22;
 VAR_13->len = VAR_24;
 FUNC_11(VAR_13);
    }

    if (*VAR_13->s && (FUNC_0(VAR_13->s, &VAR_21) || !FUNC_3(VAR_21.st_mode)



 ))
 return 0;

    if (!(VAR_19 = FUNC_2(VAR_13->s))) {

 if ((VAR_17->gl_errfunc && (*VAR_17->gl_errfunc) (VAR_13->s, VAR_12)) ||
     (VAR_17->gl_flags & VAR_5))
     return (VAR_2);
 else
     return (0);
    }


    while ((VAR_20 = FUNC_8(VAR_19)) != ((void*)0)) {

 if (VAR_20->d_name[0] == VAR_0 && *VAR_14 != VAR_0)
     if (!(VAR_17->gl_flags & VAR_4) || !VAR_20->d_name[1] ||
  (VAR_20->d_name[1] == VAR_0 && !VAR_20->d_name[2]))
  continue;
 VAR_13->len = VAR_24;
 FUNC_9(VAR_13, VAR_20->d_name);
 FUNC_11(VAR_13);

 if (VAR_25) {





     if (FUNC_7(VAR_13->s + VAR_24, VAR_14, VAR_27,
  (int)VAR_23) == VAR_18)
      continue;
     FUNC_10(VAR_13, VAR_11);
     FUNC_11(VAR_13);
     if ((VAR_22 = FUNC_6(VAR_13, VAR_16, VAR_17, VAR_18)) != 0)
  break;
 } else {
     if (FUNC_7(VAR_13->s + VAR_24, VAR_14, VAR_15,
  (int) VAR_23) == VAR_18)
  continue;
     if ((VAR_22 = FUNC_6(VAR_13, VAR_15, VAR_17, VAR_18)) != 0)
  break;
 }
    }

    FUNC_5(VAR_19);
    return (VAR_22);
}
