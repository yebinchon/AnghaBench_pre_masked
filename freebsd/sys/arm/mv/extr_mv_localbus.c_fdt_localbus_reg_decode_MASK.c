
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct localbus_softc {TYPE_1__* sc_banks; int sc_dev; } ;
struct localbus_devinfo {int di_bank; int di_res; } ;
typedef int phandle_t ;
typedef int pcell_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ va; int mapped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,scalar_t__,...) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (void*,int) ;
 int FUNC_7 (int*,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (int *,int ,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(phandle_t VAR_3, struct localbus_softc *VAR_4,
    struct localbus_devinfo *VAR_5)
{
 u_long VAR_6, VAR_7, VAR_8;
 pcell_t *VAR_9, *VAR_10;
 pcell_t VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;

 if (FUNC_5(FUNC_1(VAR_3), &VAR_11, &VAR_12) != 0)
  return (VAR_0);

 VAR_13 = sizeof(pcell_t) * (VAR_11 + VAR_12);
 VAR_14 = FUNC_0(VAR_3, "reg", VAR_13, (void **)&VAR_9);
 FUNC_3("addr_cells = %d, size_cells = %d\n", VAR_11, VAR_12);
 FUNC_3("tuples = %d, tuple size = %d\n", VAR_14, VAR_13);
 if (VAR_14 <= 0)

  return (0);

 VAR_10 = VAR_9;
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {

  VAR_17 = FUNC_6((void *)VAR_10, 1);

  if (VAR_17 >= VAR_1) {
   FUNC_4(VAR_4->sc_dev, "bank number [%d] out of "
       "range\n", VAR_17);
   continue;
  }





  if (!(VAR_4->sc_banks[VAR_17].mapped)) {
   FUNC_4(VAR_4->sc_dev, "device [%d]: missing memory "
       "mapping\n", VAR_17);
   continue;
  }

  VAR_5->di_bank = VAR_17;
  VAR_10 += 1;


  VAR_16 = FUNC_7(VAR_10, VAR_11 - 1, VAR_12, &VAR_6,
      &VAR_8);
  if (VAR_16 != 0) {
   FUNC_9(&VAR_5->di_res);
   goto out;
  }


  if (VAR_4->sc_banks[VAR_17].size < VAR_8) {
   FUNC_4(VAR_4->sc_dev, "device [%d]: not enough "
       "memory reserved\n", VAR_17);
   continue;
  }

  VAR_10 += VAR_11 - 1 + VAR_12;


  VAR_6 = VAR_4->sc_banks[VAR_17].va + VAR_6;
  VAR_7 = VAR_6 + VAR_8 - 1;

  FUNC_3("reg addr bank = %d, start = %lx, end = %lx, "
      "count = %lx\n", VAR_17, VAR_6, VAR_7, VAR_8);


  FUNC_8(&VAR_5->di_res, VAR_2, VAR_5->di_bank,
      VAR_6, VAR_7, VAR_8);
 }
 VAR_16 = 0;
out:
 FUNC_2(VAR_9);
 return (VAR_16);
}
