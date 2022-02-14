
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int parent_dmat; } ;
typedef int bus_dmamap_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,void*,int ,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (int ,void**,int ,int *) ;
 int FUNC_2 (int ,void*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void *
FUNC_3(struct sc_info *VAR_2, u_int32_t VAR_3, bus_addr_t *VAR_4,
    bus_dmamap_t *VAR_5)
{
 void *VAR_6;

 *VAR_4 = 0;
 if (FUNC_1(VAR_2->parent_dmat, &VAR_6, VAR_0, VAR_5))
  return ((void*)0);
 if (FUNC_0(VAR_2->parent_dmat, *VAR_5, VAR_6, VAR_3, VAR_1, VAR_4, 0)
     || !*VAR_4) {
  FUNC_2(VAR_2->parent_dmat, VAR_6, *VAR_5);
  return ((void*)0);
 }
 return VAR_6;
}
