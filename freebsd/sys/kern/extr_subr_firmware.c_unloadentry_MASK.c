
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; } ;
struct priv_fw {scalar_t__ refcnt; int flags; int * file; TYPE_1__ fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct priv_fw* VAR_3 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_0;
 int VAR_7;

 FUNC_1(&VAR_2);




 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  struct priv_fw *VAR_8;
  int VAR_9;

  VAR_8 = &VAR_3[VAR_7 % VAR_0];
  if (VAR_8->fw.name == ((void*)0) || VAR_8->file == ((void*)0) ||
      VAR_8->refcnt != 0 || (VAR_8->flags & VAR_1) == 0)
   continue;
  VAR_6 = VAR_7 + VAR_0;
  VAR_8->flags &= ~VAR_1;

  FUNC_2(&VAR_2);
  VAR_9 = FUNC_0(((void*)0), ((void*)0), VAR_8->file);
  FUNC_1(&VAR_2);
  if (VAR_9 == 0)
   VAR_8->file = ((void*)0);
 }
 FUNC_2(&VAR_2);
}
