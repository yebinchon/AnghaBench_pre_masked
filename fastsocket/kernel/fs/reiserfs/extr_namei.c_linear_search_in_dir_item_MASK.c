
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_dir_entry {int de_entry_num; int de_item_num; int de_ih; scalar_t__ de_gen_number_bit_string; int de_bh; struct reiserfs_de_head* de_deh; } ;
struct reiserfs_de_head {int dummy; } ;
struct cpu_key {int dummy; } ;


 struct reiserfs_de_head* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct cpu_key*) ;
 int FUNC_6 (struct reiserfs_de_head*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct reiserfs_dir_entry*,char const*,int) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (struct reiserfs_dir_entry*) ;
 int FUNC_11 (struct reiserfs_dir_entry*) ;
 int FUNC_12 (struct reiserfs_dir_entry*) ;

__attribute__((used)) static int FUNC_13(struct cpu_key *VAR_2,
         struct reiserfs_dir_entry *VAR_3,
         const char *VAR_4, int VAR_5)
{
 struct reiserfs_de_head *VAR_6 = VAR_3->de_deh;
 int VAR_7;
 int VAR_8;

 VAR_8 = VAR_3->de_entry_num;

 if (VAR_8 == FUNC_3(VAR_3->de_ih) ||
     FUNC_2(FUNC_6(VAR_6 + VAR_8)) !=
     FUNC_2(FUNC_5(VAR_2))) {
  VAR_8--;
 }

 FUNC_4(VAR_3->de_deh != FUNC_0(VAR_3->de_bh, VAR_3->de_ih),
        "vs-7010: array of entry headers not found");

 VAR_6 += VAR_8;

 for (; VAR_8 >= 0; VAR_8--, VAR_6--) {
  if (FUNC_2(FUNC_6(VAR_6)) !=
      FUNC_2(FUNC_5(VAR_2))) {

   return VAR_1;
  }


  if (VAR_3->de_gen_number_bit_string)
   FUNC_9(FUNC_1(FUNC_6(VAR_6)),
    VAR_3->de_gen_number_bit_string);


  VAR_3->de_entry_num = VAR_8;
  FUNC_10(VAR_3);

  if ((VAR_7 =
       FUNC_8(VAR_3, VAR_4, VAR_5)) != VAR_1) {



   FUNC_11(VAR_3);

   FUNC_12(VAR_3);


   return VAR_7;
  }
 }

 if (FUNC_1(FUNC_7(VAR_3->de_ih)) == 0)







  return VAR_1;

 FUNC_4(VAR_3->de_item_num,
        "vs-7015: two diritems of the same directory in one node?");

 return VAR_0;
}
