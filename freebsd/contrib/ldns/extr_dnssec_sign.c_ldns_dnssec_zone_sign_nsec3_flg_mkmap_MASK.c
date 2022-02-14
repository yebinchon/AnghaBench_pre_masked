
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rbtree_t ;
typedef int ldns_key_list ;
struct TYPE_16__ {TYPE_3__* soa; TYPE_2__* names; } ;
typedef TYPE_4__ ldns_dnssec_zone ;
struct TYPE_17__ {int * nsec; } ;
typedef TYPE_5__ ldns_dnssec_name ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {TYPE_1__* root; } ;
struct TYPE_13__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *,int ,int ,int ,int ,int *,int **) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *,int *,int (*) (ldns_rr*,void*),void*,int) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ,int ,int ) ;

ldns_status
FUNC_15(ldns_dnssec_zone *VAR_3,
  ldns_rr_list *VAR_4,
  ldns_key_list *VAR_5,
  int (*VAR_6)(ldns_rr *, void *),
  void *VAR_7,
  uint8_t VAR_8,
  uint8_t VAR_9,
  uint16_t VAR_10,
  uint8_t VAR_11,
  uint8_t *VAR_12,
  int VAR_13,
  ldns_rbtree_t **VAR_14)
{
 ldns_rr *VAR_15, *VAR_16;
 ldns_status VAR_17 = VAR_2;


 VAR_17 = FUNC_5(VAR_3);
 if (VAR_17 != VAR_2) {
  return VAR_17;
 }




 if (VAR_3->names) {

  VAR_17 = FUNC_0(VAR_3);
  if (VAR_17 != VAR_2) {
   return VAR_17;
  }

  VAR_15 = ((ldns_dnssec_name *)VAR_3->names->root->data)->nsec;
  if (VAR_15 && FUNC_9(VAR_15) == VAR_0) {

  } else {
   if (!FUNC_4(VAR_3,
            VAR_3->soa->name,
            VAR_1)) {

    VAR_16 =
     FUNC_11(VAR_1);
    FUNC_13(VAR_16,
          FUNC_7(VAR_3->soa->name));
    FUNC_6(VAR_16,
          VAR_8,
          VAR_9,
          VAR_10,
          VAR_11,
          VAR_12);



    FUNC_14(FUNC_8(FUNC_12(VAR_16, 1)), 0, 0);
    VAR_17 = FUNC_1(VAR_3, VAR_16);
    if (VAR_17 != VAR_2) {
     return VAR_17;
    }
    FUNC_10(VAR_4, VAR_16);
   }
   VAR_17 = FUNC_2(VAR_3,
           VAR_4,
           VAR_8,
           VAR_9,
           VAR_10,
           VAR_11,
           VAR_12,
           VAR_14);
   if (VAR_17 != VAR_2) {
    return VAR_17;
   }
  }

  VAR_17 = FUNC_3(VAR_3,
      VAR_4,
      VAR_5,
      VAR_6,
      VAR_7,
      VAR_13);
 }

 return VAR_17;
}
