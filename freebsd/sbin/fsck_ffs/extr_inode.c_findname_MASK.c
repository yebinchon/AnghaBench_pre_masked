
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {scalar_t__ id_parent; int id_entryno; int id_name; struct direct* id_dirp; } ;
struct direct {scalar_t__ d_ino; scalar_t__ d_namlen; int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,size_t) ;

int
FUNC_1(struct inodesc *VAR_3)
{
 struct direct *VAR_4 = VAR_3->id_dirp;

 if (VAR_4->d_ino != VAR_3->id_parent || VAR_3->id_entryno < 2) {
  VAR_3->id_entryno++;
  return (VAR_1);
 }
 FUNC_0(VAR_3->id_name, VAR_4->d_name, (size_t)VAR_4->d_namlen + 1);
 return (VAR_2|VAR_0);
}
