
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_pubkey {int * key; } ;
struct ucl_parser {int keys; int err; } ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (void*,size_t) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ,struct ucl_pubkey*) ;
 int * FUNC_5 (int *,int **,int *,int *) ;
 struct ucl_pubkey* FUNC_6 (int) ;
 int FUNC_7 (int,struct ucl_pubkey*) ;
 int FUNC_8 (int *,char*,...) ;

bool
FUNC_9 (struct ucl_parser *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{

 FUNC_8 (&VAR_1->err, "cannot check signatures without openssl");
 return 0;
 return 1;
}
