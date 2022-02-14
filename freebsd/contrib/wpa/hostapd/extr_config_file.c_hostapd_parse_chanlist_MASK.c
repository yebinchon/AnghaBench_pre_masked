
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_config {int acs_ch_list; } ;


 scalar_t__ FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(struct hostapd_config *VAR_0, char *VAR_1)
{
 char *VAR_2;


 VAR_2 = VAR_1;
 while (VAR_2) {
  VAR_2 = FUNC_1(VAR_2, ' ');
  if (VAR_2)
   *VAR_2++ = ',';
 }
 if (FUNC_0(&VAR_0->acs_ch_list, VAR_1))
  return -1;

 return 0;
}
