
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_17__ {unsigned char* master_secret; int cipher_suite; int version; int session_id; } ;
typedef TYPE_2__ br_ssl_session_parameters ;
struct TYPE_18__ {scalar_t__ store_len; int init_done; scalar_t__ store_ptr; scalar_t__ tail; scalar_t__ head; scalar_t__ store; int hash; int index_key; } ;
typedef TYPE_3__ br_ssl_session_cache_lru ;
typedef int br_ssl_session_cache_class ;
struct TYPE_16__ {int rng; } ;
struct TYPE_19__ {TYPE_1__ eng; } ;
typedef TYPE_4__ br_ssl_server_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,unsigned char*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,int ,unsigned char*) ;
 int FUNC_6 (scalar_t__,unsigned char*,int) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_11 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_12 (TYPE_3__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_13(const br_ssl_session_cache_class **VAR_8,
 br_ssl_server_context *VAR_9,
 const br_ssl_session_parameters *VAR_10)
{
 br_ssl_session_cache_lru *VAR_11;
 unsigned char VAR_12[VAR_5];
 uint32_t VAR_13, VAR_14;

 VAR_11 = (br_ssl_session_cache_lru *)VAR_8;





 if (VAR_11->store_len < VAR_2) {
  return;
 }





 if (!VAR_11->init_done) {
  FUNC_1(&VAR_9->eng.rng,
   VAR_11->index_key, sizeof VAR_11->index_key);
  VAR_11->hash = FUNC_2(&VAR_9->eng.rng);
  VAR_11->init_done = 1;
 }
 FUNC_5(VAR_11, VAR_10->session_id, VAR_12);
 if (FUNC_3(VAR_11, VAR_12, ((void*)0)) != VAR_0) {
  return;
 }
 if (VAR_11->store_ptr > (VAR_11->store_len - VAR_2)) {




  VAR_13 = VAR_11->tail;
  VAR_11->tail = FUNC_4(VAR_11, VAR_13);
  if (VAR_11->tail == VAR_0) {
   VAR_11->head = VAR_0;
  } else {
   FUNC_10(VAR_11, VAR_11->tail, VAR_0);
  }




  FUNC_7(VAR_11, VAR_13);
 } else {



  VAR_13 = VAR_11->store_ptr;
  VAR_11->store_ptr += VAR_2;
 }




 FUNC_3(VAR_11, VAR_12, &VAR_14);
 FUNC_9(VAR_11, VAR_14, VAR_13);
 FUNC_8(VAR_11, VAR_13, VAR_0);
 FUNC_12(VAR_11, VAR_13, VAR_0);





 if (VAR_11->head == VAR_0) {
  VAR_11->tail = VAR_13;
 } else {
  FUNC_11(VAR_11, VAR_11->head, VAR_13);
 }
 FUNC_11(VAR_11, VAR_13, VAR_0);
 FUNC_10(VAR_11, VAR_13, VAR_11->head);
 VAR_11->head = VAR_13;




 FUNC_6(VAR_11->store + VAR_13 + VAR_6, VAR_12, VAR_5);
 FUNC_6(VAR_11->store + VAR_13 + VAR_4,
  VAR_10->master_secret, VAR_3);
 FUNC_0(VAR_11->store + VAR_13 + VAR_7, VAR_10->version);
 FUNC_0(VAR_11->store + VAR_13 + VAR_1, VAR_10->cipher_suite);
}
