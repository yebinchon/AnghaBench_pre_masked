
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_txq {int * tsoh_buffer; TYPE_1__* sc; } ;
struct TYPE_2__ {int txq_entries; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sfxge_txq *VAR_1)
{
 int VAR_2;

 if (VAR_1->tsoh_buffer != ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->sc->txq_entries); VAR_2++)
   FUNC_2(&VAR_1->tsoh_buffer[VAR_2]);
  FUNC_1(VAR_1->tsoh_buffer, VAR_0);
 }
}
