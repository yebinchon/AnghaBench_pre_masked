
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_4__ {int filename; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,struct sysctl_oid***,struct sysctl_oid***,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sysctl_oid*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(linker_file_t VAR_3)
{
 struct sysctl_oid **VAR_4, **VAR_5, **VAR_6;

 FUNC_0(VAR_0,
     ("linker_file_enable_sysctls: enable SYSCTLs for %s\n",
     VAR_3->filename));

 FUNC_2(&VAR_2, VAR_1);

 if (FUNC_1(VAR_3, "sysctl_set", &VAR_4, &VAR_5, ((void*)0)) != 0)
  return;

 FUNC_4(&VAR_2);
 FUNC_6();
 for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++)
  FUNC_5(*VAR_6);
 FUNC_7();
 FUNC_3(&VAR_2);
}
