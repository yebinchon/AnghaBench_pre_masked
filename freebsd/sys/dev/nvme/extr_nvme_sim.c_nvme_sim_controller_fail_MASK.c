
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_sim_softc {int s_sim; int s_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_sim_softc*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct nvme_sim_softc *VAR_4 = VAR_3;

 FUNC_3(VAR_0, VAR_4->s_path, ((void*)0));
 FUNC_5(VAR_4->s_path);
 FUNC_4(FUNC_1(VAR_4->s_sim));
 FUNC_0(VAR_4->s_sim, VAR_2);
 FUNC_2(VAR_4, VAR_1);
}
