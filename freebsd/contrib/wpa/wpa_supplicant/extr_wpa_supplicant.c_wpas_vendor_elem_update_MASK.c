
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__* vendor_elem; TYPE_1__* global; struct wpa_supplicant* parent; } ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ p2p; int p2p_disabled; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(struct wpa_supplicant *VAR_2)
{
 unsigned int VAR_3;
 char VAR_4[30];

 FUNC_4(VAR_0, "Update vendor elements");

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->vendor_elem[VAR_3]) {
   int VAR_5;

   VAR_5 = FUNC_0(VAR_4, sizeof(VAR_4), "frame[%u]", VAR_3);
   if (!FUNC_1(sizeof(VAR_4), VAR_5)) {
    FUNC_3(VAR_0, VAR_4,
      VAR_2->vendor_elem[VAR_3]);
   }
  }
 }







}
