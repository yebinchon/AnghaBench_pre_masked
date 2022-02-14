
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * buffer; scalar_t__ length; } ;
struct ifreq {TYPE_1__ ifr_buffer; int ifr_name; } ;
typedef int ifr ;
typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

int
FUNC_3(ifconfig_handle_t *VAR_2, const char *VAR_3)
{
 struct ifreq VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 (void)FUNC_2(VAR_4.ifr_name, VAR_3, sizeof(VAR_4.ifr_name));
 VAR_4.ifr_buffer.length = 0;
 VAR_4.ifr_buffer.buffer = ((void*)0);

 if (FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_4) < 0) {
  return (-1);
 }
 return (0);
}
