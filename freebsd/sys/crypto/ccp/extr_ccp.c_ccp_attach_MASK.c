
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {scalar_t__ cid; int hw_features; int lock; int dev; } ;
struct ccp_session {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ccp_softc*) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;
 struct ccp_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 struct ccp_softc* VAR_17 ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int VAR_18 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_19)
{
 struct ccp_softc *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_4(VAR_19);
 VAR_20->dev = VAR_19;

 VAR_20->cid = FUNC_2(VAR_19, sizeof(struct ccp_session),
     VAR_0);
 if (VAR_20->cid < 0) {
  FUNC_5(VAR_19, "could not get crypto driver id\n");
  return (VAR_12);
 }

 VAR_21 = FUNC_0(VAR_19);
 if (VAR_21 != 0)
  return (VAR_21);

 FUNC_6(&VAR_20->lock, "ccp", ((void*)0), VAR_13);

 FUNC_1(VAR_20);

 if (VAR_17 == ((void*)0)) {
  VAR_17 = VAR_20;
  if ((VAR_20->hw_features & VAR_16) != 0)
   FUNC_7(&VAR_18);
 }

 if ((VAR_20->hw_features & VAR_14) != 0) {
  FUNC_3(VAR_20->cid, VAR_4, 0, 0);
  FUNC_3(VAR_20->cid, VAR_5, 0, 0);
  FUNC_3(VAR_20->cid, VAR_6, 0, 0);
  FUNC_3(VAR_20->cid, VAR_1, 0, 0);
  FUNC_3(VAR_20->cid, VAR_2, 0, 0);
  FUNC_3(VAR_20->cid, VAR_3, 0, 0);
  FUNC_3(VAR_20->cid, VAR_7, 0, 0);
 }
 if ((VAR_20->hw_features & VAR_15) != 0) {
  FUNC_3(VAR_20->cid, VAR_8, 0, 0);
  FUNC_3(VAR_20->cid, VAR_9, 0, 0);
  FUNC_3(VAR_20->cid, VAR_10, 0, 0);
  FUNC_3(VAR_20->cid, VAR_11, 0, 0);
 }

 return (0);
}
