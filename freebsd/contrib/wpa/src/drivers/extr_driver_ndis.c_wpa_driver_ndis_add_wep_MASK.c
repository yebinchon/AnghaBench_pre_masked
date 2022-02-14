
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpa_driver_ndis_data {int dummy; } ;
struct TYPE_4__ {size_t Length; int KeyIndex; size_t KeyLength; int KeyMaterial; } ;
typedef TYPE_1__ NDIS_802_11_WEP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int const*,size_t) ;
 TYPE_1__* FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;

__attribute__((used)) static int FUNC_5(struct wpa_driver_ndis_data *VAR_2,
       int VAR_3, int VAR_4, int VAR_5,
       const u8 *VAR_6, size_t VAR_7)
{
 NDIS_802_11_WEP *VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_9 = 12 + VAR_7;
 VAR_8 = FUNC_3(VAR_9);
 if (VAR_8 == ((void*)0))
  return -1;
 VAR_8->Length = VAR_9;
 VAR_8->KeyIndex = VAR_4;
 if (VAR_5)
  VAR_8->KeyIndex |= 1 << 31;




 VAR_8->KeyLength = VAR_7;
 FUNC_2(VAR_8->KeyMaterial, VAR_6, VAR_7);

 FUNC_4(VAR_0, "NDIS: OID_802_11_ADD_WEP",
   (u8 *) VAR_8, VAR_9);
 VAR_10 = FUNC_0(VAR_2, VAR_1, (char *) VAR_8, VAR_9);

 FUNC_1(VAR_8);

 return VAR_10;
}
