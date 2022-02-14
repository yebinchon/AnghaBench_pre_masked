
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef struct wpabuf const wpabuf ;
struct hostapd_data {TYPE_1__* iface; } ;
struct TYPE_2__ {int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hostapd_data*,int ,int ,int const*,int ,int ) ;
 struct wpabuf const* FUNC_1 (int ) ;
 int FUNC_2 (struct wpabuf const*) ;
 int FUNC_3 (struct wpabuf const*) ;
 int FUNC_4 (struct wpabuf const*) ;
 int FUNC_5 (struct wpabuf const*,int ) ;
 int FUNC_6 (struct wpabuf const*,struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf const*,int) ;

int FUNC_8(struct hostapd_data *VAR_5,
       const u8 *VAR_6,
       const struct wpabuf *VAR_7)
{
 struct wpabuf *VAR_8;
 int VAR_9;




 VAR_8 = FUNC_1(4 + 6 + FUNC_4(VAR_7));
 if (VAR_8 == ((void*)0))
  return -1;

 FUNC_7(VAR_8, VAR_2);
 FUNC_7(VAR_8, VAR_4);
 FUNC_7(VAR_8, 1);
 FUNC_7(VAR_8, 1);


 FUNC_7(VAR_8, VAR_3);
 FUNC_7(VAR_8, 4 + FUNC_4(VAR_7));
 FUNC_5(VAR_8, VAR_1);
 FUNC_7(VAR_8, VAR_0);
 FUNC_6(VAR_8, VAR_7);

 VAR_9 = FUNC_0(VAR_5, VAR_5->iface->freq, 0, VAR_6,
          FUNC_3(VAR_8), FUNC_4(VAR_8));

 FUNC_2(VAR_8);

 return VAR_9;
}
