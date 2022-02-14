
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int krb5_salt ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;
struct TYPE_16__ {int principal; } ;
struct TYPE_14__ {TYPE_6__ entry; } ;
typedef TYPE_3__ hdb_entry_ex ;
struct TYPE_12__ {scalar_t__ length; } ;
struct TYPE_13__ {TYPE_1__ keyvalue; } ;
struct TYPE_15__ {TYPE_2__ key; } ;
typedef TYPE_4__ Key ;


 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_6__*,scalar_t__ const,TYPE_4__**) ;
 scalar_t__ FUNC_2 (int ,TYPE_6__*,scalar_t__,TYPE_4__**) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__ const) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 scalar_t__* FUNC_7 (int ) ;

krb5_error_code
FUNC_8(krb5_context VAR_3, krb5_boolean VAR_4,
  krb5_boolean VAR_5, hdb_entry_ex *VAR_6,
  krb5_enctype *VAR_7, unsigned VAR_8,
  krb5_enctype *VAR_9, Key **VAR_10)
{
    krb5_error_code VAR_11;
    krb5_salt VAR_12;
    krb5_enctype VAR_13 = VAR_0;
    Key *VAR_14;
    int VAR_15;


    VAR_11 = FUNC_6(VAR_3, VAR_6->entry.principal, &VAR_12);
    if (VAR_11)
 return VAR_11;

    VAR_11 = VAR_1;

    if (VAR_4) {
 const krb5_enctype *VAR_16;
 krb5_enctype VAR_17 = VAR_0;
 int VAR_18;
 VAR_16 = FUNC_7(VAR_3);
 for (VAR_15 = 0; VAR_16[VAR_15] != VAR_0 && VAR_13 == VAR_0; VAR_15++) {
     if (FUNC_4(VAR_3, VAR_16[VAR_15]) != 0)
  continue;


     for (VAR_18 = 0; VAR_18 < VAR_8 && VAR_13 == VAR_0; VAR_18++) {
  if (VAR_16[VAR_15] != VAR_7[VAR_18])
      continue;

  if (VAR_17 == VAR_0)
      VAR_17 = VAR_16[VAR_15];

  VAR_11 = FUNC_1(VAR_3, &VAR_6->entry, VAR_16[VAR_15], &VAR_14);
  if (VAR_11)
      continue;
  if (VAR_5 && !FUNC_3(&VAR_12, VAR_14))
      continue;
  VAR_13 = VAR_16[VAR_15];
     }
 }
 if (VAR_17 != VAR_0 && VAR_13 == VAR_0)
     VAR_13 = VAR_17;
 else if (VAR_13 == VAR_0)
     VAR_11 = VAR_1;
 if (VAR_11 == 0 && VAR_9 != ((void*)0))
     *VAR_9 = VAR_13;
 if (VAR_11 == 0 && VAR_10 != ((void*)0))
     *VAR_10 = VAR_14;
    } else {
 for(VAR_14 = ((void*)0), VAR_15 = 0; VAR_11 != 0 && VAR_15 < VAR_8; VAR_15++, VAR_14 = ((void*)0)) {

     if (FUNC_4(VAR_3, VAR_7[VAR_15]) != 0 &&
  !FUNC_0(VAR_6->entry.principal, VAR_7[VAR_15]))
  continue;

     while (FUNC_2(VAR_3, &VAR_6->entry, VAR_7[VAR_15], &VAR_14) == 0) {
  if (VAR_14->key.keyvalue.length == 0) {
      VAR_11 = VAR_2;
      continue;
  }
  if (VAR_10 != ((void*)0))
      *VAR_10 = VAR_14;
  if (VAR_9 != ((void*)0))
      *VAR_9 = VAR_7[VAR_15];
  VAR_11 = 0;
  if (VAR_5 && FUNC_3(&VAR_12, VAR_14))
      goto out;
     }
 }
    }

out:
    FUNC_5 (VAR_3, VAR_12);
    return VAR_11;
}
