
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptop {int crp_etype; int crp_flags; int crp_session; scalar_t__ crp_opaque; } ;
struct aes_state {int as_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cryptop*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cryptop*) ;

__attribute__((used)) static int
FUNC_5(struct cryptop *VAR_3)
{
 int VAR_4;
 struct aes_state *VAR_5 = (struct aes_state *) VAR_3->crp_opaque;

 if (FUNC_1(VAR_3->crp_session) & VAR_0)
  return (0);

 VAR_4 = VAR_3->crp_etype;
 if (VAR_4 == VAR_2)
  VAR_4 = FUNC_0(VAR_3);
 FUNC_2(&VAR_5->as_lock);
 if (VAR_4 || (VAR_3->crp_flags & VAR_1))
  FUNC_4(VAR_3);
 FUNC_3(&VAR_5->as_lock);

 return (0);
}
