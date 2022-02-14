
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_fast_pac {int pac_opaque_len; int pac_info_len; int pac_type; struct eap_fast_pac* next; int pac_info; int pac_opaque; int pac_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct eap_sm*,char const*,char*,size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,char*,unsigned long,char const*) ;

int FUNC_7(struct eap_sm *VAR_4, struct eap_fast_pac *VAR_5,
     const char *VAR_6)
{
 size_t VAR_7, VAR_8 = 0;
 struct eap_fast_pac *VAR_9;
 u8 *VAR_10, *VAR_11;

 VAR_7 = 6;
 VAR_9 = VAR_5;
 while (VAR_9) {
  if (VAR_9->pac_opaque_len > 65535 ||
      VAR_9->pac_info_len > 65535)
   return -1;
  VAR_7 += 2 + VAR_2 + 2 + VAR_9->pac_opaque_len +
   2 + VAR_9->pac_info_len;
  VAR_9 = VAR_9->next;
 }

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10 == ((void*)0))
  return -1;

 VAR_11 = VAR_10;
 FUNC_1(VAR_11, VAR_1);
 VAR_11 += 4;
 FUNC_0(VAR_11, VAR_0);
 VAR_11 += 2;

 VAR_9 = VAR_5;
 while (VAR_9) {
  FUNC_0(VAR_11, VAR_9->pac_type);
  VAR_11 += 2;
  FUNC_5(VAR_11, VAR_9->pac_key, VAR_2);
  VAR_11 += VAR_2;
  FUNC_0(VAR_11, VAR_9->pac_opaque_len);
  VAR_11 += 2;
  FUNC_5(VAR_11, VAR_9->pac_opaque, VAR_9->pac_opaque_len);
  VAR_11 += VAR_9->pac_opaque_len;
  FUNC_0(VAR_11, VAR_9->pac_info_len);
  VAR_11 += 2;
  FUNC_5(VAR_11, VAR_9->pac_info, VAR_9->pac_info_len);
  VAR_11 += VAR_9->pac_info_len;

  VAR_9 = VAR_9->next;
  VAR_8++;
 }

 if (FUNC_2(VAR_4, VAR_6, (char *) VAR_10, VAR_7)) {
  FUNC_3(VAR_10);
  return -1;
 }

 FUNC_6(VAR_3, "EAP-FAST: Wrote %lu PAC entries into '%s' "
     "(bin)", (unsigned long) VAR_8, VAR_6);

 return 0;
}
