
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pgno_t ;
struct TYPE_7__ {int bt_mp; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(BTREE *VAR_4, pgno_t VAR_5)
{
 PAGE *VAR_6;

 if ((VAR_6 = FUNC_0(VAR_4->bt_mp, VAR_5, 0)) == ((void*)0))
  return (VAR_2);
 VAR_6->flags |= VAR_1;
 FUNC_1(VAR_4->bt_mp, VAR_6, VAR_0);
 return (VAR_3);
}
