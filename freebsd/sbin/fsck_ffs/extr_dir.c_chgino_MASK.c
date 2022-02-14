
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inodesc {int id_parent; int id_name; struct direct* id_dirp; } ;
struct direct {int d_type; int d_ino; scalar_t__ d_namlen; int d_name; } ;
struct TYPE_2__ {int ino_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct inodesc *VAR_3)
{
 struct direct *VAR_4 = VAR_3->id_dirp;

 if (FUNC_1(VAR_4->d_name, VAR_3->id_name, (int)VAR_4->d_namlen + 1))
  return (VAR_1);
 VAR_4->d_ino = VAR_3->id_parent;
 VAR_4->d_type = FUNC_0(VAR_3->id_parent)->ino_type;
 return (VAR_0|VAR_2);
}
