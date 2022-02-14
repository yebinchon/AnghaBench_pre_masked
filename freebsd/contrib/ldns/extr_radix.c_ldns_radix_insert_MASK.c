
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int radix_strlen_t ;
typedef int ldns_status ;
struct TYPE_12__ {int count; TYPE_2__* root; } ;
typedef TYPE_1__ ldns_radix_t ;
struct TYPE_13__ {scalar_t__ len; scalar_t__* key; int klen; scalar_t__ offset; struct TYPE_13__* array; struct TYPE_13__* edge; scalar_t__ parent_index; struct TYPE_13__* parent; void* data; int str; } ;
typedef TYPE_2__ ldns_radix_node_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__*,int,int,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*,int,TYPE_2__**,int*) ;
 TYPE_2__* FUNC_5 (void*,scalar_t__*,int) ;
 int FUNC_6 (int,scalar_t__*,int,int *,scalar_t__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__*,int,int) ;

ldns_status
FUNC_8(ldns_radix_t* VAR_4, uint8_t* VAR_5, radix_strlen_t VAR_6,
 void* VAR_7)
{
 radix_strlen_t VAR_8 = 0;
 ldns_radix_node_t* VAR_9 = ((void*)0);
 ldns_radix_node_t* VAR_10 = ((void*)0);

 if (!VAR_4 || !VAR_5 || !VAR_7) {
  return VAR_2;
 }
 VAR_9 = FUNC_5(VAR_7, VAR_5, VAR_6);
 if (!VAR_9) {
  return VAR_1;
 }

 if (!FUNC_4(VAR_4, VAR_5, VAR_6, &VAR_10, &VAR_8)) {

  FUNC_1(VAR_4->root == ((void*)0));
  if (VAR_6 == 0) {




   VAR_4->root = VAR_9;
  } else {




   VAR_10 = FUNC_5(((void*)0), (uint8_t*)"", 0);
   if (!VAR_10) {
    FUNC_0(VAR_9);
    return VAR_1;
   }

   if (!FUNC_2(VAR_10, VAR_5[0])) {
    FUNC_0(VAR_9);
    FUNC_0(VAR_10->array);
    FUNC_0(VAR_10);
    return VAR_1;
   }

   VAR_9->parent = VAR_10;
   VAR_9->parent_index = 0;
   VAR_10->array[0].edge = VAR_9;
   if (VAR_6 > 1) {

    if (!FUNC_6(1, VAR_5,
     VAR_6, &VAR_10->array[0].str,
     &VAR_10->array[0].len)) {
     FUNC_0(VAR_9);
     FUNC_0(VAR_10->array);
     FUNC_0(VAR_10);
     return VAR_1;
    }
   }
   VAR_4->root = VAR_10;
  }
 } else if (VAR_8 == VAR_6) {

  if (VAR_10->data) {

   FUNC_0(VAR_9);
   return VAR_0;
  }
  VAR_10->data = VAR_7;
  VAR_10->key = VAR_5;
  VAR_10->klen = VAR_6;
 } else {

  uint8_t VAR_11 = VAR_5[VAR_8];
  FUNC_1(VAR_8 < VAR_6);
  if (VAR_11 < VAR_10->offset ||
   (VAR_11 - VAR_10->offset) >= VAR_10->len) {







   if (!FUNC_2(VAR_10, VAR_11)) {
    FUNC_0(VAR_9);
    return VAR_1;
   }
   FUNC_1(VAR_11 >= VAR_10->offset);
   FUNC_1((VAR_11 - VAR_10->offset) <= VAR_10->len);
   VAR_11 -= VAR_10->offset;
   if (VAR_8+1 < VAR_6) {

    if (!FUNC_7(
     &VAR_10->array[VAR_11], VAR_5, VAR_8+1,
     VAR_6)) {
     FUNC_0(VAR_9);
     return VAR_1;
    }
   }

   VAR_9->parent = VAR_10;
   VAR_9->parent_index = VAR_11;
   VAR_10->array[VAR_11].edge = VAR_9;
  } else if (VAR_10->array[VAR_11-VAR_10->offset].edge == ((void*)0)) {
   VAR_11 -= VAR_10->offset;
   if (VAR_8+1 < VAR_6) {

    if (!FUNC_7(
     &VAR_10->array[VAR_11], VAR_5, VAR_8+1,
     VAR_6)) {
     FUNC_0(VAR_9);
     return VAR_1;
    }
   }

   VAR_9->parent = VAR_10;
   VAR_9->parent_index = VAR_11;
   VAR_10->array[VAR_11].edge = VAR_9;
  } else {




   if (!FUNC_3(&VAR_10->array[VAR_11-(VAR_10->offset)],
    VAR_5, VAR_8+1, VAR_6, VAR_9)) {
    FUNC_0(VAR_9);
    return VAR_1;
   }
  }
 }

 VAR_4->count ++;
 return VAR_3;
}
