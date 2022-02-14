
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* k_objectid; void* k_dir_id; } ;
struct TYPE_8__ {TYPE_1__ on_disk_key; int version; } ;
struct reiserfs_dir_entry {int de_entry_num; TYPE_3__ de_entry_key; TYPE_5__* de_ih; struct reiserfs_de_head* de_deh; } ;
struct reiserfs_de_head {int dummy; } ;
struct TYPE_7__ {int k_objectid; int k_dir_id; } ;
struct TYPE_9__ {TYPE_2__ ih_key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct reiserfs_de_head*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static inline void FUNC_6(struct reiserfs_dir_entry *VAR_2)
{
 struct reiserfs_de_head *VAR_3 = VAR_2->de_deh + VAR_2->de_entry_num;

 FUNC_0(VAR_2->de_entry_num >= FUNC_2(VAR_2->de_ih));


 VAR_2->de_entry_key.version = VAR_0;
 VAR_2->de_entry_key.on_disk_key.k_dir_id =
     FUNC_3(VAR_2->de_ih->ih_key.k_dir_id);
 VAR_2->de_entry_key.on_disk_key.k_objectid =
     FUNC_3(VAR_2->de_ih->ih_key.k_objectid);
 FUNC_4(&(VAR_2->de_entry_key), FUNC_1(VAR_3));
 FUNC_5(&(VAR_2->de_entry_key), VAR_1);
}
