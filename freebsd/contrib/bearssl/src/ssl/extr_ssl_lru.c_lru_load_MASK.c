
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {unsigned int version; int master_secret; void* cipher_suite; int session_id; } ;
typedef TYPE_1__ br_ssl_session_parameters ;
struct TYPE_11__ {scalar_t__ store; scalar_t__ head; scalar_t__ tail; int init_done; } ;
typedef TYPE_2__ br_ssl_session_cache_lru ;
typedef int br_ssl_session_cache_class ;
typedef int br_ssl_server_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,unsigned char*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,unsigned char*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(const br_ssl_session_cache_class **VAR_6,
 br_ssl_server_context *VAR_7,
 br_ssl_session_parameters *VAR_8)
{
 br_ssl_session_cache_lru *VAR_9;
 unsigned char VAR_10[VAR_4];
 uint32_t VAR_11;

 (void)VAR_7;
 VAR_9 = (br_ssl_session_cache_lru *)VAR_6;
 if (!VAR_9->init_done) {
  return 0;
 }
 FUNC_4(VAR_9, VAR_8->session_id, VAR_10);
 VAR_11 = FUNC_1(VAR_9, VAR_10, ((void*)0));
 if (VAR_11 != VAR_0) {
  unsigned VAR_12;

  VAR_12 = FUNC_0(VAR_9->store + VAR_11 + VAR_5);
  if (VAR_12 == 0) {





   return 0;
  }
  VAR_8->version = VAR_12;
  VAR_8->cipher_suite = FUNC_0(
   VAR_9->store + VAR_11 + VAR_1);
  FUNC_5(VAR_8->master_secret,
   VAR_9->store + VAR_11 + VAR_3,
   VAR_2);
  if (VAR_11 != VAR_9->head) {




   uint32_t VAR_13, VAR_14;

   VAR_13 = FUNC_3(VAR_9, VAR_11);
   VAR_14 = FUNC_2(VAR_9, VAR_11);
   FUNC_6(VAR_9, VAR_13, VAR_14);
   if (VAR_14 == VAR_0) {
    VAR_9->tail = VAR_13;
   } else {
    FUNC_7(VAR_9, VAR_14, VAR_13);
   }
   FUNC_7(VAR_9, VAR_9->head, VAR_11);
   FUNC_6(VAR_9, VAR_11, VAR_9->head);
   FUNC_7(VAR_9, VAR_11, VAR_0);
   VAR_9->head = VAR_11;
  }
  return 1;
 }
 return 0;
}
