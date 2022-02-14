
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int br_x509_minimal_context ;
typedef int br_sslio_context ;
struct TYPE_4__ {int eng; } ;
typedef TYPE_1__ br_ssl_client_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int*,int ,int*) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 int FUNC_8 (int *,char const*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (unsigned char*,int,int,int ) ;
 int FUNC_12 (char const*,char const*) ;
 int FUNC_13 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (char const*) ;

int
FUNC_15(int VAR_12, char *VAR_13[])
{
 const char *VAR_14, *VAR_15, *VAR_16;
 int VAR_17;
 br_ssl_client_context VAR_18;
 br_x509_minimal_context VAR_19;
 unsigned char VAR_20[VAR_0];
 br_sslio_context VAR_21;





 if (VAR_12 < 3 || VAR_12 > 4) {
  return VAR_2;
 }
 VAR_14 = VAR_13[1];
 VAR_15 = VAR_13[2];
 if (VAR_12 == 4) {
  VAR_16 = VAR_13[3];
 } else {
  VAR_16 = "/";
 }




 FUNC_13(VAR_4, VAR_5);




 VAR_17 = FUNC_12(VAR_14, VAR_15);
 if (VAR_17 < 0) {
  return VAR_2;
 }







 FUNC_0(&VAR_18, &VAR_19, VAR_6, VAR_7);
 FUNC_4(&VAR_18.eng, VAR_20, sizeof VAR_20, 1);






 FUNC_1(&VAR_18, VAR_14, 0);





 FUNC_6(&VAR_21, &VAR_18.eng, VAR_8, &VAR_17, VAR_9, &VAR_17);
 FUNC_8(&VAR_21, "GET ", 4);
 FUNC_8(&VAR_21, VAR_16, FUNC_14(VAR_16));
 FUNC_8(&VAR_21, " HTTP/1.0\r\nHost: ", 17);
 FUNC_8(&VAR_21, VAR_14, FUNC_14(VAR_14));
 FUNC_8(&VAR_21, "\r\n\r\n", 4);





 FUNC_5(&VAR_21);







 for (;;) {
  int VAR_22;
  unsigned char VAR_23[512];

  VAR_22 = FUNC_7(&VAR_21, VAR_23, sizeof VAR_23);
  if (VAR_22 < 0) {
   break;
  }
  FUNC_11(VAR_23, 1, VAR_22, VAR_11);
 }




 FUNC_9(VAR_17);
 if (FUNC_2(&VAR_18.eng) == VAR_1) {
  int VAR_24;

  VAR_24 = FUNC_3(&VAR_18.eng);
  if (VAR_24 == 0) {
   FUNC_10(VAR_10, "closed.\n");
   return VAR_3;
  } else {
   FUNC_10(VAR_10, "SSL error %d\n", VAR_24);
   return VAR_2;
  }
 } else {
  FUNC_10(VAR_10,
   "socket closed without proper SSL termination\n");
  return VAR_2;
 }
}
