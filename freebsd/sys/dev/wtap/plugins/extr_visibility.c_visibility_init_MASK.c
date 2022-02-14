
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wtap_plugin {TYPE_1__* wp_sdev; } ;
struct visibility_plugin {int pl_mtx; } ;
struct TYPE_2__ {struct visibility_plugin* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int ,int ,int ,int,char const*) ;
 int FUNC_1 (int *,char*,int *,int) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;

void
FUNC_3(struct wtap_plugin *VAR_5)
{
 struct visibility_plugin *VAR_6;

 VAR_6 = (struct visibility_plugin *) VAR_5;
 VAR_5->wp_sdev = FUNC_0(&VAR_4,0,VAR_3,VAR_0,0600,
     (const char *)"visctl");
 VAR_5->wp_sdev->si_drv1 = VAR_6;
 FUNC_1(&VAR_6->pl_mtx, "visibility_plugin mtx",
     ((void*)0), VAR_1 | VAR_2);
 FUNC_2("Using visibility wtap plugin...\n");
}
