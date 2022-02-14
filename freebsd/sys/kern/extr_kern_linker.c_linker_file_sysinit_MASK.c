
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sysinit {scalar_t__ subsystem; scalar_t__ order; int udata; int (* func ) (int ) ;} ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_4__ {int filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,struct sysinit***,struct sysinit***,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(linker_file_t VAR_5)
{
 struct sysinit **VAR_6, **VAR_7, **VAR_8, **VAR_9, *VAR_10;

 FUNC_0(VAR_0, ("linker_file_sysinit: calling SYSINITs for %s\n",
     VAR_5->filename));

 FUNC_5(&VAR_4, VAR_2);

 if (FUNC_1(VAR_5, "sysinit_set", &VAR_6, &VAR_7, ((void*)0)) != 0)
  return;







 for (VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
  for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_7; VAR_9++) {
   if ((*VAR_8)->subsystem < (*VAR_9)->subsystem ||
       ((*VAR_8)->subsystem == (*VAR_9)->subsystem &&
       (*VAR_8)->order <= (*VAR_9)->order))
    continue;
   VAR_10 = *VAR_8;
   *VAR_8 = *VAR_9;
   *VAR_9 = VAR_10;
  }
 }





 FUNC_7(&VAR_4);
 FUNC_2(&VAR_1);
 for (VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
  if ((*VAR_8)->subsystem == VAR_3)
   continue;


  (*((*VAR_8)->func)) ((*VAR_8)->udata);
 }
 FUNC_3(&VAR_1);
 FUNC_6(&VAR_4);
}
