
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ibnd_config {void* max_smps; void* max_hops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (char*,char*) ;
 void* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 void* FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_21, int VAR_22, char *VAR_23)
{
 struct ibnd_config *VAR_24 = VAR_21;
 char *VAR_25;

 switch (VAR_22) {
 case 1:
  VAR_17 = FUNC_2(VAR_23);
  break;
 case 2:
  VAR_16 = FUNC_2(VAR_23);
  break;
 case 3:
  VAR_8 = FUNC_2(VAR_23);
  break;
 case 4:
  VAR_9 = 0;
  VAR_25 = FUNC_3(VAR_23, ",");
  while (VAR_25) {
   if (!FUNC_1(VAR_25, "port"))
    VAR_9 |= VAR_2;
   else if (!FUNC_1(VAR_25, "state"))
    VAR_9 |= VAR_3;
   else if (!FUNC_1(VAR_25, "lid"))
    VAR_9 |= VAR_0;
   else if (!FUNC_1(VAR_25, "nodedesc"))
    VAR_9 |= VAR_1;
   else {
    FUNC_0(VAR_20, "invalid diff check key: %s\n",
     VAR_25);
    return -1;
   }
   VAR_25 = FUNC_3(((void*)0), ",");
  }
  break;
 case 5:
  VAR_12 = FUNC_2(VAR_23);
  break;
 case 6:
  VAR_18 = 1;
  VAR_19 = VAR_5;
  break;
 case 7:
  VAR_18 = 1;
  VAR_19 = VAR_4;
  break;
 case 'S':
 case 'G':
  VAR_14 = VAR_23;
  VAR_13 = (uint64_t) FUNC_5(VAR_14, 0, 0);
  break;
 case 'D':
  VAR_11 = FUNC_2(VAR_23);
  break;
 case 'a':
  VAR_7 = 1;
  break;
 case 'n':
  VAR_24->max_hops = FUNC_4(VAR_23, ((void*)0), 0);
  break;
 case 'd':
  VAR_10 = 1;
  break;
 case 'l':
  VAR_15 = 1;
  break;
 case 'p':
  VAR_6 = 1;
  break;
 case 'R':
  break;
 case 'o':
  VAR_24->max_smps = FUNC_4(VAR_23, ((void*)0), 0);
  break;
 default:
  return -1;
 }

 return 0;
}
