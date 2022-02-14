
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sta_info {int addr; } ;
struct iapp_data {int hapd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,char*,int ) ;
 int FUNC_1 (struct iapp_data*,int ,int ) ;
 int FUNC_2 (struct iapp_data*,int ) ;

void FUNC_3(struct iapp_data *VAR_2, struct sta_info *VAR_3)
{
 u16 VAR_4 = 0;

 if (VAR_2 == ((void*)0))
  return;


 FUNC_0(VAR_2->hapd, VAR_3->addr, VAR_1,
         VAR_0, "IAPP-ADD.request(seq=%d)", VAR_4);
 FUNC_2(VAR_2, VAR_3->addr);
 FUNC_1(VAR_2, VAR_3->addr, VAR_4);






}
