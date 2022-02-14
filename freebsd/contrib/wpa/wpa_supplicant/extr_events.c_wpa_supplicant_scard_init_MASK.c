
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int * scard; int eapol; int wpa; TYPE_2__* conf; } ;
struct TYPE_3__ {struct eap_method_type* eap_methods; int * pcsc; } ;
struct wpa_ssid {TYPE_1__ eap; } ;
struct eap_method_type {scalar_t__ vendor; scalar_t__ method; } ;
struct TYPE_4__ {int pcsc_reader; scalar_t__ external_sim; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct wpa_supplicant *VAR_7,
         struct wpa_ssid *VAR_8)
{
 return 0;
}
