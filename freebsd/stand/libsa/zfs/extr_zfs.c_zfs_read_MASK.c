
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfsmount {int * spa; } ;
struct stat {scalar_t__ st_size; } ;
struct open_file {scalar_t__ f_fsdata; scalar_t__ f_devdata; } ;
struct file {scalar_t__ f_seekp; int f_dnode; } ;
typedef int spa_t ;


 int FUNC_0 (int const*,int *,size_t,void*,size_t) ;
 int FUNC_1 (char) ;
 int FUNC_2 (struct open_file*,struct stat*) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_0, void *VAR_1, size_t VAR_2, size_t *VAR_3 )
{
 const spa_t *VAR_4 = ((struct zfsmount *)VAR_0->f_devdata)->spa;
 struct file *VAR_5 = (struct file *)VAR_0->f_fsdata;
 struct stat VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_0, &VAR_6);
 if (VAR_8)
  return (VAR_8);
 VAR_7 = VAR_2;
 if (VAR_5->f_seekp + VAR_7 > VAR_6.st_size)
  VAR_7 = VAR_6.st_size - VAR_5->f_seekp;

 VAR_8 = FUNC_0(VAR_4, &VAR_5->f_dnode, VAR_5->f_seekp, VAR_1, VAR_7);
 if (VAR_8)
  return (VAR_8);

 if (0) {
     int VAR_9;
     for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  FUNC_1(((char*) VAR_1)[VAR_9]);
 }
 VAR_5->f_seekp += VAR_7;
 if (VAR_3)
  *VAR_3 = VAR_2 - VAR_7;

 return (0);
}
