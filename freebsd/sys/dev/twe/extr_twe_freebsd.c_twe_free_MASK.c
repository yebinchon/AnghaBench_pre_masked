
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_io_lock; int twe_config_lock; struct cdev* twe_dev_t; int * twe_io; int twe_dev; scalar_t__ twe_parent_dmat; int * twe_irq; scalar_t__ twe_intr; scalar_t__ twe_buffer_dmat; scalar_t__ twe_immediate_dmat; int twe_immediate_map; int * twe_immediate; int twe_cmdmap; int * twe_cmd; scalar_t__ twe_cmd_dmat; } ;
struct twe_request {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct cdev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct twe_request* FUNC_9 (struct twe_softc*) ;
 int FUNC_10 (struct twe_request*) ;

__attribute__((used)) static void
FUNC_11(struct twe_softc *VAR_3)
{
    struct twe_request *VAR_4;

    FUNC_5(4);


    while ((VAR_4 = FUNC_9(VAR_3)) != ((void*)0))
 FUNC_10(VAR_4);

    if (VAR_3->twe_cmd != ((void*)0)) {
 FUNC_1(VAR_3->twe_cmd_dmat, VAR_3->twe_cmdmap);
 FUNC_2(VAR_3->twe_cmd_dmat, VAR_3->twe_cmd, VAR_3->twe_cmdmap);
    }

    if (VAR_3->twe_immediate != ((void*)0)) {
 FUNC_1(VAR_3->twe_immediate_dmat, VAR_3->twe_immediate_map);
 FUNC_2(VAR_3->twe_immediate_dmat, VAR_3->twe_immediate,
   VAR_3->twe_immediate_map);
    }

    if (VAR_3->twe_immediate_dmat)
 FUNC_0(VAR_3->twe_immediate_dmat);


    if (VAR_3->twe_buffer_dmat)
 FUNC_0(VAR_3->twe_buffer_dmat);


    if (VAR_3->twe_intr)
 FUNC_4(VAR_3->twe_dev, VAR_3->twe_irq, VAR_3->twe_intr);
    if (VAR_3->twe_irq != ((void*)0))
 FUNC_3(VAR_3->twe_dev, VAR_1, 0, VAR_3->twe_irq);


    if (VAR_3->twe_parent_dmat)
 FUNC_0(VAR_3->twe_parent_dmat);


    if (VAR_3->twe_io != ((void*)0))
 FUNC_3(VAR_3->twe_dev, VAR_0, VAR_2, VAR_3->twe_io);


    if (VAR_3->twe_dev_t != (struct cdev *)((void*)0))
 FUNC_6(VAR_3->twe_dev_t);

    FUNC_8(&VAR_3->twe_config_lock);
    FUNC_7(&VAR_3->twe_io_lock);
}
