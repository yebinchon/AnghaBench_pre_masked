
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtattr {scalar_t__ rta_type; scalar_t__ rta_len; } ;
struct ifinfomsg {scalar_t__ ifi_index; } ;
struct atheros_driver_data {scalar_t__ ifindex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct rtattr* FUNC_1 (struct rtattr*,int) ;
 scalar_t__ FUNC_2 (struct rtattr*,int) ;
 int FUNC_3 (struct atheros_driver_data*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1,
       struct ifinfomsg *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 struct atheros_driver_data *VAR_5 = VAR_1;
 int VAR_6, VAR_7;
 struct rtattr *VAR_8;

 if (VAR_2->ifi_index != VAR_5->ifindex)
  return;

 VAR_6 = VAR_4;
 VAR_8 = (struct rtattr *) VAR_3;

 VAR_7 = FUNC_0(sizeof(struct rtattr));
 while (FUNC_2(VAR_8, VAR_6)) {
  if (VAR_8->rta_type == VAR_0) {
   FUNC_3(
    VAR_5, ((char *) VAR_8) + VAR_7,
    VAR_8->rta_len - VAR_7);
  }
  VAR_8 = FUNC_1(VAR_8, VAR_6);
 }
}
