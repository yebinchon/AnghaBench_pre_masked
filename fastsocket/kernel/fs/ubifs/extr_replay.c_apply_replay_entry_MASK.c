
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ need_recovery; int replay_sqnum; } ;
struct replay_entry {int flags; int new_size; int key; int len; int offs; int lnum; int nm; int sqnum; } ;
typedef int ino_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (char*,int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct ubifs_info*,int *) ;
 int FUNC_3 (struct ubifs_info*,int *) ;
 int FUNC_4 (struct ubifs_info*,int *) ;
 int FUNC_5 (struct ubifs_info*,struct replay_entry*) ;
 int FUNC_6 (struct ubifs_info*,struct replay_entry*) ;
 int FUNC_7 (struct ubifs_info*,int *,int,int ) ;
 int FUNC_8 (struct ubifs_info*,int *,int ,int ,int ) ;
 int FUNC_9 (struct ubifs_info*,int *,int ,int ,int ,int *) ;
 int FUNC_10 (struct ubifs_info*,int *) ;
 int FUNC_11 (struct ubifs_info*,int ) ;
 int FUNC_12 (struct ubifs_info*,int *,int *) ;

__attribute__((used)) static int FUNC_13(struct ubifs_info *VAR_2, struct replay_entry *VAR_3)
{
 int VAR_4, VAR_5 = ((VAR_3->flags & VAR_0) != 0);

 FUNC_1("LEB %d:%d len %d flgs %d sqnum %llu %s", VAR_3->lnum,
  VAR_3->offs, VAR_3->len, VAR_3->flags, VAR_3->sqnum, FUNC_0(&VAR_3->key));


 VAR_2->replay_sqnum = VAR_3->sqnum;

 if (VAR_3->flags & VAR_1)
  VAR_4 = FUNC_5(VAR_2, VAR_3);
 else if (FUNC_2(VAR_2, &VAR_3->key)) {
  if (VAR_5)
   VAR_4 = FUNC_12(VAR_2, &VAR_3->key, &VAR_3->nm);
  else
   VAR_4 = FUNC_9(VAR_2, &VAR_3->key, VAR_3->lnum, VAR_3->offs,
            VAR_3->len, &VAR_3->nm);
 } else {
  if (VAR_5)
   switch (FUNC_4(VAR_2, &VAR_3->key)) {
   case 129:
   {
    ino_t VAR_6 = FUNC_3(VAR_2, &VAR_3->key);

    VAR_4 = FUNC_11(VAR_2, VAR_6);
    break;
   }
   case 128:
    VAR_4 = FUNC_6(VAR_2, VAR_3);
    break;
   default:
    VAR_4 = FUNC_10(VAR_2, &VAR_3->key);
    break;
   }
  else
   VAR_4 = FUNC_8(VAR_2, &VAR_3->key, VAR_3->lnum, VAR_3->offs,
         VAR_3->len);
  if (VAR_4)
   return VAR_4;

  if (VAR_2->need_recovery)
   VAR_4 = FUNC_7(VAR_2, &VAR_3->key, VAR_5,
             VAR_3->new_size);
 }

 return VAR_4;
}
