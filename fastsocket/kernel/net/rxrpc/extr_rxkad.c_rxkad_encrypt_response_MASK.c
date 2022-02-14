
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_connection {int cipher; } ;
struct rxkad_response {int encrypted; } ;
struct rxkad_key {int session_key; } ;
struct blkcipher_desc {scalar_t__ flags; int info; int tfm; } ;
typedef int iv ;


 int FUNC_0 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_1 (struct rxrpc_crypt*,int ,int) ;
 int FUNC_2 (struct scatterlist*,int *,int) ;

__attribute__((used)) static void FUNC_3(struct rxrpc_connection *VAR_0,
       struct rxkad_response *VAR_1,
       const struct rxkad_key *VAR_2)
{
 struct blkcipher_desc VAR_3;
 struct rxrpc_crypt VAR_4;
 struct scatterlist VAR_5[2];


 FUNC_1(&VAR_4, VAR_2->session_key, sizeof(VAR_4));
 VAR_3.tfm = VAR_0->cipher;
 VAR_3.info = VAR_4.x;
 VAR_3.flags = 0;

 FUNC_2(VAR_5, &VAR_1->encrypted, sizeof(VAR_1->encrypted));
 FUNC_0(&VAR_3, VAR_5, VAR_5, sizeof(VAR_1->encrypted));
}
