
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_15__ {scalar_t__ nbufs; int BSIZE; int SGSIZE; size_t SSHIFT; scalar_t__ new_file; TYPE_1__*** dir; TYPE_1__* cpage; } ;
struct TYPE_14__ {int flags; char* page; int addr; struct TYPE_14__* ovfl; } ;
typedef TYPE_1__** SEGMENT ;
typedef TYPE_2__ HTAB ;
typedef TYPE_1__ BUFHEAD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*,int,int,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int ,char*,int,int,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static BUFHEAD *
FUNC_10(HTAB *VAR_6, u_int32_t VAR_7, BUFHEAD *VAR_8)
{
 BUFHEAD *VAR_9;
 BUFHEAD *VAR_10;
 BUFHEAD *VAR_11;
 SEGMENT VAR_12;
 int VAR_13;
 u_int16_t VAR_14, *VAR_15;

 VAR_14 = 0;
 VAR_9 = VAR_4;


        if (VAR_9 == VAR_6->cpage) {
                FUNC_0(VAR_9);
                FUNC_4(VAR_9);
                VAR_9 = VAR_4;
        }


 if (VAR_6->nbufs == 0 && VAR_8 && VAR_9->ovfl) {
  BUFHEAD *VAR_16;

  for (VAR_16 = VAR_9->ovfl; VAR_16 ; VAR_16 = VAR_16->ovfl) {
   if (VAR_16 == VAR_8) {
    VAR_6->nbufs++;
    break;
   }
  }
 }





 if (VAR_6->nbufs || (VAR_9->flags & VAR_3) || VAR_9 == VAR_6->cpage) {

  if ((VAR_9 = (BUFHEAD *)FUNC_7(1, sizeof(BUFHEAD))) == ((void*)0))
   return (((void*)0));
  if ((VAR_9->page = (char *)FUNC_7(1, VAR_6->BSIZE)) == ((void*)0)) {
   FUNC_9(VAR_9);
   return (((void*)0));
  }
  if (VAR_6->nbufs)
   VAR_6->nbufs--;
 } else {

  FUNC_0(VAR_9);




  if ((VAR_9->addr != 0) || (VAR_9->flags & VAR_0)) {




   VAR_15 = (u_int16_t *)VAR_9->page;
   if (VAR_15[0])
    VAR_14 = VAR_15[VAR_15[0] - 1];
   if ((VAR_9->flags & VAR_2) && FUNC_5(VAR_6, VAR_9->page,
       VAR_9->addr, (int)FUNC_2(VAR_9->flags), 0))
    return (((void*)0));
   if (FUNC_2(VAR_9->flags)) {
    VAR_13 = VAR_9->addr & (VAR_6->SGSIZE - 1);
    VAR_12 = VAR_6->dir[VAR_9->addr >> VAR_6->SSHIFT];




    if (VAR_6->new_file &&
        ((VAR_9->flags & VAR_2) ||
        FUNC_1(VAR_12[VAR_13])))
     VAR_12[VAR_13] = (BUFHEAD *)VAR_1;
    else
     VAR_12[VAR_13] = ((void*)0);
   }





   for (VAR_10 = VAR_9; VAR_10->ovfl;) {
    VAR_11 = VAR_10->ovfl;
    VAR_10->ovfl = ((void*)0);
    VAR_10 = VAR_11;


    if (FUNC_2(VAR_10->flags) ||
        (VAR_14 != VAR_10->addr))
     break;

    VAR_15 = (u_int16_t *)VAR_10->page;
    if (VAR_15[0])

     VAR_14 = VAR_15[VAR_15[0] - 1];
    if ((VAR_10->flags & VAR_2) && FUNC_5(VAR_6,
        VAR_10->page, VAR_10->addr, 0, 0))
     return (((void*)0));
    VAR_10->addr = 0;
    VAR_10->flags = 0;
    FUNC_0(VAR_10);
    FUNC_3(VAR_10);
   }
  }
 }


 VAR_9->addr = VAR_7;




 VAR_9->ovfl = ((void*)0);
 if (VAR_8) {
  VAR_8->ovfl = VAR_9;
  VAR_9->flags = 0;
 } else
  VAR_9->flags = VAR_0;
 FUNC_4(VAR_9);
 return (VAR_9);
}
