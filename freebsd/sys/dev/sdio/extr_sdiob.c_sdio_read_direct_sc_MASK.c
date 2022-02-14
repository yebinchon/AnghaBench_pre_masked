
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sdiob_softc {int dummy; } ;


 int FUNC_0 (struct sdiob_softc*,int ,int ,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct sdiob_softc *VAR_0, uint8_t VAR_1, uint32_t VAR_2,
    uint8_t *VAR_3)
{
 int VAR_4;
 uint8_t VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, 0, &VAR_5);
 if (VAR_4 == 0 && VAR_3 != ((void*)0))
  *VAR_3 = VAR_5;
 return (VAR_4);
}
