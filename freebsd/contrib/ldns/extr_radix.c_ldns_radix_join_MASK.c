
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ldns_status ;
struct TYPE_11__ {int root; } ;
typedef TYPE_1__ ldns_radix_t ;
struct TYPE_12__ {int klen; int key; scalar_t__ data; } ;
typedef TYPE_2__ ldns_radix_node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,scalar_t__) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;

ldns_status
FUNC_4(ldns_radix_t* VAR_3, ldns_radix_t* VAR_4)
{
 ldns_radix_node_t* VAR_5, *VAR_6;
 ldns_status VAR_7;
 if (!VAR_4 || !VAR_4->root) {
  return VAR_2;
 }


 VAR_5 = FUNC_1(VAR_4);
 while (VAR_5) {
  VAR_7 = VAR_1;

  if (VAR_5->data) {
   VAR_7 = FUNC_2(VAR_3, VAR_5->key,
    VAR_5->klen, VAR_5->data);

   if (VAR_7 != VAR_2 &&
       VAR_7 != VAR_0) {
    return VAR_7;
   }
  }
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_7 == VAR_2) {
   (void) FUNC_0(VAR_4, VAR_5->key,
    VAR_5->klen);
  }
  VAR_5 = VAR_6;
 }

 return VAR_2;
}
