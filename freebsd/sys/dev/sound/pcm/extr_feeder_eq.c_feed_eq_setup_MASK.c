
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feed_eq_info {int * coeff; int rate; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct feed_eq_info*) ;

__attribute__((used)) static int
FUNC_2(struct feed_eq_info *VAR_1)
{

 VAR_1->coeff = FUNC_0(VAR_1->rate);
 if (VAR_1->coeff == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_1);

 return (0);
}
