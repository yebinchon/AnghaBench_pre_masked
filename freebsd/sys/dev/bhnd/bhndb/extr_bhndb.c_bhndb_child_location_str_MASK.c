
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enum_addr; } ;
struct bhndb_softc {TYPE_1__ chipid; } ;
typedef int device_t ;


 struct bhndb_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,unsigned long long) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct bhndb_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_3, "base=0x%llx",
     (unsigned long long) VAR_4->chipid.enum_addr);
 return (0);
}
