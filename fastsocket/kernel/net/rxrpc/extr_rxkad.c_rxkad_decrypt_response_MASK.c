
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rxrpc_crypt {int x; int * n; } ;
struct rxrpc_connection {int dummy; } ;
struct rxkad_response {int encrypted; } ;
struct blkcipher_desc {scalar_t__ flags; int info; int * tfm; } ;
typedef int iv ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct rxrpc_crypt*,struct rxrpc_crypt const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (struct scatterlist*,int *,int) ;

__attribute__((used)) static void FUNC_11(struct rxrpc_connection *VAR_2,
       struct rxkad_response *VAR_3,
       const struct rxrpc_crypt *VAR_4)
{
 struct blkcipher_desc VAR_5;
 struct scatterlist VAR_6[2];
 struct rxrpc_crypt VAR_7;

 FUNC_2(",,%08x%08x",
        FUNC_9(VAR_4->n[0]), FUNC_9(VAR_4->n[1]));

 FUNC_0(VAR_0 != ((void*)0));

 FUNC_7(&VAR_1);
 if (FUNC_5(VAR_0, VAR_4->x,
        sizeof(*VAR_4)) < 0)
  FUNC_1();

 FUNC_6(&VAR_7, VAR_4, sizeof(VAR_7));
 VAR_5.tfm = VAR_0;
 VAR_5.info = VAR_7.x;
 VAR_5.flags = 0;

 FUNC_10(VAR_6, &VAR_3->encrypted, sizeof(VAR_3->encrypted));
 FUNC_4(&VAR_5, VAR_6, VAR_6, sizeof(VAR_3->encrypted));
 FUNC_8(&VAR_1);

 FUNC_3("");
}
