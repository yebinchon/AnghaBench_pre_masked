
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_id; } ;
typedef int journal_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1,
          journal_t *VAR_2,
          int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_0, "File system error %d recorded in "
       "journal %u.\n", VAR_4, VAR_3);
  FUNC_3(VAR_0, "File system on device %s needs checking.\n",
       VAR_1->s_id);

  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }
}
