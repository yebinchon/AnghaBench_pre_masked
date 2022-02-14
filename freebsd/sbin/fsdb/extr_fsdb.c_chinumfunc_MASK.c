
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {int id_parent; struct direct* id_dirp; } ;
struct direct {int d_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

int
FUNC_0(struct inodesc *VAR_6)
{
 struct direct *VAR_7 = VAR_6->id_dirp;

 if (VAR_5++ == VAR_4) {
     VAR_7->d_ino = VAR_6->id_parent;
     return VAR_3|VAR_0|VAR_1;
 }
 return VAR_2;
}
