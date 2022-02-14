
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct utsname {char* release; } ;
typedef int bf ;
struct TYPE_2__ {scalar_t__* symfs; } ;


 int VAR_0 ;
 int ** FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int * FUNC_2 (char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_3 (struct utsname*) ;
 int ** VAR_2 ;
 int FUNC_4 () ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct utsname VAR_4;
 char VAR_5[VAR_0];

 VAR_2 = FUNC_0(sizeof(char *) * 5);
 if (VAR_2 == ((void*)0))
  return -1;

 VAR_2[VAR_3] = FUNC_2("vmlinux");
 if (VAR_2[VAR_3] == ((void*)0))
  goto out_fail;
 ++VAR_3;
 VAR_2[VAR_3] = FUNC_2("/boot/vmlinux");
 if (VAR_2[VAR_3] == ((void*)0))
  goto out_fail;
 ++VAR_3;


 if (VAR_1.symfs[0] != 0)
  return 0;

 if (FUNC_3(&VAR_4) < 0)
  return -1;

 FUNC_1(VAR_5, sizeof(VAR_5), "/boot/vmlinux-%s", VAR_4.release);
 VAR_2[VAR_3] = FUNC_2(VAR_5);
 if (VAR_2[VAR_3] == ((void*)0))
  goto out_fail;
 ++VAR_3;
 FUNC_1(VAR_5, sizeof(VAR_5), "/lib/modules/%s/build/vmlinux", VAR_4.release);
 VAR_2[VAR_3] = FUNC_2(VAR_5);
 if (VAR_2[VAR_3] == ((void*)0))
  goto out_fail;
 ++VAR_3;
 FUNC_1(VAR_5, sizeof(VAR_5), "/usr/lib/debug/lib/modules/%s/vmlinux",
   VAR_4.release);
 VAR_2[VAR_3] = FUNC_2(VAR_5);
 if (VAR_2[VAR_3] == ((void*)0))
  goto out_fail;
 ++VAR_3;

 return 0;

out_fail:
 FUNC_4();
 return -1;
}
