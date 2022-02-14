
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef void* u_char ;
struct TYPE_2__ {int data; } ;
struct req_pkt {void* auth_seq; void* mbz_itemsize; void* err_nitems; TYPE_1__ u; void* request; void* implementation; int rm_vn_mode; } ;
typedef int l_fp ;
typedef int keyid_t ;


 void* FUNC_0 (int,int ) ;
 void* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct req_pkt) ;
 size_t FUNC_7 (scalar_t__,void*,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int ,void**) ;
 int VAR_2 ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (char*) ;
 char* FUNC_14 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_15 (int ,char const*,size_t) ;
 size_t VAR_7 ;
 int FUNC_16 (struct req_pkt*,size_t) ;
 int FUNC_17 (size_t) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_18(
 int VAR_9,
 int VAR_10,
 int VAR_11,
 size_t VAR_12,
 size_t VAR_13,
 const char *VAR_14
 )
{
 struct req_pkt VAR_15;
 size_t VAR_16;
 size_t VAR_17;
 u_long VAR_18;
 l_fp VAR_19;
 l_fp * VAR_20;
 size_t VAR_21;
 char * VAR_22;

 FUNC_6(VAR_15);
 VAR_15.rm_vn_mode = FUNC_5(0, 0, 0);
 VAR_15.implementation = (u_char)VAR_9;
 VAR_15.request = (u_char)VAR_10;

 VAR_16 = VAR_12 * VAR_13;
 if (VAR_16 && VAR_14 != ((void*)0)) {
  FUNC_15(VAR_15.u.data, VAR_14, VAR_16);
  VAR_15.err_nitems = FUNC_1(0, VAR_12);
  VAR_15.mbz_itemsize = FUNC_4(VAR_13);
 } else {
  VAR_15.err_nitems = FUNC_1(0, 0);
  VAR_15.mbz_itemsize = FUNC_4(VAR_13);
 }

 if (!VAR_11 || (VAR_6 && VAR_4 == 0)) {
  VAR_15.auth_seq = FUNC_0(0, 0);
  return FUNC_16(&VAR_15, VAR_7);
 }

 if (VAR_4 == 0) {
  VAR_18 = FUNC_13("Keyid: ");
  if (!VAR_18) {
   FUNC_11(VAR_8, "Invalid key identifier\n");
   return 1;
  }
  VAR_4 = VAR_18;
 }
 if (!FUNC_8(VAR_4)) {
  VAR_22 = FUNC_14(VAR_5);
  if ('\0' == VAR_22[0]) {
   FUNC_11(VAR_8, "Invalid password\n");
   return 1;
  }
  FUNC_10(VAR_4, VAR_5,
      (u_char *)VAR_22);
  FUNC_9(VAR_4, 1);
 }
 VAR_15.auth_seq = FUNC_0(1, 0);
 if (VAR_3 > 16) {
  if (VAR_1 != VAR_7)
   return 1;
  VAR_17 = VAR_0 + VAR_16 + sizeof(*VAR_20);

  VAR_17 = (VAR_17 + 3) & ~3;
 } else
  VAR_17 = VAR_7;
 VAR_20 = (void *)((char *)&VAR_15 + VAR_17);
 VAR_20--;
 FUNC_12(&VAR_19);
 FUNC_3(&VAR_19, &VAR_2);
 FUNC_2(&VAR_19, VAR_20);
 VAR_21 = FUNC_7(
  VAR_4, (void *)&VAR_15, FUNC_17(VAR_17));
 if (!VAR_21) {
  FUNC_11(VAR_8, "Key not found\n");
  return 1;
 } else if (VAR_21 != (size_t)(VAR_3 + sizeof(keyid_t))) {
  FUNC_11(VAR_8,
   "%zu octet MAC, %zu expected with %d octet digest\n",
   VAR_21, (VAR_3 + sizeof(keyid_t)),
   VAR_3);
  return 1;
 }
 return FUNC_16(&VAR_15, VAR_17 + VAR_21);
}
