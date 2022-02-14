
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_controller {scalar_t__ ccc; int pmim; int gmim; int mtx; int r_mem; } ;
struct mvs_channel {int unit; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mvs_controller* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_3, device_t VAR_4, int VAR_5)
{
 struct mvs_controller *VAR_6 = FUNC_1(VAR_3);
 int VAR_7 = ((struct mvs_channel *)FUNC_1(VAR_4))->unit;
 int VAR_8 = VAR_1 << (VAR_7 * 2);

 if (VAR_6->ccc == 0)
  return;

 FUNC_2(&VAR_6->mtx);
 if (VAR_5 == VAR_2)
  VAR_6->pmim |= VAR_8;
 else
  VAR_6->pmim &= ~VAR_8;
 FUNC_0(VAR_6->r_mem, VAR_0, VAR_6->gmim | VAR_6->pmim);
 FUNC_3(&VAR_6->mtx);
}
