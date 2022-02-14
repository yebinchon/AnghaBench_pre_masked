
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spigen_softc {int * sc_cdev; int sc_adev; int sc_mtx; void* sc_dev; } ;
struct make_dev_args {int mda_mode; int mda_unit; void* mda_si_drv1; int mda_gid; int mda_uid; int * mda_cr; int * mda_devsw; int mda_flags; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 struct spigen_softc* FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int *,int *,char*,int const) ;
 int FUNC_6 (struct make_dev_args*) ;
 int FUNC_7 (struct make_dev_args*,int **,char*,int,int) ;
 int FUNC_8 (int *,int ,int *,int ) ;
 int FUNC_9 (void*,int*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 struct spigen_softc *VAR_7;
 const int VAR_8 = FUNC_4(VAR_6);
 int VAR_9, VAR_10;
 struct make_dev_args VAR_11;

 FUNC_9(VAR_6, &VAR_9);
 VAR_9 &= ~VAR_3;

 VAR_7 = FUNC_3(VAR_6);
 VAR_7->sc_dev = VAR_6;

 FUNC_8(&VAR_7->sc_mtx, FUNC_1(VAR_6), ((void*)0), VAR_2);

 FUNC_6(&VAR_11);
 VAR_11.mda_flags = VAR_1;
 VAR_11.mda_devsw = &VAR_5;
 VAR_11.mda_cr = ((void*)0);
 VAR_11.mda_uid = VAR_4;
 VAR_11.mda_gid = VAR_0;
 VAR_11.mda_mode = 0660;
 VAR_11.mda_unit = VAR_8;
 VAR_11.mda_si_drv1 = VAR_6;

 VAR_10 = FUNC_7(&VAR_11, &(VAR_7->sc_cdev), "spigen%d.%d",
     FUNC_4(FUNC_2(VAR_6)), VAR_9);
 if (VAR_10) {
  return VAR_10;
 }
 return (0);
}
