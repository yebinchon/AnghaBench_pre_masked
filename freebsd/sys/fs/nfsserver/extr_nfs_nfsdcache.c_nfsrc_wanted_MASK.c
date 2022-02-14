
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrvcache {int rc_flag; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nfsrvcache *VAR_1)
{
 if (VAR_1->rc_flag & VAR_0) {
  VAR_1->rc_flag &= ~VAR_0;
  FUNC_0((caddr_t)VAR_1);
 }
}
