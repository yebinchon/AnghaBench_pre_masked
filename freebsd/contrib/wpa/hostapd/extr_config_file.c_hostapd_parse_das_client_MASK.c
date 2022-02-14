
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_bss_config {int radius_das_shared_secret_len; int * radius_das_shared_secret; int radius_das_client_addr; } ;


 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct hostapd_bss_config *VAR_0, char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_2(VAR_1, ' ');
 if (VAR_2 == ((void*)0))
  return -1;

 *VAR_2++ = '\0';

 if (FUNC_0(VAR_1, &VAR_0->radius_das_client_addr))
  return -1;

 FUNC_1(VAR_0->radius_das_shared_secret);
 VAR_0->radius_das_shared_secret = (u8 *) FUNC_3(VAR_2);
 if (VAR_0->radius_das_shared_secret == ((void*)0))
  return -1;
 VAR_0->radius_das_shared_secret_len = FUNC_4(VAR_2);

 return 0;
}
