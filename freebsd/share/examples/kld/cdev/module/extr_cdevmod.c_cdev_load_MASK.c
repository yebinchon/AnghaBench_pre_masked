
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct make_dev_args {int mda_mode; int mda_gid; int mda_uid; int * mda_devsw; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct make_dev_args*) ;
 int FUNC_2 (struct make_dev_args*,int *,char*) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(module_t VAR_5, int VAR_6, void *VAR_7)
{
    int VAR_8 = 0;
    struct make_dev_args VAR_9;

    switch (VAR_6) {
    case 129:




 FUNC_3("\nSample Loaded kld character device driver\n");
 FUNC_3("Copyright (c) 1998\n");
 FUNC_3("Rajesh Vaidheeswarran\n");
 FUNC_3("All rights reserved\n");

 FUNC_1(&VAR_9);
 VAR_9.mda_devsw = &VAR_3;
 VAR_9.mda_uid = VAR_2;
 VAR_9.mda_gid = VAR_1;
 VAR_9.mda_mode = 0600;
 VAR_8 = FUNC_2(&VAR_9, &VAR_4, "cdev");
 break;

    case 128:
 FUNC_3("Unloaded kld character device driver\n");
 FUNC_0(VAR_4);
 break;

    default:
 VAR_8 = VAR_0;
 break;
    }

    return(VAR_8);
}
