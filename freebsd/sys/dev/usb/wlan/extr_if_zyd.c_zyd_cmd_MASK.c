
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct zyd_softc {int sc_rqh; int sc_dev; int sc_mtx; int * sc_xfer; } ;
struct zyd_rq {int ilen; int olen; int flags; void* odata; void const* idata; struct zyd_cmd* cmd; } ;
struct zyd_cmd {int data; int code; } ;


 int FUNC_0 (struct zyd_softc*,int ,char*,struct zyd_rq*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct zyd_rq*,struct zyd_rq) ;
 int FUNC_2 (int *,struct zyd_rq*,int ,struct zyd_rq) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,void const*,int) ;
 int FUNC_6 (struct zyd_rq*,int *,int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(struct zyd_softc *VAR_6, uint16_t VAR_7, const void *VAR_8, int VAR_9,
    void *VAR_10, int VAR_11, int VAR_12)
{
 struct zyd_cmd VAR_13;
 struct zyd_rq VAR_14;
 int VAR_15;

 if (VAR_9 > (int)sizeof(VAR_13.data))
  return (VAR_0);

 VAR_13.code = FUNC_4(VAR_7);
 FUNC_5(VAR_13.data, VAR_8, VAR_9);
 FUNC_0(VAR_6, VAR_1, "sending cmd %p = %*D\n",
     &VAR_14, VAR_9, VAR_8, ":");

 VAR_14.cmd = &VAR_13;
 VAR_14.idata = VAR_8;
 VAR_14.odata = VAR_10;
 VAR_14.ilen = sizeof(uint16_t) + VAR_9;
 VAR_14.olen = VAR_11;
 VAR_14.flags = VAR_12;
 FUNC_1(&VAR_6->sc_rqh, &VAR_14, VAR_14);
 FUNC_7(VAR_6->sc_xfer[VAR_2]);
 FUNC_7(VAR_6->sc_xfer[VAR_3]);


 VAR_15 = FUNC_6(&VAR_14, &VAR_6->sc_mtx, 0 , "zydcmd", VAR_4);
 if (VAR_15)
  FUNC_3(VAR_6->sc_dev, "command timeout\n");
 FUNC_2(&VAR_6->sc_rqh, &VAR_14, VAR_5, VAR_14);
 FUNC_0(VAR_6, VAR_1, "finsihed cmd %p, error = %d \n",
     &VAR_14, VAR_15);

 return (VAR_15);
}
