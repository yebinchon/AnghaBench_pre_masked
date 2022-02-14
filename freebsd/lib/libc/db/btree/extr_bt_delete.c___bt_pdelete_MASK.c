
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u_int32_t ;
typedef size_t indx_t ;
struct TYPE_22__ {int flags; int ksize; int bytes; } ;
struct TYPE_21__ {int bt_psize; int bt_mp; } ;
struct TYPE_20__ {size_t index; int pgno; } ;
struct TYPE_19__ {scalar_t__ pgno; int lower; int upper; size_t* linp; int flags; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ EPGNO ;
typedef TYPE_3__ BTREE ;
typedef TYPE_4__ BINTERNAL ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (TYPE_1__*,size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (char*,char*,int) ;
 TYPE_1__* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_10(BTREE *VAR_7, PAGE *VAR_8)
{
 BINTERNAL *VAR_9;
 PAGE *VAR_10;
 EPGNO *VAR_11;
 indx_t VAR_12, VAR_13, *VAR_14, VAR_15;
 u_int32_t VAR_16;
 char *VAR_17;
 while ((VAR_11 = FUNC_0(VAR_7)) != ((void*)0)) {

  if ((VAR_10 = FUNC_8(VAR_7->bt_mp, VAR_11->pgno, 0)) == ((void*)0))
   return (VAR_5);

  VAR_13 = VAR_11->index;
  VAR_9 = FUNC_1(VAR_10, VAR_13);


  if (VAR_9->flags & VAR_2 &&
      FUNC_6(VAR_7, VAR_9->bytes) == VAR_5) {
   FUNC_9(VAR_7->bt_mp, VAR_10, 0);
   return (VAR_5);
  }






  if (FUNC_3(VAR_10) == 1) {
   if (VAR_10->pgno == VAR_4) {
    VAR_10->lower = VAR_0;
    VAR_10->upper = VAR_7->bt_psize;
    VAR_10->flags = VAR_3;
   } else {
    if (FUNC_5(VAR_7, VAR_10) || FUNC_4(VAR_7, VAR_10))
     return (VAR_5);
    continue;
   }
  } else {

   VAR_16 = FUNC_2(VAR_9->ksize);
   VAR_17 = (char *)VAR_10 + VAR_10->upper;
   FUNC_7(VAR_17 + VAR_16, VAR_17, (char *)VAR_9 - VAR_17);
   VAR_10->upper += VAR_16;


   VAR_15 = VAR_10->linp[VAR_13];
   for (VAR_12 = VAR_13, VAR_14 = &VAR_10->linp[0]; VAR_12--; ++VAR_14)
    if (VAR_14[0] < VAR_15)
     VAR_14[0] += VAR_16;
   for (VAR_12 = FUNC_3(VAR_10) - VAR_13; --VAR_12; ++VAR_14)
    VAR_14[0] = VAR_14[1] < VAR_15 ? VAR_14[1] + VAR_16 : VAR_14[1];
   VAR_10->lower -= sizeof(indx_t);
  }

  FUNC_9(VAR_7->bt_mp, VAR_10, VAR_1);
  break;
 }


 if (VAR_8->pgno == VAR_4) {
  FUNC_9(VAR_7->bt_mp, VAR_8, VAR_1);
  return (VAR_6);
 }
 return (FUNC_5(VAR_7, VAR_8) || FUNC_4(VAR_7, VAR_8));
}
