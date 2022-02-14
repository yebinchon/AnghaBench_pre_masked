
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dlm_protocol_version {int dummy; } ;
struct dlm_ctxt {scalar_t__ dlm_state; struct dlm_protocol_version fs_locking_proto; int dlm_locking_proto; int list; int num_joins; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dlm_ctxt* FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct dlm_ctxt*) ;
 struct dlm_ctxt* FUNC_2 (char const*) ;
 int VAR_7 ;
 struct dlm_ctxt* FUNC_3 (char const*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct dlm_ctxt*) ;
 int FUNC_5 (struct dlm_ctxt*) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct dlm_protocol_version*,struct dlm_protocol_version*) ;
 int FUNC_7 (struct dlm_ctxt*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (char const*) ;
 int FUNC_17 (int ,int ) ;

struct dlm_ctxt * FUNC_18(const char *VAR_12,
          u32 VAR_13,
          struct dlm_protocol_version *VAR_14)
{
 int VAR_15;
 struct dlm_ctxt *VAR_16 = ((void*)0);
 struct dlm_ctxt *VAR_17 = ((void*)0);

 if (FUNC_16(VAR_12) > VAR_6) {
  VAR_15 = -VAR_1;
  FUNC_10(VAR_5, "domain name length too long\n");
  goto leave;
 }

 if (!FUNC_12()) {
  FUNC_10(VAR_5, "the local node has not been configured, or is "
       "not heartbeating\n");
  VAR_15 = -VAR_3;
  goto leave;
 }

 FUNC_10(0, "register called for domain \"%s\"\n", VAR_12);

retry:
 VAR_16 = ((void*)0);
 if (FUNC_13(VAR_7)) {
  VAR_15 = -VAR_4;
  FUNC_11(VAR_15);
  goto leave;
 }

 FUNC_14(&VAR_9);

 VAR_16 = FUNC_2(VAR_12);
 if (VAR_16) {
  if (VAR_16->dlm_state != VAR_0) {
   FUNC_15(&VAR_9);

   FUNC_10(0, "This ctxt is not joined yet!\n");
   FUNC_17(VAR_8,
       FUNC_8(
        VAR_12));
   goto retry;
  }

  if (FUNC_6(&VAR_16->fs_locking_proto, VAR_14)) {
   FUNC_10(VAR_5,
        "Requested locking protocol version is not "
        "compatible with already registered domain "
        "\"%s\"\n", VAR_12);
   VAR_15 = -VAR_3;
   goto leave;
  }

  FUNC_1(VAR_16);
  VAR_16->num_joins++;

  FUNC_15(&VAR_9);

  VAR_15 = 0;
  goto leave;
 }


 if (!VAR_17) {
  FUNC_15(&VAR_9);

  VAR_17 = FUNC_3(VAR_12, VAR_13);
  if (VAR_17)
   goto retry;

  VAR_15 = -VAR_2;
  FUNC_11(VAR_15);
  goto leave;
 }


 VAR_16 = VAR_17;
 VAR_17 = ((void*)0);


 FUNC_9(&VAR_16->list, &VAR_10);
 FUNC_15(&VAR_9);





 VAR_16->dlm_locking_proto = VAR_11;
 VAR_16->fs_locking_proto = *VAR_14;

 VAR_15 = FUNC_5(VAR_16);
 if (VAR_15) {
  FUNC_11(VAR_15);
  FUNC_7(VAR_16);
  goto leave;
 }


 *VAR_14 = VAR_16->fs_locking_proto;

 VAR_15 = 0;
leave:
 if (VAR_17)
  FUNC_4(VAR_17);

 if (VAR_15 < 0)
  VAR_16 = FUNC_0(VAR_15);

 return VAR_16;
}
