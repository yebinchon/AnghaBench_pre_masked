
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_port {scalar_t__ init_state; } ;
struct sfxge_softc {struct sfxge_port port; int * enp; } ;
typedef int efx_nic_t ;
typedef int efx_link_mode_t ;


 int FUNC_0 (struct sfxge_port*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sfxge_port*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sfxge_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, int VAR_2)
{
 struct sfxge_softc *VAR_3;
 efx_nic_t *VAR_4;
 struct sfxge_port *VAR_5;
 efx_link_mode_t VAR_6;

 VAR_3 = (struct sfxge_softc *)VAR_1;
 VAR_4 = VAR_3->enp;
 VAR_5 = &VAR_3->port;

 FUNC_0(VAR_5);

 if (FUNC_2(VAR_5->init_state != VAR_0))
  goto done;


 (void)FUNC_3(VAR_4, &VAR_6);
 FUNC_4(VAR_3, VAR_6);

done:
 FUNC_1(VAR_5);
}
