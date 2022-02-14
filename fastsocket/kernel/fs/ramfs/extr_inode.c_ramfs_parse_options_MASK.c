
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct ramfs_mount_opts {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (char*,int ,int *) ;
 char* FUNC_2 (char**,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(char *VAR_5, struct ramfs_mount_opts *VAR_6)
{
 substring_t VAR_7[VAR_1];
 int VAR_8;
 int VAR_9;
 char *VAR_10;

 VAR_6->mode = VAR_2;

 while ((VAR_10 = FUNC_2(&VAR_5, ",")) != ((void*)0)) {
  if (!*VAR_10)
   continue;

  VAR_9 = FUNC_1(VAR_10, VAR_4, VAR_7);
  switch (VAR_9) {
  case 128:
   if (FUNC_0(&VAR_7[0], &VAR_8))
    return -VAR_0;
   VAR_6->mode = VAR_8 & VAR_3;
   break;






  }
 }

 return 0;
}
