
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_int_task; int alc_tq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_5)
{
 struct alc_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = (struct alc_softc *)VAR_5;

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 if ((VAR_7 & VAR_0) == 0)
  return (VAR_3);

 FUNC_1(VAR_6, VAR_1, VAR_4);
 FUNC_2(VAR_6->alc_tq, &VAR_6->alc_int_task);

 return (VAR_2);
}
