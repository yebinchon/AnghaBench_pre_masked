
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct init_qm_vport_params {int vport_rl; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ecore_hwfn*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct ecore_hwfn *VAR_5,
          u8 VAR_6,
          u8 VAR_7,
          u32 VAR_8,
          struct init_qm_vport_params *VAR_9)
{
 u8 VAR_10, VAR_11;
 u32 VAR_12;

 if (VAR_6 + VAR_7 >= VAR_0) {
  FUNC_0(VAR_5, 1, "Invalid VPORT ID for rate limiter configuration\n");
  return -1;
 }


 for (VAR_10 = 0, VAR_11 = VAR_6; VAR_10 < VAR_7; VAR_10++, VAR_11++) {
  VAR_12 = FUNC_1(VAR_9[VAR_10].vport_rl ? VAR_9[VAR_10].vport_rl : VAR_8);
  if (VAR_12 > FUNC_2(VAR_8)) {
   FUNC_0(VAR_5, 1, "Invalid VPORT rate-limit configuration\n");
   return -1;
  }

  FUNC_4(VAR_5, VAR_1 + VAR_11, (u32)VAR_4);
  FUNC_4(VAR_5, VAR_3 + VAR_11, FUNC_3(VAR_8) | (u32)VAR_4);
  FUNC_4(VAR_5, VAR_2 + VAR_11, VAR_12);
 }

 return 0;
}
