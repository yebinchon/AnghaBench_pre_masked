
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int radix_strlen_t ;
typedef scalar_t__ ldns_status ;
struct TYPE_12__ {int root; } ;
typedef TYPE_1__ ldns_radix_t ;
struct TYPE_13__ {int klen; int * key; scalar_t__ data; } ;
typedef TYPE_2__ ldns_radix_node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 void* FUNC_1 (TYPE_1__*,int *,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ,void*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;

ldns_status
FUNC_5(ldns_radix_t* VAR_5, size_t VAR_6, ldns_radix_t** VAR_7)
{
 size_t VAR_8 = 0;
 ldns_radix_node_t* VAR_9;
 ldns_status VAR_10 = VAR_4;
 if (!VAR_5 || !VAR_5->root || VAR_6 == 0) {
  return VAR_4;
 }
 if (!VAR_7) {
  return VAR_3;
 }
 if (!*VAR_7) {
  *VAR_7 = FUNC_0();
  if (!*VAR_7) {
   return VAR_1;
  }
 }
 VAR_9 = FUNC_2(VAR_5);
 while (VAR_8 < VAR_6 && VAR_9) {
  if (VAR_9->data) {

   uint8_t* VAR_11 = VAR_9->key;
   radix_strlen_t VAR_12 = VAR_9->klen;
   void* VAR_13 = FUNC_1(VAR_5, VAR_11,
    VAR_12);

   if (!VAR_13) {
    return VAR_2;
   }
   VAR_10 = FUNC_3(*VAR_7, VAR_11, VAR_12,
    VAR_13);
   if (VAR_10 != VAR_4 &&
       VAR_10 != VAR_0) {
    return VAR_10;
   }







   VAR_8++;
   VAR_9 = FUNC_2(VAR_5);
  } else {
   VAR_9 = FUNC_4(VAR_9);
  }
 }
 return VAR_4;
}
