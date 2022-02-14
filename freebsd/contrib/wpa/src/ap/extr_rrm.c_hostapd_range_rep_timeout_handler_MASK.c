
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {scalar_t__ range_req_active; int range_req_token; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, void *VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_1;

 FUNC_0(VAR_0, "RRM: Range request (token %u) timed out",
     VAR_3->range_req_token);
 VAR_3->range_req_active = 0;
}
