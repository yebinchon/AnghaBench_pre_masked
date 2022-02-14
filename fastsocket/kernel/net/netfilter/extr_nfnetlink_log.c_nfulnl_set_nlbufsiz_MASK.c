
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct nfulnl_instance {int nlbufsiz; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct nfulnl_instance *VAR_2, u_int32_t VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2->lock);
 if (VAR_3 < VAR_1)
  VAR_4 = -VAR_0;
 else if (VAR_3 > 131072)
  VAR_4 = -VAR_0;
 else {
  VAR_2->nlbufsiz = VAR_3;
  VAR_4 = 0;
 }
 FUNC_1(&VAR_2->lock);

 return VAR_4;
}
