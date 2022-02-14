
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sglist {int dummy; } ;
struct cryptop {int crp_flags; int crp_ilen; int crp_buf; int crp_uio; int crp_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sglist*,int ,int ) ;
 int FUNC_1 (struct sglist*,int ) ;
 int FUNC_2 (struct sglist*,int ) ;
 int FUNC_3 (struct sglist*) ;

__attribute__((used)) static int
FUNC_4(struct sglist *VAR_2, struct cryptop *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_2);
 if (VAR_3->crp_flags & VAR_0)
  VAR_4 = FUNC_1(VAR_2, VAR_3->crp_mbuf);
 else if (VAR_3->crp_flags & VAR_1)
  VAR_4 = FUNC_2(VAR_2, VAR_3->crp_uio);
 else
  VAR_4 = FUNC_0(VAR_2, VAR_3->crp_buf, VAR_3->crp_ilen);
 return (VAR_4);
}
