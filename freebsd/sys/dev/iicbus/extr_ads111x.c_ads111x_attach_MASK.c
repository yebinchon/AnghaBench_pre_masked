
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ads111x_softc {int lock; int cfgword; int * chipinfo; int dev; int addr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ads111x_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (struct ads111x_softc*) ;
 int * FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ads111x_softc*,int ,int ) ;
 struct ads111x_softc* FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_9)
{
 struct ads111x_softc *VAR_10;
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_5(VAR_9);
 VAR_10->dev = VAR_9;
 VAR_10->addr = FUNC_9(VAR_9);
 VAR_10->cfgword = VAR_1;

 VAR_10->chipinfo = FUNC_3(VAR_10->dev);
 if (VAR_10->chipinfo == ((void*)0)) {
  FUNC_8(VAR_9,
      "cannot get chipinfo (but it worked during probe)");
  return (VAR_4);
 }


 if ((VAR_13 = FUNC_4(VAR_10, VAR_0, VAR_10->cfgword)) != 0) {
  FUNC_8(VAR_9, "cannot write chip config register\n");
  return (VAR_13);
 }


 VAR_11 = FUNC_6(VAR_9);
 VAR_12 = FUNC_7(VAR_9);
 FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_5,
     "config", VAR_3 | VAR_2, VAR_10, 0,
     VAR_6, "I", "configuration register word");
 FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_5,
     "lo_thresh", VAR_3 | VAR_2, VAR_10, 0,
     VAR_8, "I", "comparator low threshold");
 FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_5,
     "hi_thresh", VAR_3 | VAR_2, VAR_10, 0,
     VAR_7, "I", "comparator high threshold");


 FUNC_2(VAR_10);

 FUNC_10(&VAR_10->lock, "ads111x");

 return (0);
}
