
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_avgen_softc {int avg_width; int * avg_res; scalar_t__ avg_rid; int avg_unit; int avg_dev; } ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int device_t ;
typedef int cell ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,void**,int) ;
 int FUNC_1 (int ,char*,void**) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct altera_avgen_softc*,char*,char*,char*,char*,int) ;
 int * FUNC_4 (int ,int ,scalar_t__*,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int *) ;
 struct altera_avgen_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 struct altera_avgen_softc *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;
 char *VAR_8;
 phandle_t VAR_9;
 pcell_t VAR_10;
 int VAR_11, VAR_12;

 VAR_4 = FUNC_6(VAR_3);
 VAR_4->avg_dev = VAR_3;
 VAR_4->avg_unit = FUNC_7(VAR_3);





 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_11 = -1;
 VAR_4->avg_width = 1;
 VAR_9 = FUNC_9(VAR_3);
 if (FUNC_0(VAR_9, "sri-cambridge,width", &VAR_10, sizeof(VAR_10)) > 0)
  VAR_4->avg_width = VAR_10;
 (void)FUNC_1(VAR_9, "sri-cambridge,fileio",
     (void **)&VAR_5);
 (void)FUNC_1(VAR_9, "sri-cambridge,geomio",
     (void **)&VAR_6);
 (void)FUNC_1(VAR_9, "sri-cambridge,mmapio",
     (void **)&VAR_7);
 (void)FUNC_1(VAR_9, "sri-cambridge,devname",
     (void **)&VAR_8);
 if (FUNC_0(VAR_9, "sri-cambridge,devunit", &VAR_10, sizeof(VAR_10)) > 0)
  VAR_11 = VAR_10;


 VAR_4->avg_rid = 0;
 VAR_4->avg_res = FUNC_4(VAR_3, VAR_2,
     &VAR_4->avg_rid, VAR_1);
 if (VAR_4->avg_res == ((void*)0)) {
  FUNC_8(VAR_3, "couldn't map memory\n");
  return (VAR_0);
 }
 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_11);
 if (VAR_12 != 0)
  FUNC_5(VAR_3, VAR_2, VAR_4->avg_rid,
      VAR_4->avg_res);
 if (VAR_5 != ((void*)0))
  FUNC_2(VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_6);
 if (VAR_7 != ((void*)0))
  FUNC_2(VAR_7);
 if (VAR_8 != ((void*)0))
  FUNC_2(VAR_8);
 return (VAR_12);
}
