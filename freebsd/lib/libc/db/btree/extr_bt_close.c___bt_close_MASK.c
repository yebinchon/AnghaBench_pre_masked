
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* data; scalar_t__ size; } ;
struct TYPE_12__ {TYPE_5__* data; scalar_t__ size; } ;
struct TYPE_10__ {TYPE_5__* data; scalar_t__ size; } ;
struct TYPE_11__ {TYPE_1__ key; } ;
struct TYPE_14__ {int bt_fd; TYPE_4__ bt_rdata; TYPE_3__ bt_rkey; TYPE_2__ bt_cursor; int bt_mp; int * bt_pinned; struct TYPE_14__* internal; } ;
typedef TYPE_5__ DB ;
typedef TYPE_5__ BTREE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;

int
FUNC_5(DB *VAR_2)
{
 BTREE *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->internal;


 if (VAR_3->bt_pinned != ((void*)0)) {
  FUNC_4(VAR_3->bt_mp, VAR_3->bt_pinned, 0);
  VAR_3->bt_pinned = ((void*)0);
 }


 if (FUNC_0(VAR_2, 0) == VAR_0)
  return (VAR_0);


 if (FUNC_3(VAR_3->bt_mp) == VAR_0)
  return (VAR_0);


 if (VAR_3->bt_cursor.key.data != ((void*)0)) {
  FUNC_2(VAR_3->bt_cursor.key.data);
  VAR_3->bt_cursor.key.size = 0;
  VAR_3->bt_cursor.key.data = ((void*)0);
 }
 if (VAR_3->bt_rkey.data) {
  FUNC_2(VAR_3->bt_rkey.data);
  VAR_3->bt_rkey.size = 0;
  VAR_3->bt_rkey.data = ((void*)0);
 }
 if (VAR_3->bt_rdata.data) {
  FUNC_2(VAR_3->bt_rdata.data);
  VAR_3->bt_rdata.size = 0;
  VAR_3->bt_rdata.data = ((void*)0);
 }

 VAR_4 = VAR_3->bt_fd;
 FUNC_2(VAR_3);
 FUNC_2(VAR_2);
 return (FUNC_1(VAR_4) ? VAR_0 : VAR_1);
}
