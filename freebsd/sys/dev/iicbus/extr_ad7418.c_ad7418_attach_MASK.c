
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ad7418_softc {int sc_lock; scalar_t__ sc_lastupdate; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ad7418_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int) ;
 struct ad7418_softc* FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9)
{
 struct ad7418_softc *VAR_10 = FUNC_4(VAR_9);
 struct sysctl_ctx_list *VAR_11 = FUNC_5(VAR_9);
 struct sysctl_oid *VAR_12 = FUNC_6(VAR_9);
 int VAR_13;

 VAR_10->sc_dev = VAR_9;
 VAR_10->sc_lastupdate = VAR_8 - VAR_7;

 FUNC_7(&VAR_10->sc_lock, "ad7418");

 FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_4,
  "temp", VAR_3 | VAR_2, VAR_10, 0,
  VAR_5, "I", "operating temperature");
 FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_4,
  "volt", VAR_3 | VAR_2, VAR_10, 0,
  VAR_6, "I", "input voltage");


 VAR_13 = FUNC_2(VAR_9, VAR_0);
 if (VAR_13 >= 0 && (VAR_13 & VAR_1))
  FUNC_3(VAR_9, VAR_0, VAR_13 &~ VAR_1);

 return (0);
}
