
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf_softc {scalar_t__ pcf_started; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcf_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pcf_softc*,int) ;

__attribute__((used)) static void
FUNC_3(struct pcf_softc *VAR_6)
{

 FUNC_0(VAR_6);
 if (VAR_6->pcf_started) {

  FUNC_2(VAR_6, VAR_3|VAR_2|VAR_1|VAR_4|VAR_0);

  VAR_6->pcf_started = 0;
 }
}
