
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_refcount; struct reiserfs_transaction_handle* t_handle_save; struct super_block* t_super; } ;
struct TYPE_2__ {struct reiserfs_transaction_handle* journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct reiserfs_transaction_handle*,struct super_block*,unsigned long,int ) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct reiserfs_transaction_handle*,int) ;
 int FUNC_3 (struct super_block*,char*,char*) ;

int FUNC_4(struct reiserfs_transaction_handle *VAR_2,
    struct super_block *VAR_3, unsigned long VAR_4)
{
 struct reiserfs_transaction_handle *VAR_5 = VAR_1->journal_info;
 int VAR_6;

 VAR_2->t_handle_save = ((void*)0);
 if (VAR_5) {

  if (VAR_5->t_super == VAR_3) {
   FUNC_0(!VAR_5->t_refcount);
   VAR_5->t_refcount++;
   FUNC_2(VAR_2, VAR_5, sizeof(*VAR_2));
   if (VAR_2->t_refcount <= 1)
    FUNC_3(VAR_3, "reiserfs-2005",
       "BAD: refcount <= 1, but "
       "journal_info != 0");
   return 0;
  } else {




   FUNC_3(VAR_3, "clm-2100",
      "nesting info a different FS");
   VAR_2->t_handle_save = VAR_1->journal_info;
   VAR_1->journal_info = VAR_2;
  }
 } else {
  VAR_1->journal_info = VAR_2;
 }
 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0);
 FUNC_0(VAR_1->journal_info != VAR_2);




 if (VAR_6)
  VAR_1->journal_info = VAR_2->t_handle_save;
 else
  FUNC_0(!VAR_2->t_refcount);

 return VAR_6;
}
