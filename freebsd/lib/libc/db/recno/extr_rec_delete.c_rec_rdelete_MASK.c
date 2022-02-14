
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_8__ {int bt_mp; } ;
struct TYPE_7__ {int index; int * page; } ;
typedef int PAGE ;
typedef TYPE_1__ EPG ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_3(BTREE *VAR_4, recno_t VAR_5)
{
 EPG *VAR_6;
 PAGE *VAR_7;
 int VAR_8;


 if ((VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_3)) == ((void*)0))
  return (VAR_1);


 VAR_7 = VAR_6->page;
 VAR_8 = FUNC_0(VAR_4, VAR_7, VAR_6->index);
 if (VAR_8 != VAR_2) {
  FUNC_2(VAR_4->bt_mp, VAR_7, 0);
  return (VAR_8);
 }
 FUNC_2(VAR_4->bt_mp, VAR_7, VAR_0);
 return (VAR_2);
}
