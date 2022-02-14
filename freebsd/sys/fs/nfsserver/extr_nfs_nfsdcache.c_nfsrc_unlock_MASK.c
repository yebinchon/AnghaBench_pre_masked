
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrvcache {int rc_flag; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtx*) ;
 int FUNC_1 (struct mtx*) ;
 struct mtx* FUNC_2 (struct nfsrvcache*) ;
 int FUNC_3 (struct nfsrvcache*) ;

__attribute__((used)) static void
FUNC_4(struct nfsrvcache *VAR_1)
{
 struct mtx *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_2);
 VAR_1->rc_flag &= ~VAR_0;
 FUNC_3(VAR_1);
 FUNC_1(VAR_2);
}
