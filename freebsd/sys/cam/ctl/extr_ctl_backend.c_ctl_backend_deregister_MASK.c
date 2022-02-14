
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_softc {int ctl_lock; int num_backends; int be_list; } ;
struct ctl_backend_driver {int (* shutdown ) () ;char* name; } ;


 int FUNC_0 (int *,struct ctl_backend_driver*,int ,int ) ;
 struct ctl_softc* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 () ;

int
FUNC_5(struct ctl_backend_driver *VAR_3)
{
 struct ctl_softc *VAR_4 = VAR_0;
 int VAR_5;


 if (VAR_3->shutdown != ((void*)0)) {
  if ((VAR_5 = VAR_3->shutdown()) != 0) {
   FUNC_3("%s backend shutdown error: %d\n",
       VAR_3->name, VAR_5);
   return (VAR_5);
  }
 }

 FUNC_1(&VAR_4->ctl_lock);
 FUNC_0(&VAR_4->be_list, VAR_3, VAR_1, VAR_2);
 VAR_4->num_backends--;
 FUNC_2(&VAR_4->ctl_lock);
 return (0);
}
