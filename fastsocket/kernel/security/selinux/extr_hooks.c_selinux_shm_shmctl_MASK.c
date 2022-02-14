
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmid_kernel {int shm_perm; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct shmid_kernel *VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;

 switch (VAR_8) {
 case 135:
 case 131:

  return FUNC_1(VAR_6, VAR_5);
 case 132:
 case 129:
  VAR_9 = VAR_2 | VAR_0;
  break;
 case 133:
  VAR_9 = VAR_4;
  break;
 case 130:
 case 128:
  VAR_9 = VAR_3;
  break;
 case 134:
  VAR_9 = VAR_1;
  break;
 default:
  return 0;
 }

 VAR_10 = FUNC_0(&VAR_7->shm_perm, VAR_9);
 return VAR_10;
}
