
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ssid {int psk; scalar_t__ psk_set; scalar_t__ passphrase; scalar_t__ ext_psk; } ;
struct parse_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (size_t,int) ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (int const*,int) ;
 char* FUNC_6 (int ,int ) ;

__attribute__((used)) static char * FUNC_7(const struct parse_data *VAR_1,
       struct wpa_ssid *VAR_2)
{
 if (VAR_2->passphrase)
  return FUNC_5(
   (const u8 *) VAR_2->passphrase,
   FUNC_4(VAR_2->passphrase));

 if (VAR_2->psk_set)
  return FUNC_6(VAR_2->psk, VAR_0);

 return ((void*)0);
}
