
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sem_array {int sem_perm; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sem_array *VAR_8, int VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 switch (VAR_9) {
 case 135:
 case 131:

  return FUNC_1(VAR_7, VAR_6);
 case 138:
 case 139:
 case 136:
  VAR_11 = VAR_2;
  break;
 case 137:
 case 140:
  VAR_11 = VAR_3;
  break;
 case 128:
 case 129:
  VAR_11 = VAR_5;
  break;
 case 134:
  VAR_11 = VAR_1;
  break;
 case 133:
  VAR_11 = VAR_4;
  break;
 case 132:
 case 130:
  VAR_11 = VAR_2 | VAR_0;
  break;
 default:
  return 0;
 }

 VAR_10 = FUNC_0(&VAR_8->sem_perm, VAR_11);
 return VAR_10;
}
