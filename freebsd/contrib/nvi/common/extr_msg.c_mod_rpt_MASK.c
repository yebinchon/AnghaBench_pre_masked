
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ recno_t ;
typedef int action ;
struct TYPE_12__ {scalar_t__* rptlines; TYPE_1__* gp; int rptlchange; } ;
struct TYPE_11__ {int (* scr_msg ) (TYPE_2__*,int ,char*,size_t) ;} ;
typedef TYPE_2__ SCR ;


 int FUNC_0 (char* const*) ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,char*,size_t,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 char* FUNC_7 (TYPE_2__*,char* const,size_t*) ;
 size_t FUNC_8 (char*,int,char*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int ,char*,size_t) ;

void
FUNC_10(SCR *VAR_6)
{
 static char * const VAR_7[] = {
  "293|added",
  "294|changed",
  "295|deleted",
  "296|joined",
  "297|moved",
  "298|shifted",
  "299|yanked",
 };
 static char * const VAR_8[] = {
  "300|line",
  "301|lines",
 };
 recno_t VAR_9;
 u_long VAR_10;
 int VAR_11, VAR_12;
 size_t VAR_13, VAR_14, VAR_15;
 const char *VAR_16;
 char * const *VAR_17;
 char *VAR_18, *VAR_19;


 if (FUNC_2(VAR_6, VAR_5))
  return;


 VAR_6->rptlchange = VAR_3;
 VAR_10 = FUNC_4(VAR_6, VAR_4);
 for (VAR_12 = 0, VAR_9 = 0; VAR_12 < sizeof(VAR_7) / sizeof (*VAR_7); ++VAR_12)
  VAR_9 += VAR_6->rptlines[VAR_12];
 if (VAR_9 == 0)
  return;
 if (VAR_9 <= VAR_10 && VAR_6->rptlines[VAR_0] < VAR_10) {
  for (VAR_12 = 0; VAR_12 < sizeof(VAR_7) / sizeof (*VAR_7); ++VAR_12)
   VAR_6->rptlines[VAR_12] = 0;
  return;
 }


 FUNC_3(VAR_6, VAR_18, VAR_13, sizeof(VAR_7) * 25 + 1);
 for (VAR_19 = VAR_18, VAR_11 = 1, VAR_15 = 0,
     VAR_17 = VAR_7, VAR_12 = 0; VAR_12 < sizeof(VAR_7) / sizeof (*VAR_7); ++VAR_17, ++VAR_12)
  if (VAR_6->rptlines[VAR_12] != 0) {
   if (VAR_11)
    VAR_11 = 0;
   else {
    *VAR_19++ = ';';
    *VAR_19++ = ' ';
    VAR_15 += 2;
   }
   VAR_14 = FUNC_8(VAR_19, 25, "%lu ",
       (u_long)VAR_6->rptlines[VAR_12]);
   VAR_19 += VAR_14;
   VAR_15 += VAR_14;
   VAR_16 = FUNC_7(VAR_6,
       VAR_8[VAR_6->rptlines[VAR_12] == 1 ? 0 : 1], &VAR_14);
   FUNC_6(VAR_19, VAR_16, VAR_14);
   VAR_19 += VAR_14;
   VAR_15 += VAR_14;
   *VAR_19++ = ' ';
   ++VAR_15;
   VAR_16 = FUNC_7(VAR_6, *VAR_17, &VAR_14);
   FUNC_6(VAR_19, VAR_16, VAR_14);
   VAR_19 += VAR_14;
   VAR_15 += VAR_14;
   VAR_6->rptlines[VAR_12] = 0;
  }


 *VAR_19 = '\n';
 ++VAR_15;

 (void)FUNC_5(VAR_6);
 VAR_6->gp->scr_msg(VAR_6, VAR_2, VAR_18, VAR_15);

 FUNC_1(VAR_6, VAR_18, VAR_13);
alloc_err:
 return;



}
