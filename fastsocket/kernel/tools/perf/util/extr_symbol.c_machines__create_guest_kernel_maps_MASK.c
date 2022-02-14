
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_root {int dummy; } ;
struct dirent {char* d_name; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {char* guestmount; scalar_t__ default_guest_kallsyms; scalar_t__ default_guest_modules; scalar_t__ default_guest_vmlinux_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct dirent**) ;
 int FUNC_2 (char) ;
 int FUNC_3 (struct rb_root*,scalar_t__) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,struct dirent***,int *,int *) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;
 TYPE_1__ VAR_6 ;

int FUNC_8(struct rb_root *VAR_7)
{
 int VAR_8 = 0;
 struct dirent **VAR_9 = ((void*)0);
 int VAR_10, VAR_11 = 0;
 char VAR_12[VAR_3];
 pid_t VAR_13;
 char *VAR_14;

 if (VAR_6.default_guest_vmlinux_name ||
     VAR_6.default_guest_modules ||
     VAR_6.default_guest_kallsyms) {
  FUNC_3(VAR_7, VAR_0);
 }

 if (VAR_6.guestmount) {
  VAR_11 = FUNC_5(VAR_6.guestmount, &VAR_9, ((void*)0), ((void*)0));
  if (VAR_11 <= 0)
   return -VAR_1;
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   if (!FUNC_2(VAR_9[VAR_10]->d_name[0])) {

    continue;
   }
   VAR_13 = (pid_t)FUNC_7(VAR_9[VAR_10]->d_name, &VAR_14, 10);
   if ((*VAR_14 != '\0') ||
       (VAR_14 == VAR_9[VAR_10]->d_name) ||
       (VAR_5 == VAR_2)) {
    FUNC_4("invalid directory (%s). Skipping.\n",
      VAR_9[VAR_10]->d_name);
    continue;
   }
   FUNC_6(VAR_12, "%s/%s/proc/kallsyms",
    VAR_6.guestmount,
    VAR_9[VAR_10]->d_name);
   VAR_8 = FUNC_0(VAR_12, VAR_4);
   if (VAR_8) {
    FUNC_4("Can't access file %s\n", VAR_12);
    goto failure;
   }
   FUNC_3(VAR_7, VAR_13);
  }
failure:
  FUNC_1(VAR_9);
 }

 return VAR_8;
}
