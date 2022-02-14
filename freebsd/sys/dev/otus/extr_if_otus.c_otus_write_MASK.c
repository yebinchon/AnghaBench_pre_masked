
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct otus_softc {size_t write_idx; TYPE_1__* write_buf; } ;
struct TYPE_2__ {void* val; void* reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct otus_softc*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct otus_softc*) ;

void
FUNC_3(struct otus_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{

 FUNC_0(VAR_1);

 VAR_1->write_buf[VAR_1->write_idx].reg = FUNC_1(VAR_2);
 VAR_1->write_buf[VAR_1->write_idx].val = FUNC_1(VAR_3);

 if (++VAR_1->write_idx > (VAR_0-1))
  (void)FUNC_2(VAR_1);
}
