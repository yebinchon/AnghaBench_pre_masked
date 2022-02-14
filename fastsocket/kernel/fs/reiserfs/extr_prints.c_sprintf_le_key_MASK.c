
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int k_objectid; int k_dir_id; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (struct reiserfs_key*) ;
 char* FUNC_2 (struct reiserfs_key*) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static void FUNC_4(char *VAR_0, struct reiserfs_key *VAR_1)
{
 if (VAR_1)
  FUNC_3(VAR_0, "[%d %d %s %s]", FUNC_0(VAR_1->k_dir_id),
   FUNC_0(VAR_1->k_objectid), FUNC_1(VAR_1),
   FUNC_2(VAR_1));
 else
  FUNC_3(VAR_0, "[NULL]");
}
