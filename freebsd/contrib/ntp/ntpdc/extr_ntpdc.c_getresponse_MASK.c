
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sock_timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {char* data; } ;
struct resp_pkt {int implementation; int request; TYPE_1__ u; int rm_vn_mode; int auth_seq; int mbz_itemsize; int err_nitems; } ;
typedef int ssize_t ;
typedef int rpkt ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (char*) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (int ,char*,char*) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char*,unsigned int) ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (scalar_t__,char*,int,int ) ;
 int FUNC_18 (scalar_t__,int *,int *,int *,struct sock_timeval*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_19 (int *) ;
 struct sock_timeval VAR_14 ;
 struct sock_timeval VAR_15 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,int) ;

__attribute__((used)) static int
FUNC_22(
 int VAR_16,
 int VAR_17,
 size_t *VAR_18,
 size_t *VAR_19,
 const char **VAR_20,
 size_t VAR_21
 )
{
 struct resp_pkt VAR_22;
 struct sock_timeval VAR_23;
 size_t VAR_24;
 size_t VAR_25;
 size_t VAR_26;
 size_t VAR_27;
 char *VAR_28;
 char *VAR_29;
 char VAR_30[VAR_3+1];
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 fd_set VAR_35;
 ssize_t VAR_36;
 int VAR_37;

 uint32_t VAR_38;
 uint32_t VAR_39;
 uint32_t VAR_40;
 *VAR_18 = 0;
 *VAR_19 = 0;
 VAR_31 = 1;
 VAR_33 = 0;
 *VAR_20 = VAR_28 = VAR_10;
 VAR_32 = 999;
 FUNC_12(VAR_30);
 FUNC_1(&VAR_35);
 VAR_38 = (uint32_t)FUNC_19(((void*)0));

    again:
 if (VAR_31)
  VAR_23 = VAR_14;
 else
  VAR_23 = VAR_15;
 VAR_39 = (uint32_t)VAR_23.tv_sec + (VAR_23.tv_usec != 0);

 FUNC_0(VAR_12, &VAR_35);
 VAR_36 = FUNC_18(VAR_12+1, &VAR_35, ((void*)0), ((void*)0), &VAR_23);
 if (VAR_36 == -1) {
  FUNC_20("select fails");
  return -1;
 }





 VAR_40 = (((uint32_t)FUNC_19(((void*)0))) - VAR_38) & 0x7FFFFFFFu;
 if ((VAR_36 > 0) && (VAR_40 > VAR_39)) {
  VAR_36 = FUNC_17(VAR_12, (char *)&VAR_22, sizeof(VAR_22), 0);
  VAR_36 -= VAR_36;
 }

 if (VAR_36 == 0) {



  if (VAR_31) {
   (void) FUNC_13(VAR_13,
           "%s: timed out, nothing received\n",
           VAR_8);
   return VAR_1;
  } else {
   (void) FUNC_13(VAR_13,
           "%s: timed out with incomplete data\n",
           VAR_8);
   if (VAR_9) {
    FUNC_16("Received sequence numbers");
    for (VAR_36 = 0; VAR_36 <= VAR_3; VAR_36++)
        if (VAR_30[VAR_36])
     FUNC_16(" %zd,", (size_t)VAR_36);
    if (VAR_32 != 999)
        FUNC_16(" last frame received\n");
    else
        FUNC_16(" last frame not received\n");
   }
   return VAR_0;
  }
 }

 VAR_36 = FUNC_17(VAR_12, (char *)&VAR_22, sizeof(VAR_22), 0);
 if (VAR_36 == -1) {
  FUNC_20("read");
  return -1;
 }





 if (VAR_36 < (ssize_t)VAR_7) {
  if (VAR_9)
   FUNC_16("Short (%zd byte) packet received\n", (size_t)VAR_36);
  goto again;
 }
 if (FUNC_9(VAR_22.rm_vn_mode) > VAR_6 ||
     FUNC_9(VAR_22.rm_vn_mode) < VAR_5) {
  if (VAR_9)
   FUNC_16("Packet received with version %d\n",
          FUNC_9(VAR_22.rm_vn_mode));
  goto again;
 }
 if (FUNC_6(VAR_22.rm_vn_mode) != VAR_4) {
  if (VAR_9)
   FUNC_16("Packet received with mode %d\n",
          FUNC_6(VAR_22.rm_vn_mode));
  goto again;
 }
 if (FUNC_3(VAR_22.auth_seq)) {
  if (VAR_9)
   FUNC_16("Encrypted packet received\n");
  goto again;
 }
 if (!FUNC_11(VAR_22.rm_vn_mode)) {
  if (VAR_9)
   FUNC_16("Received request packet, wanted response\n");
  goto again;
 }
 if (FUNC_5(VAR_22.mbz_itemsize) != 0) {
  if (VAR_9)
   FUNC_16("Received packet with nonzero MBZ field!\n");
  goto again;
 }




 if (VAR_22.implementation != VAR_16 || VAR_22.request != VAR_17) {
  if (VAR_9)
   FUNC_16(
       "Received implementation/request of %d/%d, wanted %d/%d",
       VAR_22.implementation, VAR_22.request,
       VAR_16, VAR_17);
  goto again;
 }




 if (FUNC_2(VAR_22.err_nitems) != VAR_2) {
  if (VAR_9 && FUNC_10(VAR_22.rm_vn_mode)) {
   FUNC_16("Error code %d received on not-final packet\n",
          FUNC_2(VAR_22.err_nitems));
  }
  return (int)FUNC_2(VAR_22.err_nitems);
 }




 VAR_24 = FUNC_7(VAR_22.err_nitems);
 VAR_26 = FUNC_4(VAR_22.mbz_itemsize);
 if (VAR_21 > VAR_26)
  VAR_37 = VAR_21 - VAR_26;
 else
  VAR_37 = 0;
 VAR_27 = VAR_24 * VAR_26;
 if ((size_t)VAR_27 > (VAR_36-VAR_7)) {
  if (VAR_9)
      FUNC_16(
       "Received items %zu, size %zu (total %zu), data in packet is %zu\n",
       VAR_24, VAR_26, VAR_27, VAR_36-VAR_7);
  goto again;
 }





 if (!VAR_31 && VAR_26 != *VAR_19) {
  if (VAR_9)
      FUNC_16("Received itemsize %zu, previous %zu\n",
      VAR_26, *VAR_19);
  goto again;
 }



 VAR_34 = FUNC_8(VAR_22.auth_seq);
 if (VAR_30[VAR_34]) {
  if (VAR_9)
      FUNC_16("Received duplicate sequence number %d\n", VAR_34);
  goto again;
 }
 VAR_30[VAR_34] = 1;




 if (!FUNC_10(VAR_22.rm_vn_mode)) {
  if (VAR_32 != 999) {
   FUNC_16("Received second end sequence packet\n");
   goto again;
  }
  VAR_32 = VAR_34;
 }





 VAR_38 = (uint32_t)FUNC_19(((void*)0));
 if ((VAR_28 + VAR_27 + (VAR_37 * VAR_24)) > (VAR_10 + VAR_11)) {
  size_t VAR_41 = VAR_28 - VAR_10;
  FUNC_14();
  *VAR_20 = VAR_10;
  VAR_28 = VAR_10 + VAR_41;
 }





 VAR_29 = VAR_22.u.data;
 for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
  FUNC_15(VAR_28, VAR_29, (unsigned)VAR_26);
  VAR_29 += VAR_26;
  FUNC_21(VAR_28 + VAR_26, VAR_37);
  VAR_28 += VAR_26 + VAR_37;
 }

 if (VAR_31) {
  VAR_31 = 0;
  *VAR_19 = VAR_26 + VAR_37;
 }
 *VAR_18 += VAR_24;





 ++VAR_33;
 if (VAR_33 <= VAR_32)
  goto again;
 return VAR_2;
}
