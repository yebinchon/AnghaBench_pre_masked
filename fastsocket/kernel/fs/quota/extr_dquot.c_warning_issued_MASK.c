
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct dquot *VAR_6, const int VAR_7)
{
 int VAR_8 = (VAR_7 == VAR_2 ||
  VAR_7 == VAR_3) ? VAR_0 :
  ((VAR_7 == VAR_4 ||
  VAR_7 == VAR_5) ? VAR_1 : 0);

 if (!VAR_8)
  return 0;
 return FUNC_0(VAR_8, &VAR_6->dq_flags);
}
