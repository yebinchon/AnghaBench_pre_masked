
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct prison {int dummy; } ;
struct TYPE_8__ {int mode; } ;
struct TYPE_7__ {TYPE_3__ sem_perm; } ;
struct TYPE_10__ {TYPE_1__* cred; TYPE_2__ u; } ;
struct TYPE_9__ {int semmni; } ;
struct TYPE_6__ {struct prison* cr_prison; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int,int *) ;
 TYPE_5__* VAR_2 ;
 int * VAR_3 ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct prison *VAR_5)
{
 int VAR_6;


 FUNC_0(&VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_4.semmni; VAR_6++) {
  if ((VAR_2[VAR_6].u.sem_perm.mode & VAR_0) &&
      VAR_2[VAR_6].cred != ((void*)0) && VAR_2[VAR_6].cred->cr_prison == VAR_5) {
   FUNC_0(&VAR_3[VAR_6]);
   FUNC_2(VAR_6, ((void*)0));
   FUNC_1(&VAR_3[VAR_6]);
  }
 }
 FUNC_1(&VAR_1);
}
