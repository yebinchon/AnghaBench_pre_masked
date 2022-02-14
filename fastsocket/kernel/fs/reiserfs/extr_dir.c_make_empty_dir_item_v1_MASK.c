
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_de_head {scalar_t__ deh_state; void* deh_objectid; void* deh_dir_id; } ;
typedef void* __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct reiserfs_de_head*) ;
 int FUNC_1 (struct reiserfs_de_head*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct reiserfs_de_head*,int) ;
 int FUNC_5 (struct reiserfs_de_head*,int ) ;
 int FUNC_6 (char*) ;

void FUNC_7(char *VAR_3, __le32 VAR_4, __le32 VAR_5,
       __le32 VAR_6, __le32 VAR_7)
{
 struct reiserfs_de_head *VAR_8;

 FUNC_3(VAR_3, 0, VAR_2);
 VAR_8 = (struct reiserfs_de_head *)VAR_3;


 FUNC_5(&(VAR_8[0]), VAR_1);

 VAR_8[0].deh_dir_id = VAR_4;
 VAR_8[0].deh_objectid = VAR_5;
 VAR_8[0].deh_state = 0;
 FUNC_4(&(VAR_8[0]), VAR_2 - FUNC_6("."));
 FUNC_1(&(VAR_8[0]));


 FUNC_5(&(VAR_8[1]), VAR_0);


 VAR_8[1].deh_dir_id = VAR_6;
 VAR_8[1].deh_objectid = VAR_7;
 VAR_8[1].deh_state = 0;
 FUNC_4(&(VAR_8[1]), FUNC_0(&(VAR_8[0])) - FUNC_6(".."));
 FUNC_1(&(VAR_8[1]));


 FUNC_2(VAR_3 + FUNC_0(&(VAR_8[0])), ".", 1);
 FUNC_2(VAR_3 + FUNC_0(&(VAR_8[1])), "..", 2);
}
