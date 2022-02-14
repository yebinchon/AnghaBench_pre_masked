
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int dummy; } ;
struct amr_softc {int amr_list_lock; int amr_hw_lock; struct cdev* amr_dev_t; int amr_cmd_clusters; int * amr_pass; int amr_dev; } ;
struct amr_command_cluster {int dummy; } ;


 struct amr_command_cluster* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct amr_command_cluster*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct amr_command_cluster*) ;
 int FUNC_3 (struct cdev*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

void
FUNC_7(struct amr_softc *VAR_1)
{
    struct amr_command_cluster *VAR_2;


    if (VAR_1->amr_pass != ((void*)0))
 FUNC_4(VAR_1->amr_dev, VAR_1->amr_pass);


    while ((VAR_2 = FUNC_0(&VAR_1->amr_cmd_clusters)) != ((void*)0)) {
 FUNC_1(&VAR_1->amr_cmd_clusters, VAR_2, VAR_0);
 FUNC_2(VAR_2);
    }


    if( VAR_1->amr_dev_t != (struct cdev *)((void*)0))
     FUNC_3(VAR_1->amr_dev_t);

    if (FUNC_6(&VAR_1->amr_hw_lock))
 FUNC_5(&VAR_1->amr_hw_lock);

    if (FUNC_6(&VAR_1->amr_list_lock))
 FUNC_5(&VAR_1->amr_list_lock);
}
