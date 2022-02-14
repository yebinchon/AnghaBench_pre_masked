
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_dev; int s_blocksize; int s_bdev; } ;
struct reiserfs_journal {int * j_dev_bd; void* j_dev_mode; } ;
typedef void* fmode_t ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int *,struct reiserfs_journal*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,void*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int * FUNC_9 (char const*,void*,struct reiserfs_journal*) ;
 int * FUNC_10 (scalar_t__,void*) ;
 int FUNC_11 (struct super_block*,char*,int ) ;
 int FUNC_12 (struct super_block*,char*,char const*,int,...) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct super_block *VAR_3,
       struct reiserfs_journal *VAR_4,
       const char *VAR_5)
{
 int VAR_6;
 dev_t VAR_7;
 fmode_t VAR_8 = VAR_1 | VAR_2;
 char VAR_9[VAR_0];

 VAR_6 = 0;

 VAR_4->j_dev_bd = ((void*)0);
 VAR_7 = FUNC_2(VAR_3) ?
     FUNC_8(FUNC_2(VAR_3)) : VAR_3->s_dev;

 if (FUNC_5(VAR_3->s_bdev))
  VAR_8 = VAR_1;


 if ((!VAR_5 || !VAR_5[0])) {
  VAR_4->j_dev_bd = FUNC_10(VAR_7, VAR_8);
  VAR_4->j_dev_mode = VAR_8;
  if (FUNC_0(VAR_4->j_dev_bd)) {
   VAR_6 = FUNC_1(VAR_4->j_dev_bd);
   VAR_4->j_dev_bd = ((void*)0);
   FUNC_12(VAR_3, "sh-458",
      "cannot init journal device '%s': %i",
      FUNC_3(VAR_7, VAR_9), VAR_6);
   return VAR_6;
  } else if (VAR_7 != VAR_3->s_dev) {
   VAR_6 = FUNC_4(VAR_4->j_dev_bd, VAR_4);
   if (VAR_6) {
    FUNC_7(VAR_4->j_dev_bd, VAR_8);
    return VAR_6;
   }

   FUNC_13(VAR_4->j_dev_bd, VAR_3->s_blocksize);
  }

  return 0;
 }

 VAR_4->j_dev_mode = VAR_8;
 VAR_4->j_dev_bd = FUNC_9(VAR_5,
      VAR_8, VAR_4);
 if (FUNC_0(VAR_4->j_dev_bd)) {
  VAR_6 = FUNC_1(VAR_4->j_dev_bd);
  VAR_4->j_dev_bd = ((void*)0);
  FUNC_12(VAR_3,
     "journal_init_dev: Cannot open '%s': %i",
     VAR_5, VAR_6);
  return VAR_6;
 }

 FUNC_13(VAR_4->j_dev_bd, VAR_3->s_blocksize);
 FUNC_11(VAR_3,
        "journal_init_dev: journal device: %s\n",
        FUNC_6(VAR_4->j_dev_bd, VAR_9));
 return 0;
}
