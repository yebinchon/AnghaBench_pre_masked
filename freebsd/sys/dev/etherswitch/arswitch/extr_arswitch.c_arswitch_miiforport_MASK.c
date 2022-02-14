
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct arswitch_softc {int numphys; int * miibus; } ;


 struct mii_data* FUNC_0 (int ) ;

__attribute__((used)) static inline struct mii_data *
FUNC_1(struct arswitch_softc *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1-1;

 if (VAR_2 < 0 || VAR_2 >= VAR_0->numphys)
  return (((void*)0));
 return (FUNC_0(VAR_0->miibus[VAR_2]));
}
