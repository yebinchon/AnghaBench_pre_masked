
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_data {int own_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*,int ,char const*,int ,int *,int *,char*,int *,int *,int ) ;

int FUNC_1(struct hostapd_data *VAR_3, const char *VAR_4)
{
 char VAR_5[VAR_1];
 u8 VAR_6[VAR_0];
 return FUNC_0(VAR_3, VAR_2, VAR_4, VAR_3->own_addr,
         ((void*)0), ((void*)0), VAR_5, VAR_6, ((void*)0), 0);
}
