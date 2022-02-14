
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ count; int descrtab_phys; unsigned int hwptr; unsigned int swptr; int wait; scalar_t__ mapped; } ;
struct cs4297a_state {TYPE_1__ dma_dac; int lock; } ;
typedef int serdma_descr_t ;
struct TYPE_6__ {int state; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__* VAR_8 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct cs4297a_state *VAR_10, int VAR_11)
{
 FUNC_0(VAR_9, VAR_8);
 unsigned long VAR_12;
        unsigned VAR_13;
 unsigned VAR_14;
 int VAR_15;

 if (VAR_10->dma_dac.mapped)
  return 0;
        if (VAR_11)
                return -VAR_0;
 FUNC_3(&VAR_10->dma_dac.wait, &VAR_9);
        while ((VAR_15 = FUNC_2(FUNC_1(VAR_5))) ||
               (VAR_10->dma_dac.count > 0)) {
                if (!FUNC_7(VAR_8)) {
                        FUNC_6(VAR_6);

                        VAR_14 = ((VAR_15 * VAR_1) * VAR_2) / 1000000;
                        FUNC_5(VAR_14 + 1);
                } else {

                }
        }
        FUNC_8(&VAR_10->lock, VAR_12);

        VAR_13 = (int)(((FUNC_2(FUNC_1(VAR_4)) & VAR_3) -
                       VAR_10->dma_dac.descrtab_phys) / sizeof(serdma_descr_t));
        VAR_10->dma_dac.hwptr = VAR_10->dma_dac.swptr = VAR_13;
        FUNC_9(&VAR_10->lock, VAR_12);
 FUNC_4(&VAR_10->dma_dac.wait, &VAR_9);
 VAR_8->state = VAR_7;
 return 0;
}
