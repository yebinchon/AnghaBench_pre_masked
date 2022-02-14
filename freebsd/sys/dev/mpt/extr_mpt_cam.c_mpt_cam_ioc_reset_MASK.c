
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int path; int request_timeout_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpt_softc*,int *,int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct mpt_softc *VAR_2, int VAR_3)
{






 FUNC_0(VAR_2, &VAR_2->request_timeout_list,
       VAR_1);
 FUNC_1(VAR_0, VAR_2->path, ((void*)0));
}
