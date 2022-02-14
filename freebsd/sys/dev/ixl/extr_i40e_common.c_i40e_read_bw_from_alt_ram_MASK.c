
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int pf_id; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i40e_hw*,int,int*,int,int*) ;

enum i40e_status_code FUNC_1(struct i40e_hw *VAR_7,
     u32 *VAR_8, u32 *VAR_9,
     bool *VAR_10, bool *VAR_11)
{
 enum i40e_status_code VAR_12;
 u32 VAR_13, VAR_14;


 VAR_13 = VAR_3 +
        VAR_4 +
        (VAR_2 * VAR_7->pf_id);
 VAR_14 = VAR_3 +
        VAR_5 +
        (VAR_2 * VAR_7->pf_id);


 VAR_12 = FUNC_0(VAR_7, VAR_13, VAR_8,
     VAR_14, VAR_9);

 if (*VAR_9 & VAR_1)
  *VAR_10 = VAR_6;
 else
  *VAR_10 = VAR_0;

 if (*VAR_8 & VAR_1)
  *VAR_11 = VAR_6;
 else
  *VAR_11 = VAR_0;

 return VAR_12;
}
