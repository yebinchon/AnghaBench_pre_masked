
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {size_t last_gtk_len; int last_tk_alg; int last_tk_key_idx; size_t last_tk_len; int last_tk; int last_tk_addr; int last_gtk; scalar_t__ mic_errors_seen; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (struct wpa_supplicant*,int,int const*,int,int,int const*,size_t,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, enum wpa_alg VAR_4,
      const u8 *VAR_5, int VAR_6, int VAR_7,
      const u8 *VAR_8, size_t VAR_9,
      const u8 *VAR_10, size_t VAR_11)
{
 struct wpa_supplicant *VAR_12 = VAR_3;
 if (VAR_4 == VAR_2 && VAR_6 == 0 && VAR_11 == 32) {

  VAR_12->mic_errors_seen = 0;
 }
 return FUNC_2(VAR_12, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
          VAR_10, VAR_11);
}
