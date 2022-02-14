
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrvcache {int rc_flag; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtx*,int ) ;
 int FUNC_1 (struct nfsrvcache*,struct mtx*,scalar_t__,char*,int ) ;
 struct mtx* FUNC_2 (struct nfsrvcache*) ;

__attribute__((used)) static void
FUNC_3(struct nfsrvcache *VAR_4)
{
 struct mtx *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 FUNC_0(VAR_5, VAR_0);
 while ((VAR_4->rc_flag & VAR_2) != 0) {
  VAR_4->rc_flag |= VAR_3;
  (void)FUNC_1(VAR_4, VAR_5, VAR_1 - 1, "nfsrc", 0);
 }
 VAR_4->rc_flag |= VAR_2;
}
