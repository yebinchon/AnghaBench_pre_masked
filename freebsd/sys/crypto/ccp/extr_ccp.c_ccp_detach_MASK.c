
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int detaching; int hw_features; int lock; int cid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ccp_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ccp_softc* FUNC_3 (int ) ;
 struct ccp_softc* VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct ccp_softc *VAR_4;

 VAR_4 = FUNC_3(VAR_3);

 FUNC_5(&VAR_4->lock);
 VAR_4->detaching = 1;
 FUNC_6(&VAR_4->lock);

 FUNC_2(VAR_4->cid);
 if (VAR_1 == VAR_4 && (VAR_4->hw_features & VAR_0) != 0)
  FUNC_7(&VAR_2);

 FUNC_1(VAR_3);
 FUNC_0(VAR_4);

 if (VAR_1 == VAR_4)
  VAR_1 = ((void*)0);

 FUNC_4(&VAR_4->lock);
 return (0);
}
