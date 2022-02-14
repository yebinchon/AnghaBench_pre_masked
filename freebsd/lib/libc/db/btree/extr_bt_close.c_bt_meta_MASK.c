
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; int nrecs; int free; int psize; int version; int magic; } ;
struct TYPE_6__ {int bt_mp; int bt_nrecs; int bt_free; int bt_psize; } ;
typedef TYPE_1__ BTREE ;
typedef TYPE_2__ BTMETA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,TYPE_2__*,int) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,void*,int ) ;

__attribute__((used)) static int
FUNC_4(BTREE *VAR_7)
{
 BTMETA VAR_8;
 void *VAR_9;

 if ((VAR_9 = FUNC_2(VAR_7->bt_mp, VAR_3, 0)) == ((void*)0))
  return (VAR_4);


 VAR_8.magic = VAR_0;
 VAR_8.version = VAR_1;
 VAR_8.psize = VAR_7->bt_psize;
 VAR_8.free = VAR_7->bt_free;
 VAR_8.nrecs = VAR_7->bt_nrecs;
 VAR_8.flags = FUNC_0(VAR_7, VAR_6);

 FUNC_1(VAR_9, &VAR_8, sizeof(BTMETA));
 FUNC_3(VAR_7->bt_mp, VAR_9, VAR_2);
 return (VAR_5);
}
