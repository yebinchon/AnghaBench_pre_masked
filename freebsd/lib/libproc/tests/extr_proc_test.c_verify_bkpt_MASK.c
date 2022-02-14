
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_long ;
struct proc_handle {int dummy; } ;
struct TYPE_8__ {int pr_mapname; } ;
typedef TYPE_1__ prmap_t ;
struct TYPE_9__ {scalar_t__ st_value; } ;
typedef TYPE_2__ GElf_Sym ;


 int FUNC_0 (int ,scalar_t__,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ,char*,...) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_1__* FUNC_9 (struct proc_handle*,int ) ;
 int FUNC_10 (struct proc_handle*,int ,char*,size_t,TYPE_2__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct proc_handle*,int ,int *) ;
 int FUNC_13 (struct proc_handle*) ;
 int FUNC_14 (char const*,char*) ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_17(struct proc_handle *VAR_3, GElf_Sym *VAR_4, const char *VAR_5,
    const char *VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;
 GElf_Sym VAR_10;
 prmap_t *VAR_11;
 size_t VAR_12;
 u_long VAR_13;
 int VAR_14, VAR_15;

 VAR_15 = FUNC_13(VAR_3);
 FUNC_3(VAR_15, VAR_0, "process has state %d", VAR_15);


 VAR_14 = FUNC_12(VAR_3, VAR_1, &VAR_13);
 FUNC_3(VAR_14, 0, "failed to obtain PC for '%s'",
     VAR_2);
 FUNC_11(&VAR_13);





 FUNC_0(VAR_13, VAR_4->st_value,
     "program counter 0x%lx doesn't match expected value 0x%jx",
     VAR_13, (uintmax_t)VAR_4->st_value);






 VAR_12 = FUNC_16(VAR_5) + 1;
 VAR_7 = FUNC_7(VAR_12);
 FUNC_1(VAR_7 != ((void*)0));

 VAR_14 = FUNC_10(VAR_3, VAR_13, VAR_7, VAR_12, &VAR_10);
 FUNC_3(VAR_14, 0, "failed to look up symbol at 0x%lx", VAR_13);
 FUNC_2(FUNC_8(VAR_4, &VAR_10, sizeof(*VAR_4)), 0);
 FUNC_2(FUNC_14(VAR_5, VAR_7), 0);
 FUNC_6(VAR_7);

 VAR_11 = FUNC_9(VAR_3, VAR_13);
 FUNC_4(VAR_11 != ((void*)0), "failed to look up map for address 0x%lx",
     VAR_13);
 VAR_8 = FUNC_15(VAR_11->pr_mapname);
 VAR_9 = FUNC_5(VAR_8);
 FUNC_3(FUNC_14(VAR_6, VAR_9), 0,
     "expected map name '%s' doesn't match '%s'", VAR_6, VAR_9);
 FUNC_6(VAR_8);
}
