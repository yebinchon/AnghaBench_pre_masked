
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirlistent {scalar_t__ refcnt; struct dirlistent* dir; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct dirlistent*,int ) ;
 int VAR_0 ;
 struct dirlistent* FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (struct dirlistent*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3)
{
 struct dirlistent *VAR_4;

 if (*VAR_3 == '\0')
  return;

 FUNC_4(&VAR_1);
 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_4 != ((void*)0), ("devfs_dir_unref: dir %s not referenced", VAR_3));
 VAR_4->refcnt--;
 FUNC_0(VAR_4->refcnt >= 0, ("devfs_dir_unref: negative refcnt"));
 if (VAR_4->refcnt == 0) {
  FUNC_1(VAR_4, VAR_2);
  FUNC_5(&VAR_1);
  FUNC_3(VAR_4->dir, VAR_0);
  FUNC_3(VAR_4, VAR_0);
 } else
  FUNC_5(&VAR_1);
}
