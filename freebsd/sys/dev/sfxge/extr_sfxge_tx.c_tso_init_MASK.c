
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {int * tsoh_buffer; struct sfxge_softc* sc; } ;
struct sfxge_softc {int txq_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (unsigned int,int ,int ) ;
 int FUNC_3 (struct sfxge_softc*,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sfxge_txq *VAR_3)
{
 struct sfxge_softc *VAR_4 = VAR_3->sc;
 unsigned int VAR_5 = FUNC_0(VAR_4->txq_entries);
 int VAR_6, VAR_7;


 VAR_3->tsoh_buffer = FUNC_2(VAR_5 * sizeof(VAR_3->tsoh_buffer[0]),
      VAR_0, VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_3(VAR_4, VAR_2, &VAR_3->tsoh_buffer[VAR_6]);
  if (VAR_7 != 0)
   goto fail;
 }

 return (0);

fail:
 while (VAR_6-- > 0)
  FUNC_4(&VAR_3->tsoh_buffer[VAR_6]);
 FUNC_1(VAR_3->tsoh_buffer, VAR_0);
 VAR_3->tsoh_buffer = ((void*)0);
 return (VAR_7);
}
