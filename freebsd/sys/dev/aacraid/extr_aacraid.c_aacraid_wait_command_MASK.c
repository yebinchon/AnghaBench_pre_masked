
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_io_lock; } ;
struct aac_command {struct aac_softc* cm_sc; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aac_command*) ;
 int FUNC_1 (struct aac_softc*) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;
 int FUNC_3 (struct aac_command*,int *,int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(struct aac_command *VAR_3)
{
 struct aac_softc *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->cm_sc;
 FUNC_2(VAR_4, VAR_0, "");
 FUNC_4(&VAR_4->aac_io_lock, VAR_1);


 FUNC_0(VAR_3);
 FUNC_1(VAR_4);
 VAR_5 = FUNC_3(VAR_3, &VAR_4->aac_io_lock, VAR_2, "aacraid_wait", 0);
 return(VAR_5);
}
