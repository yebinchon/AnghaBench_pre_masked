
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfiscsi_softc {int lock; int sessions_cv; int accept_cv; int targets; int sessions; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct cfiscsi_softc VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void)
{
 struct cfiscsi_softc *VAR_3 = &VAR_2;

 if (!FUNC_0(&VAR_3->sessions) || !FUNC_0(&VAR_3->targets))
  return (VAR_0);

 FUNC_3(VAR_1);



 FUNC_1(&VAR_3->sessions_cv);
 FUNC_2(&VAR_3->lock);
 return (0);
}
