
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {int id_name; struct direct* id_dirp; } ;
struct direct {scalar_t__ d_reclen; int d_name; int d_namlen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct direct*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct inodesc *VAR_7)
{
 struct direct *VAR_8 = VAR_7->id_dirp;
 struct direct VAR_9;

 if (VAR_6++ == VAR_5) {

     VAR_9.d_namlen = FUNC_2(VAR_7->id_name);
     if (FUNC_0(VAR_3, &VAR_9) <= VAR_8->d_reclen) {
  VAR_8->d_namlen = VAR_9.d_namlen;
  FUNC_1(VAR_8->d_name, VAR_7->id_name);
  return VAR_4|VAR_0|VAR_1;
     } else
  return VAR_4|VAR_1;
 }
 return VAR_2;
}
