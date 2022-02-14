
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct i2s_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ level; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (struct i2s_softc*,int) ;

__attribute__((used)) static void
FUNC_1(struct i2s_softc *VAR_3)
{
 u_int VAR_4 = 0;

 if (VAR_2[VAR_0] &&
     VAR_2[VAR_0]->level)
  VAR_4 |= 1 << 1;

 if (VAR_2[VAR_1] &&
     VAR_2[VAR_1]->level)
  VAR_4 |= 1 << 2;

 if (VAR_4 == 0)
  VAR_4 = 1 << 0;

 FUNC_0(VAR_3, VAR_4);
}
