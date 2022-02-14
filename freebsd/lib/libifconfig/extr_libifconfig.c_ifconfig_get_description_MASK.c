
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buffer; size_t length; } ;
struct ifreq {TYPE_1__ ifr_buffer; int ifr_name; } ;
typedef int ifr ;
struct TYPE_7__ {void* errcode; void* errtype; } ;
struct TYPE_8__ {TYPE_2__ error; } ;
typedef TYPE_3__ ifconfig_handle_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,char const*,int) ;
 scalar_t__ FUNC_6 (char*) ;

int
FUNC_7(ifconfig_handle_t *VAR_4, const char *VAR_5,
    char **VAR_6)
{
 struct ifreq VAR_7;
 char *VAR_8;
 size_t VAR_9;

 VAR_8 = ((void*)0);
 VAR_9 = 64;
 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 (void)FUNC_5(VAR_7.ifr_name, VAR_5, sizeof(VAR_7.ifr_name));

 for (;;) {
  if ((VAR_8 = FUNC_3(VAR_8, VAR_9)) == ((void*)0)) {
   VAR_4->error.errtype = VAR_2;
   VAR_4->error.errcode = VAR_1;
   return (-1);
  }

  VAR_7.ifr_buffer.buffer = VAR_8;
  VAR_7.ifr_buffer.length = VAR_9;
  if (FUNC_1(VAR_4, VAR_0, VAR_3, &VAR_7) != 0) {
   FUNC_0(VAR_8);
   return (-1);
  }

  if (VAR_7.ifr_buffer.buffer == VAR_8) {
   if (FUNC_6(VAR_8) > 0) {
    *VAR_6 = FUNC_4(VAR_8);
    FUNC_0(VAR_8);

    if (VAR_6 == ((void*)0)) {
     VAR_4->error.errtype = VAR_2;
     VAR_4->error.errcode = VAR_1;
     return (-1);
    }

    return (0);
   }
  } else if (VAR_7.ifr_buffer.length > VAR_9) {
   VAR_9 = VAR_7.ifr_buffer.length;
   continue;
  }
  break;
 }
 FUNC_0(VAR_8);
 VAR_4->error.errtype = VAR_2;
 VAR_4->error.errcode = 0;
 return (-1);
}
