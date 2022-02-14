
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int*,int,char*,int) ;
 int FUNC_4 (int*,int,char*,int) ;
 int FUNC_5 (int*,int,char*,char*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int ,int,int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static enum dbg_status FUNC_8(struct ecore_hwfn *VAR_5,
               struct ecore_ptt *VAR_6,
               u32 *VAR_7,
               bool VAR_8,
               u32 *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12 = 0;

 *VAR_9 = 0;


 VAR_12 += FUNC_1(VAR_5, VAR_6, VAR_7 + VAR_12, VAR_8, 1);
 VAR_12 += FUNC_5(VAR_7 + VAR_12, VAR_8, "dump-type", "protection-override");




 VAR_12 += FUNC_4(VAR_7 + VAR_12, VAR_8, "protection_override_data", 1);
 VAR_10 = VAR_12;
 VAR_12 += FUNC_3(VAR_7 + VAR_12, VAR_8, "size", 0);

 if (VAR_8) {

  VAR_11 = FUNC_7(VAR_5, VAR_6, VAR_1) * VAR_4;
  VAR_12 += FUNC_6(VAR_5, VAR_6, VAR_7 + VAR_12, 1, FUNC_0(VAR_2), VAR_11, 1);
  FUNC_3(VAR_7 + VAR_10, VAR_8, "size", VAR_11);
 }
 else {
  VAR_12 += VAR_3;
 }


 VAR_12 += FUNC_2(VAR_7, VAR_12, VAR_8);

 *VAR_9 = VAR_12;

 return VAR_0;
}
