
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_write_space; int sk_data_ready; } ;
struct sctp_shared_key {int key_list; } ;
struct TYPE_3__ {void* length; int type; } ;
struct sctp_hmac_algo_param {TYPE_1__ param_hdr; int * chunks; void** hmac_ids; } ;
struct TYPE_4__ {int malloced; struct sock* sk; int bind_addr; int inqueue; scalar_t__ dead; int refcnt; int type; } ;
struct sctp_endpoint {struct sctp_hmac_algo_param* digest; int endpoint_shared_keys; struct sctp_hmac_algo_param* auth_chunk_list; struct sctp_hmac_algo_param* auth_hmacs_list; int key_changed_at; scalar_t__ current_key; scalar_t__ last_key; int * secret_key; int rcvbuf_policy; int sndbuf_policy; int asocs; TYPE_2__ base; } ;
struct sctp_chunks_param {TYPE_1__ param_hdr; int * chunks; void** hmac_ids; } ;
typedef int sctp_paramhdr_t ;
typedef int sctp_hmac_algo_param_t ;
typedef int sctp_chunks_param_t ;
typedef int gfp_t ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
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
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int) ;
 int VAR_12 ;
 int FUNC_4 (struct sctp_hmac_algo_param*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (struct sctp_endpoint*,int ) ;
 struct sctp_shared_key* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,int ) ;

__attribute__((used)) static struct sctp_endpoint *FUNC_15(struct sctp_endpoint *VAR_20,
      struct sock *VAR_21,
      gfp_t VAR_22)
{
 struct sctp_hmac_algo_param *VAR_23 = ((void*)0);
 struct sctp_chunks_param *VAR_24 = ((void*)0);
 struct sctp_shared_key *VAR_25;
 int VAR_26;

 VAR_20->digest = FUNC_5(VAR_10, VAR_22);
 if (!VAR_20->digest)
  return ((void*)0);

 if (VAR_14) {




  VAR_23 = FUNC_5(sizeof(sctp_hmac_algo_param_t) +
    sizeof(__u16) * VAR_2, VAR_22);
  if (!VAR_23)
   goto nomem;

  VAR_24 = FUNC_5(sizeof(sctp_chunks_param_t) +
     VAR_6, VAR_22);
  if (!VAR_24)
   goto nomem;






  VAR_23->param_hdr.type = VAR_8;
  VAR_23->param_hdr.length =
     FUNC_3(sizeof(sctp_paramhdr_t) + 2);
  VAR_23->hmac_ids[0] = FUNC_3(VAR_1);


  VAR_24->param_hdr.type = VAR_7;
  VAR_24->param_hdr.length = FUNC_3(sizeof(sctp_paramhdr_t));




  if (VAR_13) {
   VAR_24->chunks[0] = VAR_3;
   VAR_24->chunks[1] = VAR_4;
   VAR_24->param_hdr.length =
     FUNC_3(sizeof(sctp_paramhdr_t) + 2);
  }
 }



 VAR_20->base.type = VAR_5;


 FUNC_1(&VAR_20->base.refcnt, 1);
 VAR_20->base.dead = 0;
 VAR_20->base.malloced = 1;


 FUNC_11(&VAR_20->base.inqueue);


 FUNC_12(&VAR_20->base.inqueue, VAR_16);


 FUNC_10(&VAR_20->base.bind_addr, 0);


 VAR_20->base.sk = VAR_21;
 FUNC_13(VAR_20->base.sk);


 FUNC_0(&VAR_20->asocs);


 VAR_20->sndbuf_policy = VAR_18;

 VAR_21->sk_data_ready = VAR_15;
 VAR_21->sk_write_space = VAR_19;
 FUNC_14(VAR_21, VAR_11);


 VAR_20->rcvbuf_policy = VAR_17;


 FUNC_2(&VAR_20->secret_key[0], VAR_9);
 VAR_20->last_key = VAR_20->current_key = 0;
 VAR_20->key_changed_at = VAR_12;


 FUNC_0(&VAR_20->endpoint_shared_keys);
 VAR_25 = FUNC_9(0, VAR_0);
 if (!VAR_25)
  goto nomem;

 FUNC_6(&VAR_25->key_list, &VAR_20->endpoint_shared_keys);


 VAR_26 = FUNC_8(VAR_20, VAR_22);
 if (VAR_26)
  goto nomem_hmacs;




 VAR_20->auth_hmacs_list = VAR_23;
 VAR_20->auth_chunk_list = VAR_24;

 return VAR_20;

nomem_hmacs:
 FUNC_7(&VAR_20->endpoint_shared_keys);
nomem:

 FUNC_4(VAR_23);
 FUNC_4(VAR_24);
 FUNC_4(VAR_20->digest);
 return ((void*)0);

}
