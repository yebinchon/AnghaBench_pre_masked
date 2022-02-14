
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct hx509cipher {TYPE_2__ const* (* ai_func ) () ;} ;
typedef scalar_t__ hx509_private_key ;
typedef TYPE_1__* hx509_peer_info ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_16__ {int flags; int * key_oid; int const* sig_oid; } ;
struct TYPE_15__ {int algorithm; } ;
struct TYPE_14__ {size_t len; TYPE_2__ const* val; } ;
typedef TYPE_2__ AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_2__* FUNC_0 (scalar_t__ const,int) ;
 int FUNC_1 (TYPE_2__ const*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int const*,int *) ;
 struct hx509cipher* FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const,int ,int,char*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 TYPE_4__** VAR_10 ;
 TYPE_2__ const* FUNC_8 () ;

int
FUNC_9(const hx509_context VAR_11,
      int VAR_12,
      const hx509_private_key VAR_13,
      hx509_peer_info VAR_14,
      AlgorithmIdentifier *VAR_15)
{
    const AlgorithmIdentifier *VAR_16 = ((void*)0);
    size_t VAR_17, VAR_18;
    int VAR_19, VAR_20;

    FUNC_7(VAR_15, 0, sizeof(*VAR_15));

    if (VAR_12 == VAR_1) {
 VAR_20 = VAR_4;
 if (VAR_13)
     VAR_16 = FUNC_0(VAR_13, VAR_12);
 if (VAR_16 == ((void*)0))
     VAR_16 = VAR_7;
    } else if (VAR_12 == VAR_2) {
 VAR_20 = VAR_5;

 if (VAR_13)
     VAR_16 = FUNC_0(VAR_13, VAR_12);
 if (VAR_16 == ((void*)0))
     VAR_16 = VAR_9;
    } else if (VAR_12 == VAR_3) {
 VAR_20 = VAR_6;
 VAR_16 = VAR_8;
    } else {
 FUNC_6(VAR_11, 0, VAR_0,
          "Unknown type %d of selection", VAR_12);
 return VAR_0;
    }

    if (VAR_14) {
 const heim_oid *VAR_21 = ((void*)0);

 VAR_21 = FUNC_4(VAR_13);

 for (VAR_17 = 0; VAR_17 < VAR_14->len; VAR_17++) {
     for (VAR_18 = 0; VAR_10[VAR_18]; VAR_18++) {
  if ((VAR_10[VAR_18]->flags & VAR_20) != VAR_20)
      continue;
  if (FUNC_2(VAR_10[VAR_18]->sig_oid,
         &VAR_14->val[VAR_17].algorithm) != 0)
      continue;
  if (VAR_21 && VAR_10[VAR_18]->key_oid &&
      FUNC_2(VAR_21, VAR_10[VAR_18]->key_oid))
      continue;


  VAR_19 = FUNC_1(&VAR_14->val[VAR_17], VAR_15);
  if (VAR_19)
      FUNC_5(VAR_11);
  return VAR_19;
     }
     if (VAR_20 & VAR_6) {
  const struct hx509cipher *VAR_22;

  VAR_22 = FUNC_3(&VAR_14->val[VAR_17].algorithm);
  if (VAR_22 == ((void*)0))
      continue;
  if (VAR_22->ai_func == ((void*)0))
      continue;
  VAR_19 = FUNC_1(VAR_22->ai_func(), VAR_15);
  if (VAR_19)
      FUNC_5(VAR_11);
  return VAR_19;
     }
 }
    }


    VAR_19 = FUNC_1(VAR_16, VAR_15);
    if (VAR_19)
 FUNC_5(VAR_11);
    return VAR_19;
}
