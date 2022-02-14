
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_queue {int q_perm; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct msg_queue *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;

 switch (VAR_7) {
 case 133:
 case 129:

  return FUNC_1(VAR_5, VAR_4);
 case 130:
 case 128:
  VAR_9 = VAR_2 | VAR_0;
  break;
 case 131:
  VAR_9 = VAR_3;
  break;
 case 132:
  VAR_9 = VAR_1;
  break;
 default:
  return 0;
 }

 VAR_8 = FUNC_0(&VAR_6->q_perm, VAR_9);
 return VAR_8;
}
