
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {int block; int port; int duplexity; int speed; int base_addr; int * mii_bus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int,int ,int,int,int ,int ) ;
 int FUNC_3 (char*,int,int,char*,char*) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_10)
{
 struct nlm_xlpge_softc *VAR_11;
 struct mii_data *VAR_12;
 char *VAR_13, *VAR_14;

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11->mii_bus == ((void*)0))
  return;

 VAR_12 = FUNC_1(VAR_11->mii_bus);
 if (VAR_12->mii_media_status & VAR_2) {
  if (FUNC_0(VAR_12->mii_media_active) == VAR_1) {
   VAR_11->speed = VAR_7;
   VAR_13 = "10Mbps";
  } else if (FUNC_0(VAR_12->mii_media_active) == VAR_0) {
   VAR_11->speed = VAR_8;
   VAR_13 = "100Mbps";
  } else {
   VAR_11->speed = VAR_9;
   VAR_13 = "1Gbps";
  }

  if ((VAR_12->mii_media_active & VAR_4) == VAR_3) {
   VAR_11->duplexity = VAR_5;
   VAR_14 = "full";
  } else {
   VAR_11->duplexity = VAR_6;
   VAR_14 = "half";
  }

  FUNC_3("Port [%d, %d] setup with speed=%s duplex=%s\n",
      VAR_11->block, VAR_11->port, VAR_13, VAR_14);

  FUNC_2(VAR_11->base_addr, VAR_11->block, VAR_11->port, 0, 1, 1,
      VAR_11->speed, VAR_11->duplexity);
 }
}
