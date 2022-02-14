
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {struct direct* id_dirp; } ;
struct direct {int d_ino; int d_reclen; size_t d_type; char* d_namlen; int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int,int,char*,char*,int ) ;
 int VAR_2 ;
 char** VAR_3 ;

int
FUNC_1(struct inodesc *VAR_4)
{
 struct direct *VAR_5 = VAR_4->id_dirp;

 FUNC_0("slot %d off %d ino %d reclen %d: %s, `%.*s'\n",
        VAR_2++, VAR_1, VAR_5->d_ino, VAR_5->d_reclen,
        VAR_3[VAR_5->d_type], VAR_5->d_namlen, VAR_5->d_name);
 VAR_1 += VAR_5->d_reclen;
 return (VAR_0);
}
