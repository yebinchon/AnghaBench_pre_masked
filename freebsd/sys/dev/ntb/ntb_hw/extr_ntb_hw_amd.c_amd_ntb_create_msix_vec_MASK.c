
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct amd_ntb_softc {TYPE_1__* msix_vec; } ;
struct TYPE_2__ {int num; struct amd_ntb_softc* ntb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct amd_ntb_softc *VAR_3, uint32_t VAR_4)
{
 uint8_t VAR_5;

 VAR_3->msix_vec = FUNC_0(VAR_4 * sizeof(*VAR_3->msix_vec), VAR_0,
     VAR_2 | VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3->msix_vec[VAR_5].num = VAR_5;
  VAR_3->msix_vec[VAR_5].ntb = VAR_3;
 }

 return (0);
}
