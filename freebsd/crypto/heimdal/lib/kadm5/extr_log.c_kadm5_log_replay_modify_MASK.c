
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int uint32_t ;
typedef int log_ent ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_18__ {int data; } ;
typedef TYPE_2__ krb5_data ;
struct TYPE_19__ {int context; TYPE_5__* db; } ;
typedef TYPE_3__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int int32_t ;
struct TYPE_17__ {size_t len; int * val; } ;
struct TYPE_16__ {int * extensions; TYPE_1__ keys; int * max_renew; int kvno; int * modified_by; int * max_life; int flags; int * pw_end; int * valid_end; int principal; } ;
struct TYPE_20__ {TYPE_14__ entry; } ;
typedef TYPE_4__ hdb_entry_ex ;
typedef int ent ;
struct TYPE_21__ {scalar_t__ (* hdb_store ) (int ,TYPE_5__*,int ,TYPE_4__*) ;scalar_t__ (* hdb_fetch_kvno ) (int ,TYPE_5__*,int ,int,int ,TYPE_4__*) ;} ;
typedef int HDB_extensions ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 () ;
 int * FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*,TYPE_14__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,int*) ;
 int FUNC_14 (int ,scalar_t__,char*) ;
 int FUNC_15 (int *,int ,int) ;
 void* FUNC_16 (int) ;
 int FUNC_17 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_18 (int ,TYPE_5__*,int ,int,int ,TYPE_4__*) ;
 scalar_t__ FUNC_19 (int ,TYPE_5__*,int ,TYPE_4__*) ;

__attribute__((used)) static kadm5_ret_t
FUNC_20 (kadm5_server_context *VAR_23,
    uint32_t VAR_24,
    uint32_t VAR_25,
    krb5_storage *VAR_26)
{
    krb5_error_code VAR_27;
    int32_t VAR_28;
    krb5_data VAR_29;
    hdb_entry_ex VAR_30, VAR_31;

    FUNC_17(&VAR_31, 0, sizeof(VAR_31));

    FUNC_13 (VAR_26, &VAR_28);
    VAR_25 -= 4;
    VAR_27 = FUNC_11 (&VAR_29, VAR_25);
    if (VAR_27) {
 FUNC_14(VAR_23->context, VAR_27, "out of memory");
 return VAR_27;
    }
    FUNC_15 (VAR_26, VAR_29.data, VAR_25);
    VAR_27 = FUNC_10 (VAR_23->context, &VAR_29, &VAR_31.entry);
    FUNC_12(&VAR_29);
    if (VAR_27)
 return VAR_27;

    FUNC_17(&VAR_30, 0, sizeof(VAR_30));
    VAR_27 = VAR_23->db->hdb_fetch_kvno(VAR_23->context, VAR_23->db,
          VAR_31.entry.principal,
          VAR_2|VAR_3|VAR_1, 0, &VAR_30);
    if (VAR_27)
 goto out;
    if (VAR_28 & VAR_20) {
 if (VAR_31.entry.valid_end == ((void*)0)) {
     VAR_30.entry.valid_end = ((void*)0);
 } else {
     if (VAR_30.entry.valid_end == ((void*)0)) {
  VAR_30.entry.valid_end = FUNC_16(sizeof(*VAR_30.entry.valid_end));
  if (VAR_30.entry.valid_end == ((void*)0)) {
      VAR_27 = VAR_0;
      FUNC_14(VAR_23->context, VAR_27, "out of memory");
      goto out;
  }
     }
     *VAR_30.entry.valid_end = *VAR_31.entry.valid_end;
 }
    }
    if (VAR_28 & VAR_21) {
 if (VAR_31.entry.pw_end == ((void*)0)) {
     VAR_30.entry.pw_end = ((void*)0);
 } else {
     if (VAR_30.entry.pw_end == ((void*)0)) {
  VAR_30.entry.pw_end = FUNC_16(sizeof(*VAR_30.entry.pw_end));
  if (VAR_30.entry.pw_end == ((void*)0)) {
      VAR_27 = VAR_0;
      FUNC_14(VAR_23->context, VAR_27, "out of memory");
      goto out;
  }
     }
     *VAR_30.entry.pw_end = *VAR_31.entry.pw_end;
 }
    }
    if (VAR_28 & VAR_11) {
 FUNC_0 ();
    }
    if (VAR_28 & VAR_5) {
 VAR_30.entry.flags = VAR_31.entry.flags;
    }
    if (VAR_28 & VAR_13) {
 if (VAR_31.entry.max_life == ((void*)0)) {
     VAR_30.entry.max_life = ((void*)0);
 } else {
     if (VAR_30.entry.max_life == ((void*)0)) {
  VAR_30.entry.max_life = FUNC_16 (sizeof(*VAR_30.entry.max_life));
  if (VAR_30.entry.max_life == ((void*)0)) {
      VAR_27 = VAR_0;
      FUNC_14(VAR_23->context, VAR_27, "out of memory");
      goto out;
  }
     }
     *VAR_30.entry.max_life = *VAR_31.entry.max_life;
 }
    }
    if ((VAR_28 & VAR_17) && (VAR_28 & VAR_16)) {
 if (VAR_30.entry.modified_by == ((void*)0)) {
     VAR_30.entry.modified_by = FUNC_16(sizeof(*VAR_30.entry.modified_by));
     if (VAR_30.entry.modified_by == ((void*)0)) {
  VAR_27 = VAR_0;
  FUNC_14(VAR_23->context, VAR_27, "out of memory");
  goto out;
     }
 } else
     FUNC_6(VAR_30.entry.modified_by);
 VAR_27 = FUNC_2(VAR_31.entry.modified_by, VAR_30.entry.modified_by);
 if (VAR_27) {
     FUNC_14(VAR_23->context, VAR_27, "out of memory");
     goto out;
 }
    }
    if (VAR_28 & VAR_9) {
 VAR_30.entry.kvno = VAR_31.entry.kvno;
    }
    if (VAR_28 & VAR_15) {
 FUNC_0 ();
    }
    if (VAR_28 & VAR_6) {
 FUNC_0 ();
    }
    if (VAR_28 & VAR_18) {
 FUNC_0 ();
    }
    if (VAR_28 & VAR_19) {
 FUNC_0 ();
    }
    if (VAR_28 & VAR_14) {
 if (VAR_31.entry.max_renew == ((void*)0)) {
     VAR_30.entry.max_renew = ((void*)0);
 } else {
     if (VAR_30.entry.max_renew == ((void*)0)) {
  VAR_30.entry.max_renew = FUNC_16 (sizeof(*VAR_30.entry.max_renew));
  if (VAR_30.entry.max_renew == ((void*)0)) {
      VAR_27 = VAR_0;
      FUNC_14(VAR_23->context, VAR_27, "out of memory");
      goto out;
  }
     }
     *VAR_30.entry.max_renew = *VAR_31.entry.max_renew;
 }
    }
    if (VAR_28 & VAR_12) {
 FUNC_0 ();
    }
    if (VAR_28 & VAR_10) {
 FUNC_0 ();
    }
    if (VAR_28 & VAR_7) {
 FUNC_0 ();
    }
    if (VAR_28 & VAR_8) {
 size_t VAR_32;
 size_t VAR_33;

 for (VAR_33 = 0; VAR_33 < VAR_30.entry.keys.len; ++VAR_33)
     FUNC_8(&VAR_30.entry.keys.val[VAR_33]);
 FUNC_5 (VAR_30.entry.keys.val);

 VAR_32 = VAR_31.entry.keys.len;

 VAR_30.entry.keys.len = VAR_32;
 VAR_30.entry.keys.val = FUNC_16(VAR_25 * sizeof(*VAR_30.entry.keys.val));
 if (VAR_30.entry.keys.val == ((void*)0)) {
     FUNC_14(VAR_23->context, VAR_0, "out of memory");
     return VAR_0;
 }
 for (VAR_33 = 0; VAR_33 < VAR_30.entry.keys.len; ++VAR_33) {
     VAR_27 = FUNC_4(&VAR_31.entry.keys.val[VAR_33],
      &VAR_30.entry.keys.val[VAR_33]);
     if (VAR_27) {
  FUNC_14(VAR_23->context, VAR_27, "out of memory");
  goto out;
     }
 }
    }
    if ((VAR_28 & VAR_22) && VAR_31.entry.extensions) {
 HDB_extensions *VAR_34 = VAR_30.entry.extensions;

 VAR_30.entry.extensions = FUNC_1(1, sizeof(*VAR_30.entry.extensions));
 if (VAR_30.entry.extensions == ((void*)0))
     goto out;

 VAR_27 = FUNC_3(VAR_31.entry.extensions,
      VAR_30.entry.extensions);
 if (VAR_27) {
     FUNC_14(VAR_23->context, VAR_27, "out of memory");
     FUNC_5(VAR_30.entry.extensions);
     VAR_30.entry.extensions = VAR_34;
     goto out;
 }
 if (VAR_34) {
     FUNC_7(VAR_34);
     FUNC_5(VAR_34);
 }
    }
    VAR_27 = VAR_23->db->hdb_store(VAR_23->context, VAR_23->db,
     VAR_4, &VAR_30);
 out:
    FUNC_9 (VAR_23->context, &VAR_30);
    FUNC_9 (VAR_23->context, &VAR_31);
    return VAR_27;
}
