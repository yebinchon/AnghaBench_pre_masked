
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_results {int dummy; } ;
struct bgscan_simple_data {int scan_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct bgscan_simple_data*,int *) ;
 int FUNC_1 (int ,int ,int ,struct bgscan_simple_data*,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2,
         struct wpa_scan_results *VAR_3)
{
 struct bgscan_simple_data *VAR_4 = VAR_2;

 FUNC_2(VAR_0, "bgscan simple: scan result notification");

 FUNC_0(VAR_1, VAR_4, ((void*)0));
 FUNC_1(VAR_4->scan_interval, 0, VAR_1,
          VAR_4, ((void*)0));
 return 0;
}
