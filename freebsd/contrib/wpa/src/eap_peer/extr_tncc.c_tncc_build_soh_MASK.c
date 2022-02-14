
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct wpabuf {int dummy; } ;
typedef int correlation_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*,int) ;
 struct wpabuf* FUNC_4 (int) ;
 char* FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,int) ;
 int FUNC_7 (struct wpabuf*,int) ;
 int FUNC_8 (struct wpabuf*,char*,int) ;
 int FUNC_9 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_10(int VAR_9)
{
 struct wpabuf *VAR_10;
 u8 *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 u8 VAR_17[24];

 char *VAR_18 = "wpa_supplicant@w1.fi";

 if (FUNC_1(VAR_17, sizeof(VAR_17)))
  return ((void*)0);
 FUNC_3(VAR_2, "TNC: SoH Correlation ID",
      VAR_17, sizeof(VAR_17));

 VAR_10 = FUNC_4(200);
 if (VAR_10 == ((void*)0))
  return ((void*)0);


 FUNC_6(VAR_10, VAR_0);
 VAR_11 = FUNC_5(VAR_10, 2);
 FUNC_7(VAR_10, VAR_1);
 FUNC_6(VAR_10, 0x01);
 VAR_12 = FUNC_5(VAR_10, 2);


 FUNC_6(VAR_10, VAR_0);
 VAR_13 = FUNC_5(VAR_10, 2);
 FUNC_7(VAR_10, VAR_1);
 FUNC_6(VAR_10, VAR_9);
 VAR_14 = FUNC_5(VAR_10, 2);

 if (VAR_9 == 2) {


  FUNC_6(VAR_10, VAR_0);
  FUNC_6(VAR_10, 4 + 24 + 1 + 1);
  FUNC_7(VAR_10, VAR_1);

  FUNC_8(VAR_10, VAR_17, sizeof(VAR_17));
  FUNC_9(VAR_10, 0x01);
  FUNC_9(VAR_10, 0x00);
 }



 FUNC_6(VAR_10, 0x0002);
 FUNC_6(VAR_10, 4);
 FUNC_7(VAR_10, 79616);

 FUNC_6(VAR_10, VAR_0);
 VAR_15 = FUNC_5(VAR_10, 2);
 FUNC_7(VAR_10, VAR_1);


 FUNC_9(VAR_10, VAR_7);






 FUNC_9(VAR_10, 0x11);



 FUNC_9(VAR_10, VAR_5);
 FUNC_7(VAR_10, 0);
 FUNC_7(VAR_10, 0);
 FUNC_7(VAR_10, 0);
 FUNC_6(VAR_10, 0);
 FUNC_6(VAR_10, 0);
 FUNC_6(VAR_10, 0);


 FUNC_9(VAR_10, VAR_4);
 FUNC_6(VAR_10, FUNC_2(VAR_18) + 1);
 FUNC_8(VAR_10, VAR_18, FUNC_2(VAR_18) + 1);


 FUNC_9(VAR_10, VAR_3);
 FUNC_8(VAR_10, VAR_17, sizeof(VAR_17));


 FUNC_9(VAR_10, VAR_8);
 FUNC_6(VAR_10, 1);
 FUNC_7(VAR_10, 0xffffffff);
 FUNC_7(VAR_10, 0xffffffff);
 FUNC_6(VAR_10, 1);
 FUNC_9(VAR_10, 0);


 FUNC_9(VAR_10, VAR_6);
 FUNC_7(VAR_10, 0);

 FUNC_9(VAR_10, 1);


 VAR_16 = FUNC_5(VAR_10, 0);
 FUNC_0(VAR_15, VAR_16 - VAR_15 - 2);




 VAR_16 = FUNC_5(VAR_10, 0);
 FUNC_0(VAR_11, VAR_16 - VAR_11 - 2);
 FUNC_0(VAR_12, VAR_16 - VAR_12 - 2);
 FUNC_0(VAR_13, VAR_16 - VAR_13 - 2);
 FUNC_0(VAR_14, VAR_16 - VAR_14 - 2);

 return VAR_10;
}
