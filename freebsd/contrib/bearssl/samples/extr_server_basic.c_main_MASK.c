
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int br_sslio_context ;
struct TYPE_12__ {int eng; } ;
typedef TYPE_1__ br_ssl_server_context ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int ,int*,int ,int*) ;
 scalar_t__ FUNC_15 (int *,unsigned char*,int) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int *,char const*) ;
 int FUNC_20 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_21 (int ) ;

int
FUNC_22(int VAR_13, char *VAR_14[])
{
 const char *VAR_15;
 int VAR_16;

 if (VAR_13 != 2) {
  return VAR_5;
 }
 VAR_15 = VAR_14[1];




 FUNC_20(VAR_7, VAR_8);




 VAR_16 = FUNC_19(((void*)0), VAR_15);
 if (VAR_16 < 0) {
  return VAR_5;
 }




 for (;;) {
  int VAR_17;
  br_ssl_server_context VAR_18;
  unsigned char VAR_19[VAR_2];
  br_sslio_context VAR_20;
  int VAR_21, VAR_22;

  VAR_17 = FUNC_0(VAR_16);
  if (VAR_17 < 0) {
   return VAR_5;
  }
  FUNC_3(&VAR_18, VAR_3, VAR_4,
   VAR_1, &VAR_9);
  FUNC_2(&VAR_18.eng, VAR_19, sizeof VAR_19, 1);




  FUNC_12(&VAR_18);




  FUNC_14(&VAR_20, &VAR_18.eng, VAR_10, &VAR_17, VAR_11, &VAR_17);




  VAR_21 = 0;
  for (;;) {
   unsigned char VAR_23;

   if (FUNC_15(&VAR_20, &VAR_23, 1) < 0) {
    goto client_drop;
   }
   if (VAR_23 == 0x0D) {
    continue;
   }
   if (VAR_23 == 0x0A) {
    if (VAR_21) {
     break;
    }
    VAR_21 = 1;
   } else {
    VAR_21 = 0;
   }
  }




  FUNC_16(&VAR_20, VAR_6, FUNC_21(VAR_6));
  FUNC_13(&VAR_20);

 client_drop:
  VAR_22 = FUNC_1(&VAR_18.eng);
  if (VAR_22 == 0) {
   FUNC_18(VAR_12, "SSL closed (correctly).\n");
  } else {
   FUNC_18(VAR_12, "SSL error: %d\n", VAR_22);
  }
  FUNC_17(VAR_17);
 }
}
