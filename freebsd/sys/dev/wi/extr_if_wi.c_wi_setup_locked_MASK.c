
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct wi_softc {int sc_flags; int sc_ntxbuf; scalar_t__ sc_txnext; scalar_t__ sc_txcur; TYPE_1__* sc_txd; int sc_dev; scalar_t__ sc_buflen; } ;
struct wi_frame {int dummy; } ;
struct TYPE_2__ {scalar_t__ d_len; int d_fid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wi_softc*,scalar_t__,int *) ;
 int FUNC_2 (struct wi_softc*) ;
 int FUNC_3 (struct wi_softc*,int ,int const*,int ) ;
 int FUNC_4 (struct wi_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct wi_softc *VAR_9, int VAR_10, int VAR_11,
 const uint8_t VAR_12[VAR_0])
{
 int VAR_13;

 FUNC_2(VAR_9);

 FUNC_4(VAR_9, VAR_7, VAR_10);
 FUNC_4(VAR_9, VAR_4, VAR_11);
 FUNC_4(VAR_9, VAR_6, 2304);

 FUNC_4(VAR_9, VAR_3, 2);
 if (VAR_9->sc_flags & VAR_2)
  FUNC_4(VAR_9, VAR_8, 3);

 FUNC_3(VAR_9, VAR_5, VAR_12, VAR_0);


 VAR_9->sc_buflen = VAR_1 + sizeof(struct wi_frame);
 for (VAR_13 = 0; VAR_13 < VAR_9->sc_ntxbuf; VAR_13++) {
  int VAR_14 = FUNC_1(VAR_9, VAR_9->sc_buflen,
      &VAR_9->sc_txd[VAR_13].d_fid);
  if (VAR_14) {
   FUNC_0(VAR_9->sc_dev,
       "tx buffer allocation failed (error %u)\n",
       VAR_14);
   return VAR_14;
  }
  VAR_9->sc_txd[VAR_13].d_len = 0;
 }
 VAR_9->sc_txcur = VAR_9->sc_txnext = 0;

 return 0;
}
