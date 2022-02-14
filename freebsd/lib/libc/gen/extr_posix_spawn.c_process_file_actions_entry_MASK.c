
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fae_action; int fae_fildes; int fae_newfildes; int fae_mode; int fae_oflag; int fae_path; } ;
typedef TYPE_1__ posix_spawn_file_actions_entry_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(posix_spawn_file_actions_entry_t *VAR_3)
{
 int VAR_4, VAR_5;

 switch (VAR_3->fae_action) {
 case 128:

  VAR_4 = FUNC_3(VAR_3->fae_path, VAR_3->fae_oflag, VAR_3->fae_mode);
  if (VAR_4 < 0)
   return (VAR_2);
  if (VAR_4 != VAR_3->fae_fildes) {
   if (FUNC_1(VAR_4, VAR_3->fae_fildes) == -1) {
    VAR_5 = VAR_2;
    (void)FUNC_0(VAR_4);
    return (VAR_5);
   }
   if (FUNC_0(VAR_4) != 0) {
    if (VAR_2 == VAR_0)
     return (VAR_0);
   }
  }
  if (FUNC_2(VAR_3->fae_fildes, VAR_1, 0) == -1)
   return (VAR_2);
  break;
 case 129:

  if (FUNC_1(VAR_3->fae_fildes, VAR_3->fae_newfildes) == -1)
   return (VAR_2);
  if (FUNC_2(VAR_3->fae_newfildes, VAR_1, 0) == -1)
   return (VAR_2);
  break;
 case 130:

  (void)FUNC_0(VAR_3->fae_fildes);
  break;
 }
 return (0);
}
