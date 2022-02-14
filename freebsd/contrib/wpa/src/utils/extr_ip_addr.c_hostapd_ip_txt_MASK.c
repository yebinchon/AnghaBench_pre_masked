
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v6; int v4; } ;
struct hostapd_ip_addr {scalar_t__ af; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__,int *,char*,size_t) ;
 int FUNC_2 (char*,int ,size_t) ;

const char * FUNC_3(const struct hostapd_ip_addr *VAR_2, char *VAR_3,
       size_t VAR_4)
{
 if (VAR_4 == 0 || VAR_2 == ((void*)0))
  return ((void*)0);

 if (VAR_2->af == VAR_0) {
  FUNC_2(VAR_3, FUNC_0(VAR_2->u.v4), VAR_4);
 } else {
  VAR_3[0] = '\0';
 }







 return VAR_3;
}
