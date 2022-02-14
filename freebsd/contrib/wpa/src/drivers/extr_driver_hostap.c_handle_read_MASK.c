
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostap_driver_data {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostap_driver_data*,unsigned char*,int) ;
 int FUNC_1 (int,unsigned char*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_2, void *VAR_3, void *VAR_4)
{
 struct hostap_driver_data *VAR_5 = VAR_3;
 int VAR_6;
 unsigned char VAR_7[3000];

 VAR_6 = FUNC_1(VAR_2, VAR_7, sizeof(VAR_7), 0);
 if (VAR_6 < 0) {
  FUNC_3(VAR_0, "recv: %s", FUNC_2(VAR_1));
  return;
 }

 FUNC_0(VAR_5, VAR_7, VAR_6);
}
