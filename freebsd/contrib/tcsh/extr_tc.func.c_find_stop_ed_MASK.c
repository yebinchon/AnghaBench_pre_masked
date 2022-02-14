
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct varent {int ** vec; } ;
struct process {scalar_t__ p_procid; scalar_t__ p_jobid; int p_flags; int p_command; struct process* p_next; } ;
struct TYPE_2__ {struct process* p_next; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct varent* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int **,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (unsigned char) ;
 struct process* VAR_5 ;
 struct process* VAR_6 ;
 TYPE_1__ VAR_7 ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char*,size_t) ;
 char* FUNC_6 (char const*,char) ;

struct process *
FUNC_7(void)
{
    struct process *VAR_8, *VAR_9;
    const char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    char *VAR_12, *VAR_13;
    size_t VAR_14 = 0, VAR_15 = 0;
    int VAR_16;
    struct varent *VAR_17;
    Char **VAR_18;

    if (VAR_5 == ((void*)0))
 return ((void*)0);

    if ((VAR_17 = FUNC_0(VAR_4)) != ((void*)0))
 VAR_18 = VAR_17->vec;
    else
 VAR_18 = ((void*)0);

    if (! VAR_18) {
 if ((VAR_10 = FUNC_2("EDITOR")) != ((void*)0)) {
     if ((VAR_13 = FUNC_6(VAR_10, '/')) != ((void*)0))
  VAR_10 = VAR_13 + 1;
 }
 else
     VAR_10 = "ed";

 if ((VAR_11 = FUNC_2("VISUAL")) != ((void*)0)) {
     if ((VAR_13 = FUNC_6(VAR_11, '/')) != ((void*)0))
  VAR_11 = VAR_13 + 1;
 }
 else
     VAR_11 = "vi";

 for (VAR_15 = 0; VAR_11[VAR_15] && !FUNC_3((unsigned char)VAR_11[VAR_15]); VAR_15++)
     continue;
 for (VAR_14 = 0; VAR_10[VAR_14] && !FUNC_3((unsigned char)VAR_10[VAR_14]); VAR_14++)
     continue;
    }

    VAR_9 = ((void*)0);
    for (VAR_8 = VAR_7.p_next; VAR_8; VAR_8 = VAR_8->p_next)
 if (VAR_8->p_procid == VAR_8->p_jobid) {






     VAR_16 = (int) (VAR_8->p_flags & VAR_0);
     if (VAR_16 != VAR_1 && VAR_16 != VAR_3 &&
  VAR_16 != VAR_2)
  continue;

     VAR_13 = FUNC_4(VAR_8->p_command);

     for (VAR_12 = VAR_13; *VAR_12 && !FUNC_3((unsigned char) *VAR_12); VAR_12++)
  continue;
     *VAR_12 = '\0';

     if ((VAR_12 = FUNC_6(VAR_13, '/')) != ((void*)0))
  VAR_12 = VAR_12 + 1;
     else
  VAR_12 = VAR_13;





     if ((VAR_18 && FUNC_1(VAR_18, VAR_12)) ||
         (VAR_14 && FUNC_5(VAR_10, VAR_12, VAR_14) == 0 && VAR_12[VAR_14] == '\0') ||
  (VAR_15 && FUNC_5(VAR_11, VAR_12, VAR_15) == 0 && VAR_12[VAR_15] == '\0')) {





  if (VAR_8 == VAR_5)
      return VAR_8;
  else if (VAR_9 == ((void*)0) || VAR_8 == VAR_6)
      VAR_9 = VAR_8;
     }
 }

    return VAR_9;
}
