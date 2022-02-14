
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {void* oidp; } ;
struct TYPE_7__ {int bsddev; TYPE_2__ kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int *,int ,int ,char*,int,int *,char*) ;
 struct sysctl_oid* FUNC_3 (int *,int ,char*,int,int *,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int * VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_11(void *VAR_20)
{
 struct sysctl_oid *VAR_21;
 int VAR_22;


 VAR_10 = (VAR_6 & VAR_0);

 FUNC_9(&VAR_13, "lkpi-vma-lock");

 VAR_21 = FUNC_3(((void*)0),
     VAR_4, "sys", VAR_2|VAR_1, ((void*)0), "sys");
 FUNC_6(&VAR_9, &VAR_7);
 FUNC_7(&VAR_9, "class");
 VAR_9.oidp = FUNC_2(((void*)0), FUNC_4(VAR_21),
     VAR_4, "class", VAR_2|VAR_1, ((void*)0), "class");
 FUNC_6(&VAR_12.kobj, &VAR_11);
 FUNC_7(&VAR_12.kobj, "device");
 VAR_12.kobj.oidp = FUNC_2(((void*)0),
     FUNC_4(VAR_21), VAR_4, "device", VAR_2, ((void*)0),
     "device");
 VAR_12.bsddev = VAR_17;
 VAR_8.name = "misc";
 FUNC_5(&VAR_8);
 FUNC_0(&VAR_15);
 FUNC_0(&VAR_14);
 FUNC_10(&VAR_16);
 FUNC_8(&VAR_19, "IO Map lock", ((void*)0), VAR_3);
 for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++)
  FUNC_1(&VAR_18[VAR_22]);
}
