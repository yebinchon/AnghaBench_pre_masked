
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfqnl_instance {unsigned char copy_mode; int copy_range; int lock; } ;


 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct nfqnl_instance *VAR_1,
        unsigned char VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_1->lock);
 switch (VAR_2) {
 case 129:
 case 130:
  VAR_1->copy_mode = VAR_2;
  VAR_1->copy_range = 0;
  break;

 case 128:
  VAR_1->copy_mode = VAR_2;

  if (VAR_3 > 0xffff)
   VAR_1->copy_range = 0xffff;
  else
   VAR_1->copy_range = VAR_3;
  break;

 default:
  VAR_4 = -VAR_0;

 }
 FUNC_1(&VAR_1->lock);

 return VAR_4;
}
