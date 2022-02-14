
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf_tag; struct awg_bufmap* buf_map; int queued; } ;
struct awg_softc {TYPE_1__ tx; } ;
struct awg_bufmap {int * mbuf; int map; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct awg_softc *VAR_1, int VAR_2)
{
 struct awg_bufmap *VAR_3;

 --VAR_1->tx.queued;

 VAR_3 = &VAR_1->tx.buf_map[VAR_2];
 if (VAR_3->mbuf != ((void*)0)) {
  FUNC_0(VAR_1->tx.buf_tag, VAR_3->map,
      VAR_0);
  FUNC_1(VAR_1->tx.buf_tag, VAR_3->map);
  FUNC_2(VAR_3->mbuf);
  VAR_3->mbuf = ((void*)0);
 }
}
