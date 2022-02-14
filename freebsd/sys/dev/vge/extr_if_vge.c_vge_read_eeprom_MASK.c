
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vge_softc {int dummy; } ;
typedef int * caddr_t ;


 int FUNC_0 (struct vge_softc*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vge_softc*,int,int *) ;

__attribute__((used)) static void
FUNC_3(struct vge_softc *VAR_2, caddr_t VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_3[VAR_7] = FUNC_0(VAR_2, VAR_1 + VAR_7);

}
