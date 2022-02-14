
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {scalar_t__ id_parent; int id_name; struct direct* id_dirp; } ;
struct direct {scalar_t__ d_ino; int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(struct inodesc *VAR_5)
{
 struct direct *VAR_6 = VAR_5->id_dirp;

 if (VAR_6->d_ino == 0)
  return (VAR_1);
 if (FUNC_0(VAR_6->d_name, VAR_5->id_name) == 0 &&
     VAR_6->d_ino >= VAR_3 && VAR_6->d_ino <= VAR_4) {
  VAR_5->id_parent = VAR_6->d_ino;
  return (VAR_2|VAR_0);
 }
 return (VAR_1);
}
