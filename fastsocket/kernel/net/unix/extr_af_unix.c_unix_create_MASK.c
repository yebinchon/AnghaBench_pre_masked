
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int type; int * ops; int state; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 scalar_t__ FUNC_0 (struct net*,struct socket*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(struct net *VAR_8, struct socket *VAR_9, int VAR_10,
         int VAR_11)
{
 if (VAR_10 && VAR_10 != VAR_3)
  return -VAR_1;

 VAR_9->state = VAR_4;

 switch (VAR_9->type) {
 case 128:
  VAR_9->ops = &VAR_7;
  break;




 case 130:
  VAR_9->type = 131;
 case 131:
  VAR_9->ops = &VAR_5;
  break;
 case 129:
  VAR_9->ops = &VAR_6;
  break;
 default:
  return -VAR_2;
 }

 return FUNC_0(VAR_8, VAR_9) ? 0 : -VAR_0;
}
