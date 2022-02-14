
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int length; int * buffer; } ;
struct ifreq {TYPE_2__ ifr_buffer; int ifr_name; } ;
typedef int ifr ;
struct TYPE_7__ {int errcode; int errtype; } ;
struct TYPE_9__ {TYPE_1__ error; } ;
typedef TYPE_3__ ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ,struct ifreq*) ;
 int FUNC_2 (TYPE_3__*,char const*) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (char const*) ;

int
FUNC_7(ifconfig_handle_t *VAR_4, const char *VAR_5,
    const char *VAR_6)
{
 struct ifreq VAR_7;
 int VAR_8;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_8 = FUNC_6(VAR_6);





 if (VAR_8 == 0) {
  return (FUNC_2(VAR_4, VAR_5));
 }

 (void)FUNC_5(VAR_7.ifr_name, VAR_5, sizeof(VAR_7.ifr_name));
 VAR_7.ifr_buffer.length = VAR_8 + 1;
 VAR_7.ifr_buffer.buffer = FUNC_4(VAR_6);

 if (VAR_7.ifr_buffer.buffer == ((void*)0)) {
  VAR_4->error.errtype = VAR_2;
  VAR_4->error.errcode = VAR_1;
  return (-1);
 }

 if (FUNC_1(VAR_4, VAR_0, VAR_3, &VAR_7) != 0) {
  FUNC_0(VAR_7.ifr_buffer.buffer);
  return (-1);
 }

 FUNC_0(VAR_7.ifr_buffer.buffer);
 return (0);
}
