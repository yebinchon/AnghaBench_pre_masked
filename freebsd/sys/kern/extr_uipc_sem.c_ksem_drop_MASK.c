
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksem {int ks_cv; int ks_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ksem*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ksem*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ksem *VAR_3)
{

 if (FUNC_5(&VAR_3->ks_ref)) {



  FUNC_0(&VAR_3->ks_cv);
  FUNC_1(VAR_3, VAR_0);
  FUNC_3(&VAR_1);
  VAR_2--;
  FUNC_4(&VAR_1);
 }
}
