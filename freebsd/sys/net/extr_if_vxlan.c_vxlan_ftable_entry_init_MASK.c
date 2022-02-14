
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vxlan_softc {scalar_t__ vxl_ftable_timeout; } ;
struct vxlan_ftable_entry {int vxlfe_raddr; int vxlfe_mac; scalar_t__ vxlfe_expire; int vxlfe_flags; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct sockaddr const*) ;

__attribute__((used)) static void
FUNC_2(struct vxlan_softc *VAR_2, struct vxlan_ftable_entry *VAR_3,
    const uint8_t *VAR_4, const struct sockaddr *VAR_5, uint32_t VAR_6)
{

 VAR_3->vxlfe_flags = VAR_6;
 VAR_3->vxlfe_expire = VAR_1 + VAR_2->vxl_ftable_timeout;
 FUNC_0(VAR_3->vxlfe_mac, VAR_4, VAR_0);
 FUNC_1(&VAR_3->vxlfe_raddr, VAR_5);
}
