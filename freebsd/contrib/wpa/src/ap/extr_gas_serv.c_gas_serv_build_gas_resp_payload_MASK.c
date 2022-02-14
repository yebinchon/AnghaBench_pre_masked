
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u16 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int fils_realms; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 unsigned int const VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int const VAR_33 ;
 unsigned int const VAR_34 ;
 int FUNC_0 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_1 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_2 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_3 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_4 (struct hostapd_data*,struct wpabuf*,unsigned int const) ;
 int FUNC_5 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_6 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_7 (struct hostapd_data*,struct wpabuf*,int const*,size_t) ;
 int FUNC_8 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_9 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_10 (struct hostapd_data*,struct wpabuf*,int const*,size_t,unsigned int,unsigned int) ;
 int FUNC_11 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_12 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_13 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_14 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_15 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_16 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_17 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_18 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_19 (struct hostapd_data*,struct wpabuf*) ;
 int FUNC_20 (struct hostapd_data*,struct wpabuf*) ;
 scalar_t__ FUNC_21 (struct hostapd_data*,unsigned int const*,unsigned int) ;
 int FUNC_22 (int *) ;
 struct wpabuf* FUNC_23 (size_t) ;

__attribute__((used)) static struct wpabuf *
FUNC_24(struct hostapd_data *VAR_35,
    unsigned int VAR_36,
    const u8 *VAR_37, size_t VAR_38,
    const u8 *VAR_39, size_t VAR_40,
    const u16 *VAR_41,
    unsigned int VAR_42)
{
 struct wpabuf *VAR_43;
 size_t VAR_44;
 unsigned int VAR_45;

 VAR_44 = 1400;
 if (VAR_36 & (VAR_22 | VAR_21))
  VAR_44 += 1000;
 if (VAR_36 & VAR_18)
  VAR_44 += 65536;




 VAR_44 += FUNC_21(VAR_35, VAR_41, VAR_42);

 VAR_43 = FUNC_23(VAR_44);
 if (VAR_43 == ((void*)0))
  return ((void*)0);

 if (VAR_36 & VAR_11)
  FUNC_1(VAR_35, VAR_43);
 if (VAR_36 & VAR_31)
  FUNC_18(VAR_35, VAR_43);
 if (VAR_36 & VAR_15)
  FUNC_4(VAR_35, VAR_43, VAR_4);
 if (VAR_36 & VAR_23)
  FUNC_11(VAR_35, VAR_43);
 if (VAR_36 & VAR_29)
  FUNC_17(VAR_35, VAR_43);
 if (VAR_36 & VAR_19)
  FUNC_8(VAR_35, VAR_43);
 if (VAR_36 & (VAR_22 | VAR_21))
  FUNC_10(VAR_35, VAR_43, VAR_37, VAR_38,
       VAR_36 & VAR_22,
       VAR_36 & VAR_21);
 if (VAR_36 & VAR_7)
  FUNC_0(VAR_35, VAR_43);
 if (VAR_36 & VAR_9)
  FUNC_4(VAR_35, VAR_43, VAR_1);
 if (VAR_36 & VAR_8)
  FUNC_4(VAR_35, VAR_43, VAR_0);
 if (VAR_36 & VAR_10)
  FUNC_4(VAR_35, VAR_43, VAR_2);
 if (VAR_36 & VAR_13)
  FUNC_3(VAR_35, VAR_43);
 if (VAR_36 & VAR_14)
  FUNC_4(VAR_35, VAR_43, VAR_3);
 if (VAR_36 & VAR_30)
  FUNC_4(VAR_35, VAR_43, VAR_33);
 if (VAR_36 & VAR_16)
  FUNC_4(VAR_35, VAR_43, VAR_5);

 for (VAR_45 = 0; VAR_45 < VAR_42; VAR_45++) {






  if (VAR_41[VAR_45] == VAR_34) {
   FUNC_19(VAR_35, VAR_43);
   continue;
  }
  FUNC_4(VAR_35, VAR_43, VAR_41[VAR_45]);
 }
 return VAR_43;
}
