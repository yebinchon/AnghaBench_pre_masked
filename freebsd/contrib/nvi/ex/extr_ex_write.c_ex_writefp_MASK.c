
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct stat {int st_mode; } ;
typedef scalar_t__ recno_t ;
struct TYPE_14__ {int (* scr_busy ) (TYPE_1__*,char*,int ) ;} ;
struct TYPE_13__ {scalar_t__ lno; } ;
struct TYPE_12__ {int ep; TYPE_3__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef TYPE_3__ GS ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,char**,size_t*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct stat*) ;
 scalar_t__ FUNC_8 (int ) ;
 size_t FUNC_9 (char*,int,size_t,int *) ;
 int FUNC_10 (TYPE_1__*,int ,char*,char*) ;
 char FUNC_11 (char,int *) ;
 int FUNC_12 (TYPE_1__*,char*,int ) ;
 int FUNC_13 (TYPE_1__*,char*,int ) ;

int
FUNC_14(SCR *VAR_6, char *VAR_7, FILE *VAR_8, MARK *VAR_9, MARK *VAR_10, u_long *VAR_11, u_long *VAR_12, int VAR_13)
{
 struct stat VAR_14;
 GS *VAR_15;
 u_long VAR_16;
 recno_t VAR_17, VAR_18, VAR_19;
 size_t VAR_20;
 int VAR_21;
 char *VAR_22, *VAR_23;

 VAR_15 = VAR_6->gp;
 VAR_17 = VAR_9->lno;
 VAR_18 = VAR_10->lno;

 if (VAR_11 != ((void*)0)) {
  *VAR_12 = 0;
  *VAR_11 = 0;
 }
 VAR_16 = 0;
 VAR_19 = 0;
 VAR_22 = "253|Writing...";
 if (VAR_18 != 0)
  for (; VAR_17 <= VAR_18; ++VAR_17, ++VAR_19) {

   if ((VAR_19 + 1) % VAR_4 == 0) {
    if (FUNC_1(VAR_6))
     break;
    if (!VAR_13) {
     VAR_15->scr_busy(VAR_6, VAR_22, VAR_22 == ((void*)0) ?
         VAR_2 : VAR_1);
     VAR_22 = ((void*)0);
    }
   }
   if (FUNC_3(VAR_6, VAR_17, &VAR_23, &VAR_20))
    goto err;
   if (FUNC_9(VAR_23, 1, VAR_20, VAR_8) != VAR_20)
    goto err;
   VAR_16 += VAR_20;
   if (FUNC_11('\n', VAR_8) != '\n')
    break;
   ++VAR_16;
  }

 if (FUNC_5(VAR_8))
  goto err;





 if (!FUNC_7(FUNC_6(VAR_8), &VAR_14) &&
     FUNC_2(VAR_14.st_mode) && FUNC_8(FUNC_6(VAR_8)))
  goto err;

 if (FUNC_4(VAR_8))
  goto err;

 VAR_21 = 0;
 if (0) {
err: if (!FUNC_0(VAR_6->ep, VAR_3))
   FUNC_10(VAR_6, VAR_5, VAR_7, "%s");
  (void)FUNC_4(VAR_8);
  VAR_21 = 1;
 }

 if (!VAR_13)
  VAR_15->scr_busy(VAR_6, ((void*)0), VAR_0);


 if (VAR_11 != ((void*)0)) {
  *VAR_12 = VAR_16;
  *VAR_11 = VAR_19;
 }
 return (VAR_21);
}
