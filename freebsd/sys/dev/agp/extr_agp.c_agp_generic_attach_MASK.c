
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u_int ;
struct agp_softc {int as_aperture_rid; unsigned int as_maxmem; int as_nextid; TYPE_1__* as_devnode; int as_memory; int as_lock; int as_aperture; } ;
typedef int device_t ;
struct TYPE_2__ {int si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int** VAR_10 ;
 int FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (char*) ;
 struct agp_softc* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int ,int ,int ,int,char*) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;

int
FUNC_7(device_t VAR_12)
{
 struct agp_softc *VAR_13 = FUNC_3(VAR_12);
 int VAR_14;
 u_int VAR_15;






 if (VAR_13->as_aperture_rid != -1) {
  if (VAR_13->as_aperture_rid == 0)
   VAR_13->as_aperture_rid = VAR_0;

  VAR_13->as_aperture = FUNC_1(VAR_12, VAR_6,
      &VAR_13->as_aperture_rid, VAR_5);
  if (!VAR_13->as_aperture)
   return VAR_2;
 }





 VAR_15 = FUNC_6(VAR_11) >> 20;
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  if (VAR_15 <= VAR_10[VAR_14][0])
   break;
 }
 if (VAR_14 == VAR_1)
  VAR_14 = VAR_1 - 1;
 VAR_13->as_maxmem = VAR_10[VAR_14][1] << 20U;





 FUNC_5(&VAR_13->as_lock, "agp lock", ((void*)0), VAR_4);




 VAR_9 = FUNC_2("agp");
 FUNC_0(&VAR_13->as_memory);
 VAR_13->as_nextid = 1;

 VAR_13->as_devnode = FUNC_4(&VAR_8,
     0, VAR_7, VAR_3, 0600, "agpgart");
 VAR_13->as_devnode->si_drv1 = VAR_12;

 return 0;
}
