
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wpabuf {int dummy; } ;
struct wpa_bss {int dummy; } ;
struct rrm_measurement_beacon_report {int dummy; } ;
struct beacon_rep_data {scalar_t__ report_detail; int token; scalar_t__ last_indication; int eids; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int*,struct rrm_measurement_beacon_report*,int) ;
 int FUNC_3 (int ,scalar_t__,struct wpa_bss*,int*,int,int**,size_t*,int) ;
 int FUNC_4 (struct wpabuf**,int ,int ,int ,int*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct beacon_rep_data *VAR_8,
        struct wpa_bss *VAR_9,
        struct wpabuf **VAR_10,
        struct rrm_measurement_beacon_report *VAR_11,
        u8 **VAR_12, size_t *VAR_13, u8 VAR_14)
{
 int VAR_15;
 u8 *VAR_16, *VAR_17;
 u32 VAR_18 = VAR_5 +
  (VAR_8->last_indication ?
   VAR_1 : 0);




 VAR_16 = FUNC_1(sizeof(*VAR_11) + 14 + *VAR_13 + VAR_18);
 if (!VAR_16)
  return -1;

 FUNC_2(VAR_16, VAR_11, sizeof(*VAR_11));

 VAR_15 = FUNC_3(VAR_8->eids, VAR_8->report_detail,
          VAR_9, VAR_16 + sizeof(*VAR_11),
          14 + *VAR_13, VAR_12, VAR_13,
          VAR_14 == 0);
 if (VAR_15 < 0)
  goto out;

 VAR_17 = VAR_16 + VAR_15 + sizeof(*VAR_11);
 VAR_17[0] = VAR_6;
 VAR_17[1] = 2;





 VAR_17[2] = 1;



 VAR_17[3] = VAR_14;
 if (VAR_8->report_detail != VAR_0 && *VAR_13)
  VAR_17[3] |= VAR_4;
 else
  VAR_17[3] &= ~VAR_4;

 VAR_17 += VAR_5;

 if (VAR_8->last_indication) {
  VAR_17[0] = VAR_7;
  VAR_17[1] = 1;


  VAR_17[2] = 0;
 }

 VAR_15 = FUNC_4(VAR_10, VAR_8->token,
       VAR_2,
       VAR_3, VAR_16,
       VAR_15 + sizeof(*VAR_11) + VAR_18);
out:
 FUNC_0(VAR_16);
 return VAR_15;
}
