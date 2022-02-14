
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ nisodma; } ;
struct fwohci_softc {TYPE_1__ fc; } ;
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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fwohci_softc*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int
FUNC_4(struct fwohci_softc *VAR_19, device_t VAR_20)
{
 u_int VAR_21;

 FUNC_3(&VAR_19->fc, 0);


 FUNC_2(VAR_19, VAR_1, VAR_5);
 FUNC_2(VAR_19, VAR_2, VAR_5);
 FUNC_2(VAR_19, VAR_3, VAR_5);
 FUNC_2(VAR_19, VAR_4, VAR_5);

 for (VAR_21 = 0; VAR_21 < VAR_19->fc.nisodma; VAR_21++) {
  FUNC_2(VAR_19, FUNC_0(VAR_21), VAR_5);
  FUNC_2(VAR_19, FUNC_1(VAR_21), VAR_5);
 }
 return 0;
}
