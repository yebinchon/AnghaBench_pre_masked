
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {scalar_t__ id_parent; int id_entryno; struct direct* id_dirp; } ;
struct direct {scalar_t__ d_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct inodesc *VAR_4)
{
 struct direct *VAR_5 = VAR_4->id_dirp;

 if (VAR_4->id_entryno++ < 2 || VAR_5->d_ino != VAR_4->id_parent)
  return (VAR_2);
 VAR_5->d_ino = 0;
 return (VAR_0|VAR_3|VAR_1);
}
