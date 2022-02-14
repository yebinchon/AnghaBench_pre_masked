
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int queues; } ;
typedef int device_t ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct ccp_softc*) ;
 int FUNC_2 (int ) ;
 struct ccp_softc* FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(device_t VAR_0)
{
 struct ccp_softc *VAR_1;
 unsigned VAR_2;

 VAR_1 = FUNC_3(VAR_0);

 for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_1->queues); VAR_2++)
  FUNC_0(VAR_0, VAR_2);

 FUNC_1(VAR_1);
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
}
