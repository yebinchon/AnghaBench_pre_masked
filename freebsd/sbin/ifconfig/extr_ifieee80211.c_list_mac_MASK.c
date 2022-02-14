
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211req_maclist {scalar_t__ ml_macaddr; } ;
struct ieee80211req {int i_val; int i_len; int * i_data; int i_type; int i_name; } ;
struct ether_addr {int dummy; } ;
typedef int ireq ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct ether_addr const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int ,struct ieee80211req*) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (struct ieee80211req*,int ,int) ;
 int VAR_10 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_9(int VAR_12)
{
 struct ieee80211req VAR_13;
 struct ieee80211req_maclist *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 uint8_t *VAR_19;
 char VAR_20;

 (void) FUNC_5(&VAR_13, 0, sizeof(VAR_13));
 (void) FUNC_8(VAR_13.i_name, VAR_10, sizeof(VAR_13.i_name));
 VAR_13.i_type = VAR_1;
 VAR_13.i_val = VAR_3;
 if (FUNC_3(VAR_12, VAR_8, &VAR_13) < 0) {
  if (VAR_9 == VAR_0) {
   FUNC_6("No acl policy loaded\n");
   return;
  }
  FUNC_0(1, "unable to get mac policy");
 }
 VAR_17 = VAR_13.i_val;
 if (VAR_17 == VAR_6) {
  VAR_20 = '*';
 } else if (VAR_17 == VAR_4) {
  VAR_20 = '+';
 } else if (VAR_17 == VAR_5) {
  VAR_20 = '-';
 } else if (VAR_17 == VAR_7) {
  VAR_20 = 'r';
 } else {
  FUNC_6("policy: unknown (%u)\n", VAR_17);
  VAR_20 = '?';
 }
 if (VAR_11 || VAR_20 == '?')
  FUNC_7(VAR_17);

 VAR_13.i_val = VAR_2;
 VAR_13.i_len = 0;
 if (FUNC_3(VAR_12, VAR_8, &VAR_13) < 0)
  FUNC_0(1, "unable to get mac acl list size");
 if (VAR_13.i_len == 0) {
  if (!(VAR_11 || VAR_20 == '?'))
   FUNC_7(VAR_17);
  return;
 }
 VAR_18 = VAR_13.i_len;

 VAR_19 = FUNC_4(VAR_18);
 if (VAR_19 == ((void*)0))
  FUNC_0(1, "out of memory for acl list");

 VAR_13.i_data = VAR_19;
 if (FUNC_3(VAR_12, VAR_8, &VAR_13) < 0)
  FUNC_0(1, "unable to get mac acl list");
 VAR_16 = VAR_18 / sizeof(*VAR_14);
 VAR_14 = (struct ieee80211req_maclist *) VAR_19;
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
  FUNC_6("%c%s\n", VAR_20, FUNC_1(
   (const struct ether_addr *) VAR_14[VAR_15].ml_macaddr));
 FUNC_2(VAR_19);
}
