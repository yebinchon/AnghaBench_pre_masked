
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inodesc {scalar_t__ id_parent; int id_name; struct direct* id_dirp; } ;
struct direct {scalar_t__ d_ino; int d_reclen; scalar_t__ d_namlen; int d_name; int d_type; } ;
struct TYPE_2__ {int ino_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct direct*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,size_t) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct inodesc *VAR_3)
{
 struct direct *VAR_4 = VAR_3->id_dirp;
 struct direct VAR_5;
 int VAR_6, VAR_7;

 VAR_5.d_namlen = FUNC_3(VAR_3->id_name);
 VAR_6 = FUNC_0(0, &VAR_5);
 if (VAR_4->d_ino != 0)
  VAR_7 = FUNC_0(0, VAR_4);
 else
  VAR_7 = 0;
 if (VAR_4->d_reclen - VAR_7 < VAR_6)
  return (VAR_1);
 VAR_5.d_reclen = VAR_4->d_reclen - VAR_7;
 VAR_4->d_reclen = VAR_7;
 VAR_4 = (struct direct *)(((char *)VAR_4) + VAR_7);
 VAR_4->d_ino = VAR_3->id_parent;
 VAR_4->d_reclen = VAR_5.d_reclen;
 VAR_4->d_type = FUNC_1(VAR_3->id_parent)->ino_type;
 VAR_4->d_namlen = VAR_5.d_namlen;
 FUNC_2(VAR_4->d_name, VAR_3->id_name, (size_t)VAR_5.d_namlen + 1);
 return (VAR_0|VAR_2);
}
