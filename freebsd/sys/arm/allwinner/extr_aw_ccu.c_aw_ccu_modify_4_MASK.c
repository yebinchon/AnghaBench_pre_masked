
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_ccu_softc {int bst; int mtx; } ;
typedef int device_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct aw_ccu_softc*,int ,int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct aw_ccu_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, bus_addr_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct aw_ccu_softc *VAR_6;
 bus_space_handle_t VAR_7;
 bus_size_t VAR_8;
 uint32_t VAR_9;

 VAR_6 = FUNC_3(VAR_2);

 if (FUNC_0(VAR_6, VAR_3, &VAR_7, &VAR_8) != 0)
  return (VAR_0);

 FUNC_4(&VAR_6->mtx, VAR_1);
 VAR_9 = FUNC_1(VAR_6->bst, VAR_7, VAR_8);
 VAR_9 &= ~VAR_4;
 VAR_9 |= VAR_5;
 FUNC_2(VAR_6->bst, VAR_7, VAR_8, VAR_9);

 return (0);
}
