
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mii_data {int dummy; } ;
struct TYPE_4__ {int * miibus; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 struct mii_data* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static __inline struct mii_data*
FUNC_2(e6000sw_softc_t *VAR_0, unsigned int VAR_1)
{

 if (!FUNC_1(VAR_0, VAR_1))
  return (((void*)0));

 return (FUNC_0(VAR_0->miibus[VAR_1]));
}
