
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_config_blob {size_t len; int * data; } ;
struct eap_sm {int dummy; } ;
struct eap_fast_pac {int pac_opaque_len; int pac_info_len; struct eap_fast_pac* next; int * pac_info; int * pac_opaque; int pac_key; void* pac_type; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct eap_fast_pac*) ;
 int FUNC_3 (struct eap_fast_pac*) ;
 struct wpa_config_blob* FUNC_4 (struct eap_sm*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int) ;
 void* FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (char const*,size_t*) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;
 struct eap_fast_pac* FUNC_10 (int) ;
 int FUNC_11 (int ,char*,...) ;

int FUNC_12(struct eap_sm *VAR_5, struct eap_fast_pac **VAR_6,
     const char *VAR_7)
{
 const struct wpa_config_blob *VAR_8 = ((void*)0);
 u8 *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13 = 0;
 struct eap_fast_pac *VAR_14, *VAR_15;

 *VAR_6 = ((void*)0);

 if (VAR_7 == ((void*)0))
  return -1;

 if (FUNC_9(VAR_7, "blob://", 7) == 0) {
  VAR_8 = FUNC_4(VAR_5, VAR_7 + 7);
  if (VAR_8 == ((void*)0)) {
   FUNC_11(VAR_4, "EAP-FAST: No PAC blob '%s' - "
       "assume no PAC entries have been "
       "provisioned", VAR_7 + 7);
   return 0;
  }
  VAR_9 = VAR_8->data;
  VAR_12 = VAR_8->len;
 } else {
  VAR_9 = (u8 *) FUNC_8(VAR_7, &VAR_12);
  if (VAR_9 == ((void*)0)) {
   FUNC_11(VAR_4, "EAP-FAST: No PAC file '%s' - "
       "assume no PAC entries have been "
       "provisioned", VAR_7);
   return 0;
  }
 }

 if (VAR_12 == 0) {
  if (VAR_8 == ((void*)0))
   FUNC_5(VAR_9);
  return 0;
 }

 if (VAR_12 < 6 || FUNC_1(VAR_9) != VAR_1 ||
     FUNC_0(VAR_9 + 4) != VAR_0) {
  FUNC_11(VAR_4, "EAP-FAST: Invalid PAC file '%s' (bin)",
      VAR_7);
  if (VAR_8 == ((void*)0))
   FUNC_5(VAR_9);
  return -1;
 }

 VAR_14 = VAR_15 = ((void*)0);
 VAR_11 = VAR_9 + 6;
 VAR_10 = VAR_9 + VAR_12;
 while (VAR_11 < VAR_10) {
  u16 VAR_16;

  if (VAR_10 - VAR_11 < 2 + VAR_2 + 2 + 2) {
   VAR_14 = ((void*)0);
   goto parse_fail;
  }

  VAR_14 = FUNC_10(sizeof(*VAR_14));
  if (VAR_14 == ((void*)0))
   goto parse_fail;

  VAR_14->pac_type = FUNC_0(VAR_11);
  VAR_11 += 2;
  FUNC_6(VAR_14->pac_key, VAR_11, VAR_2);
  VAR_11 += VAR_2;
  VAR_16 = FUNC_0(VAR_11);
  VAR_11 += 2;
  if (VAR_16 > VAR_10 - VAR_11)
   goto parse_fail;
  VAR_14->pac_opaque_len = VAR_16;
  VAR_14->pac_opaque = FUNC_7(VAR_11, VAR_14->pac_opaque_len);
  if (VAR_14->pac_opaque == ((void*)0))
   goto parse_fail;
  VAR_11 += VAR_14->pac_opaque_len;
  if (2 > VAR_10 - VAR_11)
   goto parse_fail;
  VAR_16 = FUNC_0(VAR_11);
  VAR_11 += 2;
  if (VAR_16 > VAR_10 - VAR_11)
   goto parse_fail;
  VAR_14->pac_info_len = VAR_16;
  VAR_14->pac_info = FUNC_7(VAR_11, VAR_14->pac_info_len);
  if (VAR_14->pac_info == ((void*)0))
   goto parse_fail;
  VAR_11 += VAR_14->pac_info_len;
  FUNC_3(VAR_14);

  VAR_13++;
  if (VAR_15)
   VAR_15->next = VAR_14;
  else
   *VAR_6 = VAR_14;
  VAR_15 = VAR_14;
 }

 if (VAR_8 == ((void*)0))
  FUNC_5(VAR_9);

 FUNC_11(VAR_3, "EAP-FAST: Read %lu PAC entries from '%s' (bin)",
     (unsigned long) VAR_13, VAR_7);

 return 0;

parse_fail:
 FUNC_11(VAR_4, "EAP-FAST: Failed to parse PAC file '%s' (bin)",
     VAR_7);
 if (VAR_8 == ((void*)0))
  FUNC_5(VAR_9);
 if (VAR_14)
  FUNC_2(VAR_14);
 return -1;
}
