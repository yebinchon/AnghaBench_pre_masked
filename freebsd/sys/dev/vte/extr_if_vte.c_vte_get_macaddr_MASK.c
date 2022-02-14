
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vte_softc {int* vte_eaddr; } ;


 int FUNC_0 (struct vte_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct vte_softc *VAR_3)
{
 uint16_t VAR_4;





 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_3->vte_eaddr[0] = (VAR_4 >> 0) & 0xFF;
 VAR_3->vte_eaddr[1] = (VAR_4 >> 8) & 0xFF;
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 VAR_3->vte_eaddr[2] = (VAR_4 >> 0) & 0xFF;
 VAR_3->vte_eaddr[3] = (VAR_4 >> 8) & 0xFF;
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_3->vte_eaddr[4] = (VAR_4 >> 0) & 0xFF;
 VAR_3->vte_eaddr[5] = (VAR_4 >> 8) & 0xFF;
}
