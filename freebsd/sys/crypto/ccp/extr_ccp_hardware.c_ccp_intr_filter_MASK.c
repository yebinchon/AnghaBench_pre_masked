
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int valid_queues; int queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccp_softc*,size_t,int ,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2)
{
 struct ccp_softc *VAR_3 = VAR_2;
 size_t VAR_4;


 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3->queues); VAR_4++) {
  if ((VAR_3->valid_queues & (1 << VAR_4)) == 0)
   continue;


  FUNC_0(VAR_3, VAR_4, VAR_0, 0);
 }

 return (VAR_1);
}
