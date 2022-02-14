
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_file {scalar_t__ dir; int name; } ;
struct gl_dir {scalar_t__ pos; scalar_t__ len; struct gl_file* dir; } ;
struct dirent {scalar_t__ d_ino; int d_reclen; int d_namlen; int d_type; int d_name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dirent*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct dirent *
FUNC_4(void *VAR_2)
{
 static struct dirent VAR_3;
 struct gl_dir *VAR_4 = VAR_2;
 if (VAR_4->pos < VAR_4->len) {
  const struct gl_file *VAR_5 = &VAR_4->dir[VAR_4->pos++];
  FUNC_2(VAR_3.d_name, VAR_5->name);
  VAR_3.d_namlen = FUNC_3(VAR_5->name);
  VAR_3.d_ino = VAR_4->pos;
  VAR_3.d_type = VAR_5->dir ? VAR_0 : VAR_1;
  FUNC_0(("readdir %s %d\n", VAR_3.d_name, VAR_3.d_type));



  VAR_3.d_reclen = FUNC_1(&VAR_3, VAR_3.d_namlen);

  return &VAR_3;
 }
 return ((void*)0);
}
