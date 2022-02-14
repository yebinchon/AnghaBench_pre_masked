
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int32_t ;
typedef scalar_t__ pgno_t ;
struct TYPE_7__ {int bt_psize; int bt_mp; } ;
struct TYPE_6__ {scalar_t__ nextpg; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (void*,char*,size_t) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 void* FUNC_5 (void*,size_t) ;

int
FUNC_6(BTREE *VAR_4, void *VAR_5, size_t *VAR_6, void **VAR_7, size_t *VAR_8)
{
 PAGE *VAR_9;
 pgno_t VAR_10;
 size_t VAR_11, VAR_12;
 u_int32_t VAR_13;

 FUNC_2(&VAR_10, VAR_5, sizeof(pgno_t));
 FUNC_2(&VAR_13, (char *)VAR_5 + sizeof(pgno_t), sizeof(u_int32_t));
 *VAR_6 = VAR_13;






 if (*VAR_8 < VAR_13) {
  *VAR_7 = FUNC_5(*VAR_7, VAR_13);
  if (*VAR_7 == ((void*)0))
   return (VAR_2);
  *VAR_8 = VAR_13;
 }





 VAR_12 = VAR_4->bt_psize - VAR_0;
 for (VAR_5 = *VAR_7;; VAR_5 = (char *)VAR_5 + VAR_11, VAR_10 = VAR_9->nextpg) {
  if ((VAR_9 = FUNC_3(VAR_4->bt_mp, VAR_10, 0)) == ((void*)0))
   return (VAR_2);

  VAR_11 = FUNC_0(VAR_13, VAR_12);
  FUNC_2(VAR_5, (char *)VAR_9 + VAR_0, VAR_11);
  FUNC_4(VAR_4->bt_mp, VAR_9, 0);

  if ((VAR_13 -= VAR_11) == 0)
   break;
 }
 return (VAR_3);
}
