
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct run_softc {int (* sc_srom_read ) (struct run_softc*,int ,int *) ;} ;


 int FUNC_0 (struct run_softc*,int ,int *) ;

__attribute__((used)) static __inline int
FUNC_1(struct run_softc *VAR_0, uint16_t VAR_1, uint16_t *VAR_2)
{

 return VAR_0->sc_srom_read(VAR_0, VAR_1, VAR_2);
}
