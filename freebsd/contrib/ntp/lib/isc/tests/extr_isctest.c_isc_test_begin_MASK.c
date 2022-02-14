
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_4__ {scalar_t__ maximum_size; int versions; int * name; int * stream; } ;
struct TYPE_5__ {TYPE_1__ file; } ;
typedef TYPE_2__ isc_logdestination_t ;
typedef int isc_logconfig_t ;
typedef scalar_t__ isc_boolean_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int *,int **) ;
 int FUNC_5 (int *,char*,int ,int ,TYPE_2__*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int *,int *) ;
 int FUNC_9 (int ,int ,int *) ;
 int VAR_9 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

isc_result_t
FUNC_12(FILE *VAR_13, isc_boolean_t VAR_14) {
 isc_result_t VAR_15;

 VAR_9 |= VAR_3;
 FUNC_0(FUNC_9(0, 0, &VAR_11));
 FUNC_0(FUNC_2(VAR_11, &VAR_7));

 FUNC_0(FUNC_3(VAR_11, VAR_7, 255));
 VAR_8 = VAR_5;

 if (VAR_13 != ((void*)0)) {
  isc_logdestination_t VAR_16;
  isc_logconfig_t *VAR_17 = ((void*)0);

  FUNC_0(FUNC_4(VAR_11, &VAR_10, &VAR_17));
  FUNC_6(VAR_10, VAR_6);
  FUNC_7(VAR_10);

  VAR_16.file.stream = VAR_13;
  VAR_16.file.name = ((void*)0);
  VAR_16.file.versions = VAR_1;
  VAR_16.file.maximum_size = 0;
  FUNC_0(FUNC_5(VAR_17, "stderr",
         VAR_2,
         VAR_0,
         &VAR_16, 0));
  FUNC_0(FUNC_8(VAR_17, "stderr", ((void*)0), ((void*)0)));
 }




 VAR_12 = 1;


 if (VAR_14)
  FUNC_0(FUNC_1());

 return (VAR_4);

  cleanup:
 FUNC_11();
 return (VAR_15);
}
