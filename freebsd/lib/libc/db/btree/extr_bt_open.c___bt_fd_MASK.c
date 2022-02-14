
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bt_fd; int * bt_pinned; int bt_mp; } ;
struct TYPE_5__ {TYPE_2__* internal; } ;
typedef TYPE_1__ DB ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;

int
FUNC_2(const DB *VAR_3)
{
 BTREE *VAR_4;

 VAR_4 = VAR_3->internal;


 if (VAR_4->bt_pinned != ((void*)0)) {
  FUNC_1(VAR_4->bt_mp, VAR_4->bt_pinned, 0);
  VAR_4->bt_pinned = ((void*)0);
 }


 if (FUNC_0(VAR_4, VAR_0)) {
  VAR_2 = VAR_1;
  return (-1);
 }
 return (VAR_4->bt_fd);
}
