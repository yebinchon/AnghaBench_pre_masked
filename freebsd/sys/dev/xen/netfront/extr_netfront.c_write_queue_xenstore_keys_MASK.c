
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_transaction {int dummy; } ;
struct netfront_txq {int id; scalar_t__ xen_intr_handle; int ring_ref; } ;
struct netfront_rxq {int id; scalar_t__ xen_intr_handle; int ring_ref; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (size_t,int ,int) ;
 int FUNC_3 (char*,size_t,char*,char const*,...) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int,char*,char const*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (struct xs_transaction,char*,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3,
    struct netfront_rxq *VAR_4,
    struct netfront_txq *VAR_5,
    struct xs_transaction *VAR_6, bool VAR_7)
{
 int VAR_8;
 const char *VAR_9;
 const char *VAR_10 = FUNC_7(VAR_3);
 char *VAR_11;
 size_t VAR_12;

 FUNC_0(VAR_4->id == VAR_5->id, ("Mismatch between RX and TX queue ids"));

 FUNC_0(VAR_4->xen_intr_handle == VAR_5->xen_intr_handle,
     ("Split event channels are not supported"));

 if (VAR_7) {
  VAR_12 = FUNC_4(VAR_10) + 10;
  VAR_11 = FUNC_2(VAR_12, VAR_0, VAR_1|VAR_2);
  FUNC_3(VAR_11, VAR_12, "%s/queue-%u", VAR_10, VAR_4->id);
 } else {
  VAR_12 = FUNC_4(VAR_10) + 1;
  VAR_11 = FUNC_2(VAR_12, VAR_0, VAR_1|VAR_2);
  FUNC_3(VAR_11, VAR_12, "%s", VAR_10);
 }

 VAR_8 = FUNC_8(*VAR_6, VAR_11, "tx-ring-ref","%u", VAR_5->ring_ref);
 if (VAR_8 != 0) {
  VAR_9 = "writing tx ring-ref";
  goto error;
 }
 VAR_8 = FUNC_8(*VAR_6, VAR_11, "rx-ring-ref","%u", VAR_4->ring_ref);
 if (VAR_8 != 0) {
  VAR_9 = "writing rx ring-ref";
  goto error;
 }
 VAR_8 = FUNC_8(*VAR_6, VAR_11, "event-channel", "%u",
     FUNC_5(VAR_4->xen_intr_handle));
 if (VAR_8 != 0) {
  VAR_9 = "writing event-channel";
  goto error;
 }

 FUNC_1(VAR_11, VAR_0);

 return (0);

error:
 FUNC_1(VAR_11, VAR_0);
 FUNC_6(VAR_3, VAR_8, "%s", VAR_9);

 return (VAR_8);
}
