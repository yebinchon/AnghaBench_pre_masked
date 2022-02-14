
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_key {int k_objectid; int k_dir_id; } ;
struct reiserfs_dir_entry {size_t de_entry_num; TYPE_1__* de_deh; } ;
struct TYPE_2__ {int deh_objectid; int deh_dir_id; } ;



__attribute__((used)) static void FUNC_0(struct reiserfs_dir_entry *VAR_0,
     struct reiserfs_key *VAR_1)
{

 VAR_0->de_deh[VAR_0->de_entry_num].deh_dir_id = VAR_1->k_dir_id;
 VAR_0->de_deh[VAR_0->de_entry_num].deh_objectid = VAR_1->k_objectid;
}
