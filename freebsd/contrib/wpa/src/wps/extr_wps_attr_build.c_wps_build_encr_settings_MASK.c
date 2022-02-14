
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int keywrapkey; } ;
struct wpabuf {int dummy; } ;


 size_t const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int *,size_t const) ;
 int FUNC_1 (int *,size_t,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t const) ;
 int FUNC_3 (int ,char*) ;
 size_t const FUNC_4 (struct wpabuf*) ;
 int * FUNC_5 (struct wpabuf*,size_t const) ;
 int FUNC_6 (struct wpabuf*,size_t const) ;
 int FUNC_7 (struct wpabuf*,struct wpabuf*) ;

int FUNC_8(struct wps_data *VAR_2, struct wpabuf *VAR_3,
       struct wpabuf *VAR_4)
{
 size_t VAR_5;
 const size_t VAR_6 = 16;
 u8 *VAR_7, *VAR_8;

 FUNC_3(VAR_1, "WPS:  * Encrypted Settings");


 VAR_5 = VAR_6 - FUNC_4(VAR_4) % VAR_6;
 FUNC_1(FUNC_5(VAR_4, VAR_5), VAR_5, VAR_5);

 FUNC_6(VAR_3, VAR_0);
 FUNC_6(VAR_3, VAR_6 + FUNC_4(VAR_4));

 VAR_7 = FUNC_5(VAR_3, VAR_6);
 if (FUNC_2(VAR_7, VAR_6) < 0)
  return -1;

 VAR_8 = FUNC_5(VAR_3, 0);
 FUNC_7(VAR_3, VAR_4);
 if (FUNC_0(VAR_2->keywrapkey, VAR_7, VAR_8, FUNC_4(VAR_4)))
  return -1;

 return 0;
}
