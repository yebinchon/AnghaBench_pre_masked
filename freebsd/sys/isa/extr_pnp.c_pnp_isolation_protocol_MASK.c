
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int vendor_id; } ;
typedef TYPE_1__ pnp_id ;
typedef int device_t ;


 int FUNC_0 (int) ;
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
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int,int *,int) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_6 (int **,int*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_12)
{
 int VAR_13;
 pnp_id VAR_14;
 int VAR_15 = 0, VAR_16;
 u_char *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 int VAR_19;





 FUNC_7();




 FUNC_8(VAR_1, VAR_2);




 FUNC_8(VAR_8, 0);




 FUNC_8(VAR_7, VAR_11);

 for (VAR_13 = 1; VAR_13 < VAR_4; VAR_13++) {



  FUNC_2(VAR_9, VAR_5);
  FUNC_0(1000);

  if (FUNC_5(&VAR_14)) {
   FUNC_8(VAR_6, VAR_13);
   if (VAR_10)
    FUNC_9("Reading PnP configuration for %s.\n",
        FUNC_4(VAR_14.vendor_id));
   VAR_19 = FUNC_6(&VAR_17, &VAR_18, &VAR_16);
   if (VAR_19)
    break;
   FUNC_3(VAR_12, &VAR_14, VAR_13, VAR_17, VAR_16);
   VAR_15++;
  } else
   break;






  FUNC_8(VAR_8, 0);
 }






 FUNC_8(VAR_1, VAR_3);




 if (VAR_17)
  FUNC_1(VAR_17, VAR_0);

 return (VAR_15);
}
