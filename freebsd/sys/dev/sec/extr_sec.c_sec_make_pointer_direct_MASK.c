
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct sec_softc {int dummy; } ;
struct sec_hw_desc_ptr {int shdp_ptr; scalar_t__ shdp_j; scalar_t__ shdp_extent; int shdp_length; } ;
struct sec_desc {TYPE_1__* sd_desc; } ;
typedef int bus_size_t ;
typedef int bus_addr_t ;
struct TYPE_2__ {struct sec_hw_desc_ptr* shd_pointer; } ;


 int FUNC_0 (struct sec_softc*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct sec_softc *VAR_1, struct sec_desc *VAR_2, u_int VAR_3,
    bus_addr_t VAR_4, bus_size_t VAR_5)
{
 struct sec_hw_desc_ptr *VAR_6;

 FUNC_0(VAR_1, VAR_0);

 VAR_6 = &(VAR_2->sd_desc->shd_pointer[VAR_3]);
 VAR_6->shdp_length = VAR_5;
 VAR_6->shdp_extent = 0;
 VAR_6->shdp_j = 0;
 VAR_6->shdp_ptr = VAR_4;

 return (0);
}
