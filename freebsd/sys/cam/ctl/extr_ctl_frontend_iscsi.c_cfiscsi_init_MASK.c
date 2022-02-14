
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfiscsi_softc {int targets; int sessions; int accept_cv; int sessions_cv; int lock; } ;
struct cfiscsi_data_wait {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct cfiscsi_softc*,int) ;
 int VAR_2 ;
 struct cfiscsi_softc VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_5(void)
{
 struct cfiscsi_softc *VAR_4;

 VAR_4 = &VAR_3;
 FUNC_1(VAR_4, sizeof(*VAR_4));
 FUNC_3(&VAR_4->lock, "cfiscsi", ((void*)0), VAR_0);

 FUNC_2(&VAR_4->sessions_cv, "cfiscsi_sessions");



 FUNC_0(&VAR_4->sessions);
 FUNC_0(&VAR_4->targets);

 VAR_2 = FUNC_4("cfiscsi_data_wait",
     sizeof(struct cfiscsi_data_wait), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_1, 0);

 return (0);
}
