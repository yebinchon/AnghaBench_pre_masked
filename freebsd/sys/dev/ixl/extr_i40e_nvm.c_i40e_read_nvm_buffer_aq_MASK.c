
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int __le16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct i40e_hw*,int,scalar_t__,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static enum i40e_status_code FUNC_4(struct i40e_hw *VAR_4, u16 VAR_5,
           u16 *VAR_6, u16 *VAR_7)
{
 enum i40e_status_code VAR_8;
 u16 VAR_9 = *VAR_6;
 bool VAR_10 = VAR_0;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;

 FUNC_0("i40e_read_nvm_buffer_aq");

 do {




  if (VAR_5 % VAR_1)
   VAR_9 = FUNC_3(*VAR_6,
     (u16)(VAR_1 -
          (VAR_5 % VAR_1)));
  else
   VAR_9 = FUNC_3((*VAR_6 - VAR_11),
     VAR_1);


  if ((VAR_11 + VAR_9) >= *VAR_6)
   VAR_10 = VAR_3;

  VAR_8 = FUNC_2(VAR_4, 0x0, VAR_5, VAR_9,
         VAR_7 + VAR_11, VAR_10);
  if (VAR_8 != VAR_2)
   goto read_nvm_buffer_aq_exit;




  VAR_11 += VAR_9;
  VAR_5 += VAR_9;
 } while (VAR_11 < *VAR_6);

 for (VAR_12 = 0; VAR_12 < *VAR_6; VAR_12++)
  VAR_7[VAR_12] = FUNC_1(((__le16 *)VAR_7)[VAR_12]);

read_nvm_buffer_aq_exit:
 *VAR_6 = VAR_11;
 return VAR_8;
}
