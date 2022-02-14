
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_sprom_softc {int store; } ;
typedef int device_t ;
typedef int bhnd_nvram_type ;


 int FUNC_0 (int ,char const*,void const*,size_t,int ) ;
 struct bhnd_sprom_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, const char *VAR_1, const void *VAR_2,
    size_t VAR_3, bhnd_nvram_type VAR_4)
{
 struct bhnd_sprom_softc *VAR_5 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_5->store, VAR_1, VAR_2, VAR_3, VAR_4));
}
