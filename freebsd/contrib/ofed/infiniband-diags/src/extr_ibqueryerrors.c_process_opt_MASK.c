
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibnd_config {int max_smps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 void* VAR_17 ;

__attribute__((used)) static int FUNC_5(void *VAR_18, int VAR_19, char *VAR_20)
{
 struct ibnd_config *VAR_21 = VAR_18;
 switch (VAR_19) {
 case 's':
  FUNC_1(VAR_20);
  break;
 case 'c':

  FUNC_0(VAR_0);
  break;
 case 1:
  VAR_11 = FUNC_2(VAR_20);
  break;
 case 2:
  VAR_6++;
  break;
 case 3:
  VAR_12 |= VAR_3;
  break;
 case 4:
  VAR_12 |= VAR_1;
  break;
 case 5:
  VAR_12 |= VAR_2;
  break;
 case 6:
  VAR_8 = 1;
  break;
 case 7:
  VAR_10 = FUNC_2(VAR_20);
  break;
 case 8:
  VAR_17 = FUNC_2(VAR_20);
  break;
 case 9:
  VAR_7 = 1;
  break;
 case 10:
  VAR_13 = 0;
  break;
 case 'G':
 case 'S':
  VAR_16 = VAR_20;
  VAR_15 = FUNC_4(VAR_20, 0, 0);
  break;
 case 'D':
  VAR_9 = FUNC_2(VAR_20);
  break;
 case 'r':
  VAR_14++;
  break;
 case 'R':
  break;
 case 'k':
  VAR_5 = 1;
  break;
 case 'K':
  VAR_4 = 1;
  break;
 case 'o':
  VAR_21->max_smps = FUNC_3(VAR_20, ((void*)0), 0);
  break;
 default:
  return -1;
 }

 return 0;
}
