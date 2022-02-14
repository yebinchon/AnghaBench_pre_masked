
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_ndis_data {int * adapter; scalar_t__* ifname; int ndisuio; } ;
typedef int ifname ;
typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*,size_t,int *,int ,int *,int *) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,scalar_t__*) ;
 size_t FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int ,char*,int const*,size_t) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct wpa_driver_ndis_data *VAR_5)
{
 char VAR_6[128];
 FUNC_4(VAR_6, sizeof(VAR_6), "\\Device\\NPF_%s", VAR_5->ifname);
 VAR_5->adapter = FUNC_3(VAR_6);
 if (VAR_5->adapter == ((void*)0)) {
  FUNC_7(VAR_3, "NDIS: PacketOpenAdapter failed for "
      "'%s'", VAR_6);
  return -1;
 }
 return 0;

}
