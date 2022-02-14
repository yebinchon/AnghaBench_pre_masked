
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int bt_mp; } ;
struct TYPE_11__ {scalar_t__ index; int * page; } ;
typedef int PAGE ;
typedef TYPE_1__ EPG ;
typedef int DBT ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int const*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int const*,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int const*,int*) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_7(BTREE *VAR_5, const DBT *VAR_6)
{
 EPG *VAR_7;
 PAGE *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = 0;


loop: if ((VAR_7 = FUNC_5(VAR_5, VAR_6, &VAR_10)) == ((void*)0))
  return (VAR_9 ? VAR_4 : VAR_2);
 if (!VAR_10) {
  FUNC_6(VAR_5->bt_mp, VAR_7->page, 0);
  return (VAR_9 ? VAR_4 : VAR_3);
 }






 VAR_11 = 0;
 VAR_8 = VAR_7->page;
 do {
  if (FUNC_3(VAR_5, VAR_6, VAR_8, VAR_7->index)) {
   FUNC_6(VAR_5->bt_mp, VAR_8, 0);
   return (VAR_2);
  }
  if (FUNC_0(VAR_5, VAR_0)) {
   if (FUNC_1(VAR_8) == 0) {
    if (FUNC_4(VAR_5, VAR_8))
     return (VAR_2);
   } else
    FUNC_6(VAR_5->bt_mp, VAR_8, VAR_1);
   return (VAR_4);
  }
  VAR_9 = 1;
 } while (VAR_7->index < FUNC_1(VAR_8) && FUNC_2(VAR_5, VAR_6, VAR_7) == 0);


 if (VAR_7->index == FUNC_1(VAR_8))
  VAR_11 = 1;


 while (VAR_7->index-- > 0) {
  if (FUNC_2(VAR_5, VAR_6, VAR_7) != 0)
   break;
  if (FUNC_3(VAR_5, VAR_6, VAR_8, VAR_7->index) == VAR_2) {
   FUNC_6(VAR_5->bt_mp, VAR_8, 0);
   return (VAR_2);
  }
  if (VAR_7->index == 0)
   VAR_11 = 1;
 }


 if (FUNC_1(VAR_8) == 0) {
  if (FUNC_4(VAR_5, VAR_8))
   return (VAR_2);
  goto loop;
 }


 FUNC_6(VAR_5->bt_mp, VAR_8, VAR_1);

 if (VAR_11)
  goto loop;
 return (VAR_4);
}
