
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_man {int dummy; } ;
struct mdoc_argv {size_t arg; int line; int pos; int * value; scalar_t__ sz; } ;
struct mdoc_arg {int argc; struct mdoc_argv* argv; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
typedef enum mdocargt { ____Placeholder_mdocargt } mdocargt ;
struct TYPE_2__ {int* argvs; } ;





 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct roff_man*,int,struct mdoc_argv*,int*,char*) ;
 int FUNC_1 (struct roff_man*,int,struct mdoc_argv*,int*,char*) ;
 int* VAR_3 ;
 int FUNC_2 (int) ;
 struct mdoc_arg* FUNC_3 (int,int) ;
 struct mdoc_argv* FUNC_4 (struct mdoc_argv*,int,int) ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct mdoc_argv*,struct mdoc_argv*,int) ;
 int FUNC_6 (char*,int ) ;

void
FUNC_7(struct roff_man *VAR_6, int VAR_7, enum roff_tok VAR_8,
 struct mdoc_arg **VAR_9, int *VAR_10, char *VAR_11)
{
 struct mdoc_argv VAR_12;
 struct mdoc_argv **VAR_13;
 const enum mdocargt *VAR_14;
 char *VAR_15;
 int VAR_16, VAR_17;
 char VAR_18;

 *VAR_9 = ((void*)0);



 FUNC_2(VAR_8 >= VAR_1 && VAR_8 < VAR_2);
 VAR_14 = VAR_5[VAR_8 - VAR_1].argvs;
 if (VAR_14 == ((void*)0))
  return;



 VAR_16 = *VAR_10;
 while (VAR_11[VAR_16] == '-') {



  for (VAR_15 = VAR_11 + ++VAR_16; VAR_11[VAR_16] != '\0'; VAR_16++)
   if (VAR_11[VAR_16] == ' ' && VAR_11[VAR_16 - 1] != '\\')
    break;
  if ((VAR_18 = VAR_11[VAR_16]) != '\0')
   VAR_11[VAR_16++] = '\0';






  while ((VAR_12.arg = *VAR_14++) != VAR_0)
   if ( ! FUNC_6(VAR_15, VAR_4[VAR_12.arg]))
    break;



  if (VAR_12.arg == VAR_0) {
   if (VAR_18 != '\0')
    VAR_11[VAR_16 - 1] = VAR_18;
   break;
  }



  while (VAR_11[VAR_16] == ' ')
   VAR_16++;



  VAR_12.line = VAR_7;
  VAR_12.pos = *VAR_10;
  VAR_12.sz = 0;
  VAR_12.value = ((void*)0);

  switch (VAR_3[VAR_12.arg]) {
  case 128:
   FUNC_1(VAR_6, VAR_7, &VAR_12, &VAR_16, VAR_11);
   break;
  case 130:
   FUNC_0(VAR_6, VAR_7, &VAR_12, &VAR_16, VAR_11);
   break;
  case 129:
   break;
  }



  if (*VAR_9 == ((void*)0))
   *VAR_9 = FUNC_3(1, sizeof(**VAR_9));

  VAR_17 = ++(*VAR_9)->argc;
  VAR_13 = &(*VAR_9)->argv;
  *VAR_13 = FUNC_4(*VAR_13, VAR_17, sizeof(**VAR_13));
  FUNC_5(*VAR_13 + VAR_17 - 1, &VAR_12, sizeof(**VAR_13));



  *VAR_10 = VAR_16;
  VAR_14 = VAR_5[VAR_8 - VAR_1].argvs;
 }
}
