
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int u_int ;
typedef scalar_t__ recno_t ;
typedef int pgno_t ;
typedef int pg ;
typedef int indx_t ;
struct TYPE_23__ {scalar_t__ bt_ovflsize; scalar_t__ bt_nrecs; int bt_mp; } ;
struct TYPE_22__ {scalar_t__ size; char* data; } ;
struct TYPE_21__ {int index; TYPE_1__* page; } ;
struct TYPE_20__ {scalar_t__ upper; scalar_t__ lower; scalar_t__* linp; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ EPG ;
typedef TYPE_3__ DBT ;
typedef TYPE_4__ BTREE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,TYPE_3__ const*,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_1__*,int *,TYPE_3__ const*,int,scalar_t__,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_3__ const*,int *) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_1__*,int) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_8 (char*,int *,int) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_10 (int ,TYPE_1__*,int ) ;

int
FUNC_11(BTREE *VAR_8, recno_t VAR_9, const DBT *VAR_10, u_int VAR_11)
{
 DBT VAR_12;
 EPG *VAR_13;
 PAGE *VAR_14;
 indx_t VAR_15, VAR_16;
 pgno_t VAR_17;
 u_int32_t VAR_18;
 int VAR_19, VAR_20;
 char *VAR_21, VAR_22[VAR_2];







 if (VAR_10->size > VAR_8->bt_ovflsize) {
  if (FUNC_5(VAR_8, VAR_10, &VAR_17) == VAR_4)
   return (VAR_4);
  VAR_12.data = VAR_22;
  VAR_12.size = VAR_2;
  FUNC_8(VAR_22, &VAR_17, sizeof(VAR_17));
  *(u_int32_t *)(VAR_22 + sizeof(pgno_t)) = VAR_10->size;
  VAR_19 = VAR_3;
  VAR_10 = &VAR_12;
 } else
  VAR_19 = 0;


 if ((VAR_13 = FUNC_7(VAR_8, VAR_9,
     VAR_9 > VAR_8->bt_nrecs || VAR_11 == 129 || VAR_11 == 128 ?
     VAR_7 : VAR_6)) == ((void*)0))
  return (VAR_4);

 VAR_14 = VAR_13->page;
 VAR_15 = VAR_13->index;







 switch (VAR_11) {
 case 129:
  ++VAR_15;
  break;
 case 128:
  break;
 default:
  if (VAR_9 < VAR_8->bt_nrecs &&
      FUNC_6(VAR_8, VAR_14, VAR_15) == VAR_4) {
   FUNC_10(VAR_8->bt_mp, VAR_14, 0);
   return (VAR_4);
  }
  break;
 }






 VAR_18 = FUNC_2(VAR_10->size);
 if ((u_int32_t)(VAR_14->upper - VAR_14->lower) < VAR_18 + sizeof(indx_t)) {
  VAR_20 = FUNC_4(VAR_8, VAR_14, ((void*)0), VAR_10, VAR_19, VAR_18, VAR_15);
  if (VAR_20 == VAR_5)
   ++VAR_8->bt_nrecs;
  return (VAR_20);
 }

 if (VAR_15 < (VAR_16 = FUNC_1(VAR_14)))
  FUNC_9(VAR_14->linp + VAR_15 + 1, VAR_14->linp + VAR_15,
      (VAR_16 - VAR_15) * sizeof(indx_t));
 VAR_14->lower += sizeof(indx_t);

 VAR_14->linp[VAR_15] = VAR_14->upper -= VAR_18;
 VAR_21 = (char *)VAR_14 + VAR_14->upper;
 FUNC_3(VAR_21, VAR_10, VAR_19);

 ++VAR_8->bt_nrecs;
 FUNC_0(VAR_8, VAR_0);
 FUNC_10(VAR_8->bt_mp, VAR_14, VAR_1);

 return (VAR_5);
}
