
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtkswitch_softc {int ** miibus; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;
 struct mii_data* FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline struct mii_data *
FUNC_2(struct mtkswitch_softc *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 < 0 || VAR_3 >= VAR_0 || VAR_1->miibus[VAR_3] == ((void*)0))
  return (((void*)0));

 return (FUNC_0(VAR_1->miibus[VAR_3]));
}
