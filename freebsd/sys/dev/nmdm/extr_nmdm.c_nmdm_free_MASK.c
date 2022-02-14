
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nmdmsoftc {int ns_mtx; } ;
struct nmdmpart {TYPE_1__* np_other; int np_task; int np_callout; struct nmdmsoftc* np_pair; } ;
struct TYPE_2__ {int * np_other; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nmdmsoftc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct nmdmpart *VAR_4 = (struct nmdmpart *)VAR_3;
 struct nmdmsoftc *VAR_5 = VAR_4->np_pair;

 FUNC_1(&VAR_4->np_callout);
 FUNC_6(VAR_2, &VAR_4->np_task);






 FUNC_4(&VAR_5->ns_mtx);
 if (VAR_4->np_other != ((void*)0)) {
  VAR_4->np_other->np_other = ((void*)0);
  FUNC_5(&VAR_5->ns_mtx);
  return;
 }
 FUNC_3(&VAR_5->ns_mtx);
 FUNC_2(VAR_5, VAR_0);
 FUNC_0(&VAR_1, 1);
}
