
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_12__ {int * bt_pinned; int bt_mp; int bt_rdata; } ;
struct TYPE_11__ {TYPE_3__* internal; } ;
struct TYPE_10__ {int * page; } ;
typedef TYPE_1__ EPG ;
typedef int DBT ;
typedef TYPE_2__ DB ;
typedef TYPE_3__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int *,int *,int *,int *,int ) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int const*,int*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,int ) ;

int
FUNC_4(const DB *VAR_5, const DBT *VAR_6, DBT *VAR_7, u_int VAR_8)
{
 BTREE *VAR_9;
 EPG *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = VAR_5->internal;


 if (VAR_9->bt_pinned != ((void*)0)) {
  FUNC_3(VAR_9->bt_mp, VAR_9->bt_pinned, 0);
  VAR_9->bt_pinned = ((void*)0);
 }


 if (VAR_8) {
  VAR_4 = VAR_1;
  return (VAR_2);
 }

 if ((VAR_10 = FUNC_2(VAR_9, VAR_6, &VAR_11)) == ((void*)0))
  return (VAR_2);
 if (!VAR_11) {
  FUNC_3(VAR_9->bt_mp, VAR_10->page, 0);
  return (VAR_3);
 }

 VAR_12 = FUNC_1(VAR_9, VAR_10, ((void*)0), ((void*)0), VAR_7, &VAR_9->bt_rdata, 0);





 if (FUNC_0(VAR_9, VAR_0))
  FUNC_3(VAR_9->bt_mp, VAR_10->page, 0);
 else
  VAR_9->bt_pinned = VAR_10->page;
 return (VAR_12);
}
