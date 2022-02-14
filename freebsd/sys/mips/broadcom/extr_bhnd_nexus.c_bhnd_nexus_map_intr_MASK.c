
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bcm_mips_intr_map_data {int mdata; int ivec; } ;
typedef int rman_res_t ;
typedef int device_t ;


 uintptr_t FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,char*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *,uintptr_t,int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, device_t VAR_4, u_int VAR_5, rman_res_t *VAR_6)
{
 struct bcm_mips_intr_map_data *VAR_7;
 u_int VAR_8;
 uintptr_t VAR_9;
 int VAR_10;


 if ((VAR_10 = FUNC_2(VAR_4, VAR_5, &VAR_8))) {
  FUNC_3(VAR_3, "error fetching ivec for intr %u: %d\n",
      VAR_5, VAR_10);
  return (VAR_10);
 }


 VAR_9 = FUNC_0(VAR_3, VAR_4, 0);
 FUNC_1(VAR_9 != 0, ("missing interrupt domain"));


 VAR_7 = (struct bcm_mips_intr_map_data *)FUNC_4(
     VAR_0, sizeof(*VAR_7), VAR_1 | VAR_2);
 VAR_7->ivec = VAR_8;


 *VAR_6 = FUNC_5(((void*)0), VAR_9, &VAR_7->mdata);
 return (0);
}
