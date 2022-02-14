
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int pgno_t ;
struct TYPE_20__ {int bt_mp; } ;
struct TYPE_19__ {int size; int * data; } ;
struct TYPE_18__ {int index; TYPE_1__* page; } ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {int pgno; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ EPG ;
typedef TYPE_3__ DBT ;
typedef TYPE_4__ BTREE ;


 int VAR_0 ;
 TYPE_14__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_2 (TYPE_4__*,TYPE_3__*,TYPE_2__*,int*) ;
 int VAR_7 ;
 TYPE_1__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(BTREE *VAR_8, EPG *VAR_9, DBT *VAR_10, int VAR_11)
{
 PAGE *VAR_12;
 pgno_t VAR_13;
 int VAR_14;






 switch (VAR_11) {
 case 132:




  if (VAR_10->data == ((void*)0) || VAR_10->size == 0) {
   VAR_7 = VAR_0;
   return (VAR_4);
  }
  return (FUNC_2(VAR_8, VAR_10, VAR_9, &VAR_14));
 case 131:
 case 129:

  for (VAR_13 = VAR_3;;) {
   if ((VAR_12 = FUNC_3(VAR_8->bt_mp, VAR_13, 0)) == ((void*)0))
    return (VAR_4);


   if (FUNC_1(VAR_12) == 0) {
    FUNC_4(VAR_8->bt_mp, VAR_12, 0);
    return (VAR_5);
   }

   if (VAR_12->flags & (VAR_1 | VAR_2))
    break;
   VAR_13 = FUNC_0(VAR_12, 0)->pgno;
   FUNC_4(VAR_8->bt_mp, VAR_12, 0);
  }
  VAR_9->page = VAR_12;
  VAR_9->index = 0;
  break;
 case 130:
 case 128:

  for (VAR_13 = VAR_3;;) {
   if ((VAR_12 = FUNC_3(VAR_8->bt_mp, VAR_13, 0)) == ((void*)0))
    return (VAR_4);


   if (FUNC_1(VAR_12) == 0) {
    FUNC_4(VAR_8->bt_mp, VAR_12, 0);
    return (VAR_5);
   }

   if (VAR_12->flags & (VAR_1 | VAR_2))
    break;
   VAR_13 = FUNC_0(VAR_12, FUNC_1(VAR_12) - 1)->pgno;
   FUNC_4(VAR_8->bt_mp, VAR_12, 0);
  }

  VAR_9->page = VAR_12;
  VAR_9->index = FUNC_1(VAR_12) - 1;
  break;
 }
 return (VAR_6);
}
