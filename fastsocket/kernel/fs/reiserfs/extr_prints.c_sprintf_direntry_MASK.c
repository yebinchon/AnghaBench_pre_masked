
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_dir_entry {int de_namelen; int de_dir_id; int de_objectid; int de_name; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, struct reiserfs_dir_entry *VAR_1)
{
 char VAR_2[20];

 FUNC_0(VAR_2, VAR_1->de_name, VAR_1->de_namelen > 19 ? 19 : VAR_1->de_namelen);
 VAR_2[VAR_1->de_namelen > 19 ? 19 : VAR_1->de_namelen] = 0;
 FUNC_1(VAR_0, "\"%s\"==>[%d %d]", VAR_2, VAR_1->de_dir_id, VAR_1->de_objectid);
}
