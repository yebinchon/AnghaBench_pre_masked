
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;


struct TYPE_23__ {scalar_t__ cs_lno; scalar_t__ cs_cno; int cs_ch; scalar_t__ cs_flags; } ;
typedef TYPE_1__ VCS ;
struct TYPE_26__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_25__ {scalar_t__ lno; scalar_t__ cno; int * gp; } ;
struct TYPE_24__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_22__ {int mcs; } ;
typedef TYPE_2__ TEXT ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ MARK ;
typedef int GS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 TYPE_16__* FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_8 (TYPE_3__*,int *,int,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_4__*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(SCR *VAR_6, TEXT *VAR_7)
{
 GS *VAR_8;
 VCS VAR_9;
 MARK VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_8 = VAR_6->gp;





 FUNC_3(VAR_6, VAR_7);
 if (FUNC_9(VAR_6, 1))
  return (1);





 if (FUNC_10(VAR_6, &VAR_10, 0, VAR_5))
  return (1);


 VAR_9.cs_lno = VAR_7->lno;
 VAR_9.cs_cno = VAR_7->cno - 1;
 if (FUNC_5(VAR_6, &VAR_9))
  return (1);
 VAR_13 = FUNC_2(FUNC_4(VAR_6)->mcs, VAR_12 = VAR_9.cs_ch)[-1];


 for (VAR_11 = 1;;) {
  if (FUNC_6(VAR_6, &VAR_9))
   return (1);
  if (VAR_9.cs_flags != 0) {
   if (VAR_9.cs_flags == VAR_0 || VAR_9.cs_flags == VAR_1) {
    FUNC_7(VAR_6, VAR_3,
        "Unmatched %s", FUNC_0(VAR_6, VAR_12));
    return (0);
   }
   continue;
  }
  if (VAR_9.cs_ch == VAR_12)
   ++VAR_11;
  else if (VAR_9.cs_ch == VAR_13 && --VAR_11 == 0)
   break;
 }


 if (VAR_9.cs_lno < VAR_10.lno || (VAR_9.cs_lno == VAR_10.lno && VAR_9.cs_cno < VAR_10.cno))
  return (0);
 VAR_6->lno = VAR_9.cs_lno;
 VAR_6->cno = VAR_9.cs_cno;
 if (FUNC_9(VAR_6, 1))
  return (1);


 return (FUNC_8(VAR_6,
     ((void*)0), FUNC_1(VAR_6, VAR_4) * 100, VAR_2));
}
