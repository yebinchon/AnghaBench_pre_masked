
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aifflags; int aac_io_lock; int eh; int aac_dev; int aifthread; int aac_sim_tqh; int aac_container_tqh; int timeout_id; int aac_daemontime; } ;
struct aac_sim {int sim_dev; } ;
struct aac_container {int sim_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct aac_sim* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct aac_sim*,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct aac_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ) ;
 struct aac_softc* FUNC_7 (int ) ;
 int FUNC_8 (struct aac_sim*,int ) ;
 int FUNC_9 (struct aac_softc*,char*,char*) ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int ,int,char*,int) ;
 int FUNC_13 (int ,void*,int ) ;
 int FUNC_14 (int ) ;

int
FUNC_15(device_t VAR_11)
{
 struct aac_softc *VAR_12;
 struct aac_container *VAR_13;
 struct aac_sim *VAR_14;
 int VAR_15;

 VAR_12 = FUNC_7(VAR_11);
 FUNC_9(VAR_12, VAR_2, "");




 FUNC_13(VAR_6, (void *)VAR_12, VAR_12->timeout_id);


 while ((VAR_13 = FUNC_1(&VAR_12->aac_container_tqh)) != ((void*)0)) {
  FUNC_2(&VAR_12->aac_container_tqh, VAR_13, VAR_7);
  FUNC_8(VAR_13, VAR_3);
 }


 while ((VAR_14 = FUNC_1(&VAR_12->aac_sim_tqh)) != ((void*)0)) {
  FUNC_2(&VAR_12->aac_sim_tqh, VAR_14, VAR_10);
  VAR_15 = FUNC_6(VAR_11, VAR_14->sim_dev);
  if (VAR_15)
   return (VAR_15);
  FUNC_8(VAR_14, VAR_3);
 }

 if (VAR_12->aifflags & VAR_1) {
  VAR_12->aifflags |= VAR_0;
  FUNC_14(VAR_12->aifthread);
  FUNC_12(VAR_12->aac_dev, VAR_5 | VAR_4, "aac_dch", 30 * VAR_8);
 }

 if (VAR_12->aifflags & VAR_1)
  FUNC_11("Cannot shutdown AIF thread");

 if ((VAR_15 = FUNC_4(VAR_11)))
  return(VAR_15);

 FUNC_0(VAR_9, VAR_12->eh);

 FUNC_3(VAR_12);

 FUNC_10(&VAR_12->aac_io_lock);

 return(0);
}
