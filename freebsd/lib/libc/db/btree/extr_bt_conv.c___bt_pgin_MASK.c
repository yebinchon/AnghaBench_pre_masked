
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_char ;
typedef scalar_t__ pgno_t ;
typedef size_t indx_t ;
struct TYPE_5__ {int pgno; int prevpg; int nextpg; int flags; int * linp; int upper; int lower; } ;
typedef TYPE_1__ PAGE ;
typedef int BTREE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (void*) ;

void
FUNC_8(void *VAR_7, pgno_t VAR_8, void *VAR_9)
{
 PAGE *VAR_10;
 indx_t VAR_11, VAR_12;
 u_char VAR_13;
 char *VAR_14;

 if (!FUNC_0(((BTREE *)VAR_7), VAR_0))
  return;
 if (VAR_8 == VAR_5) {
  FUNC_7(VAR_9);
  return;
 }

 VAR_10 = VAR_9;
 FUNC_4(VAR_10->pgno);
 FUNC_4(VAR_10->prevpg);
 FUNC_4(VAR_10->nextpg);
 FUNC_4(VAR_10->flags);
 FUNC_3(VAR_10->lower);
 FUNC_3(VAR_10->upper);

 VAR_12 = FUNC_5(VAR_10);
 if ((VAR_10->flags & VAR_6) == VAR_3)
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   FUNC_3(VAR_10->linp[VAR_11]);
   VAR_14 = (char *)FUNC_1(VAR_10, VAR_11);
   FUNC_6(VAR_14);
   VAR_14 += sizeof(u_int32_t);
   FUNC_6(VAR_14);
   VAR_14 += sizeof(pgno_t);
   if (*(u_char *)VAR_14 & VAR_2) {
    VAR_14 += sizeof(u_char);
    FUNC_6(VAR_14);
    VAR_14 += sizeof(pgno_t);
    FUNC_6(VAR_14);
   }
  }
 else if ((VAR_10->flags & VAR_6) == VAR_4)
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   FUNC_3(VAR_10->linp[VAR_11]);
   VAR_14 = (char *)FUNC_2(VAR_10, VAR_11);
   FUNC_6(VAR_14);
   VAR_14 += sizeof(u_int32_t);
   FUNC_6(VAR_14);
   VAR_14 += sizeof(u_int32_t);
   VAR_13 = *(u_char *)VAR_14;
   if (VAR_13 & (VAR_2 | VAR_1)) {
    VAR_14 += sizeof(u_char);
    if (VAR_13 & VAR_2) {
     FUNC_6(VAR_14);
     VAR_14 += sizeof(pgno_t);
     FUNC_6(VAR_14);
    }
    if (VAR_13 & VAR_1) {
     VAR_14 += sizeof(u_int32_t);
     FUNC_6(VAR_14);
     VAR_14 += sizeof(pgno_t);
     FUNC_6(VAR_14);
    }
   }
  }
}
