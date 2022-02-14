
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sfxge_softc {scalar_t__ buffer_table_next; int enp; } ;
struct TYPE_2__ {scalar_t__ enc_buftbl_limit; } ;


 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (int ) ;

void
FUNC_2(struct sfxge_softc *VAR_0, size_t VAR_1, uint32_t *VAR_2)
{
 FUNC_0(VAR_0->buffer_table_next + VAR_1 <=
  FUNC_1(VAR_0->enp)->enc_buftbl_limit,
  ("buffer table full"));

 *VAR_2 = VAR_0->buffer_table_next;
 VAR_0->buffer_table_next += VAR_1;
}
