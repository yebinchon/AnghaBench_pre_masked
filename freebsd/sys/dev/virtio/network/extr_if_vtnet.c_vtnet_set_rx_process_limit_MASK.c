
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_rx_process_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtnet_softc*,char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct vtnet_softc *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, "rx_process_limit",
     VAR_1);
 if (VAR_3 < 0)
  VAR_3 = VAR_0;
 VAR_2->vtnet_rx_process_limit = VAR_3;
}
