
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int recno_t ;
struct TYPE_22__ {int ibp; int ibcw; } ;
struct TYPE_21__ {int (* scr_busy ) (TYPE_1__*,char*,int ) ;} ;
struct TYPE_20__ {int lno; } ;
struct TYPE_19__ {TYPE_3__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef TYPE_3__ GS ;
typedef int FILE ;
typedef TYPE_4__ EX_PRIVATE ;
typedef int CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,size_t,int *,size_t) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int,int *,size_t) ;
 int FUNC_5 (TYPE_1__*,int *,size_t*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 char* FUNC_8 (TYPE_1__*,char*,int*) ;
 int FUNC_9 (TYPE_1__*,int ,char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int ,char*,char*) ;
 int FUNC_11 (TYPE_1__*,char*,int ) ;
 int FUNC_12 (TYPE_1__*,char*,int ) ;

int
FUNC_13(SCR *VAR_6, char *VAR_7, FILE *VAR_8, MARK *VAR_9, recno_t *VAR_10, int VAR_11)
{
 EX_PRIVATE *VAR_12;
 GS *VAR_13;
 recno_t VAR_14, VAR_15;
 size_t VAR_16;
 u_long VAR_17;
 int VAR_18, VAR_19;
 char *VAR_20;
 size_t VAR_21;
 CHAR_T *VAR_22;

 VAR_13 = VAR_6->gp;
 VAR_12 = FUNC_0(VAR_6);





 VAR_17 = 0;
 VAR_14 = 0;
 VAR_20 = "147|Reading...";
 for (VAR_15 = VAR_9->lno; !FUNC_5(VAR_6, VAR_8, &VAR_16); ++VAR_15, ++VAR_14) {
  if ((VAR_14 + 1) % VAR_3 == 0) {
   if (FUNC_3(VAR_6))
    break;
   if (!VAR_11) {
    VAR_13->scr_busy(VAR_6, VAR_20,
        VAR_20 == ((void*)0) ? VAR_2 : VAR_1);
    VAR_20 = ((void*)0);
   }
  }
  FUNC_1(VAR_6, VAR_12->ibcw, VAR_12->ibp, VAR_16, VAR_22, VAR_21);
  if (FUNC_4(VAR_6, 1, VAR_15, VAR_22, VAR_21))
   goto err;
  VAR_17 += VAR_16;
 }

 if (FUNC_7(VAR_8) || FUNC_6(VAR_8))
  goto err;


 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_14;

 if (!VAR_11) {
  VAR_20 = FUNC_8(VAR_6, VAR_7, &VAR_18);
  FUNC_9(VAR_6, VAR_4,
      "148|%s: %lu lines, %lu characters", VAR_20,
      (u_long)VAR_14, VAR_17);
  if (VAR_18)
   FUNC_2(VAR_6, VAR_20, 0);
 }

 VAR_19 = 0;
 if (0) {
err: FUNC_10(VAR_6, VAR_5, VAR_7, "%s");
  (void)FUNC_6(VAR_8);
  VAR_19 = 1;
 }

 if (!VAR_11)
  VAR_13->scr_busy(VAR_6, ((void*)0), VAR_0);
 return (VAR_19);
}
