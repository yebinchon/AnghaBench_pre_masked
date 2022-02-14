
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nb_ctx {int nb_smbtcpport; int nb_nmbtcpport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nb_ctx*,int) ;
 struct nb_ctx* FUNC_1 (int) ;

int
FUNC_2(struct nb_ctx **VAR_3)
{
 struct nb_ctx *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct nb_ctx));
 if (VAR_4 == ((void*)0))
  return VAR_0;
 FUNC_0(VAR_4, sizeof(struct nb_ctx));
 VAR_4->nb_nmbtcpport = VAR_1;
 VAR_4->nb_smbtcpport = VAR_2;

 *VAR_3 = VAR_4;
 return 0;
}
