
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {int jme_int_task; int jme_tq; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_5)
{
 struct jme_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = (struct jme_softc *)VAR_5;

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 if (VAR_7 == 0 || VAR_7 == 0xFFFFFFFF)
  return (VAR_1);

 FUNC_1(VAR_6, VAR_3, VAR_2);
 FUNC_2(VAR_6->jme_tq, &VAR_6->jme_int_task);

 return (VAR_0);
}
