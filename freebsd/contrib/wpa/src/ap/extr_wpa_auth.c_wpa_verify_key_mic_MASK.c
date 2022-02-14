
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_ptk {int kck_len; int kck; } ;
struct wpa_eapol_key {int key_info; } ;
struct ieee802_1x_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,int ,size_t) ;
 scalar_t__ FUNC_4 (int ,int ,int,int,int *,size_t,int *) ;
 size_t FUNC_5 (int,size_t) ;

__attribute__((used)) static int FUNC_6(int VAR_2, size_t VAR_3, struct wpa_ptk *VAR_4,
         u8 *VAR_5, size_t VAR_6)
{
 struct ieee802_1x_hdr *VAR_7;
 struct wpa_eapol_key *VAR_8;
 u16 VAR_9;
 int VAR_10 = 0;
 u8 VAR_11[VAR_0], *VAR_12;
 size_t VAR_13 = FUNC_5(VAR_2, VAR_3);

 if (VAR_6 < sizeof(*VAR_7) + sizeof(*VAR_8))
  return -1;

 VAR_7 = (struct ieee802_1x_hdr *) VAR_5;
 VAR_8 = (struct wpa_eapol_key *) (VAR_7 + 1);
 VAR_12 = (u8 *) (VAR_8 + 1);
 VAR_9 = FUNC_0(VAR_8->key_info);
 FUNC_2(VAR_11, VAR_12, VAR_13);
 FUNC_3(VAR_12, 0, VAR_13);
 if (FUNC_4(VAR_4->kck, VAR_4->kck_len, VAR_2,
         VAR_9 & VAR_1,
         VAR_5, VAR_6, VAR_12) ||
     FUNC_1(VAR_11, VAR_12, VAR_13) != 0)
  VAR_10 = -1;
 FUNC_2(VAR_12, VAR_11, VAR_13);
 return VAR_10;
}
