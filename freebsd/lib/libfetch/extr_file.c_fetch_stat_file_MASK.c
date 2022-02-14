
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_stat {int size; int mtime; int atime; } ;
struct stat {int st_size; int st_mtime; int st_atime; } ;


 int FUNC_0 () ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, struct url_stat *VAR_1)
{
 struct stat VAR_2;

 VAR_1->size = -1;
 VAR_1->atime = VAR_1->mtime = 0;
 if (FUNC_1(VAR_0, &VAR_2) == -1) {
  FUNC_0();
  return (-1);
 }
 VAR_1->size = VAR_2.st_size;
 VAR_1->atime = VAR_2.st_atime;
 VAR_1->mtime = VAR_2.st_mtime;
 return (0);
}
