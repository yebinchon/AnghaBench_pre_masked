
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibnd_config {int show_progress; int max_smps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (char*,char*) ;
 void* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_20, int VAR_21, char *VAR_22)
{
 struct ibnd_config *VAR_23 = VAR_20;
 char *VAR_24;

 switch (VAR_21) {
 case 1:
  VAR_16 = FUNC_2(VAR_22);
  break;
 case 2:
  VAR_9 = FUNC_2(VAR_22);
  break;
 case 3:
  VAR_15 = FUNC_2(VAR_22);
  break;
 case 4:
  VAR_10 = FUNC_2(VAR_22);
  break;
 case 5:
  VAR_11 = 0;
  VAR_24 = FUNC_3(VAR_22, ",");
  while (VAR_24) {
   if (!FUNC_1(VAR_24, "sw"))
    VAR_11 |= VAR_5;
   else if (!FUNC_1(VAR_24, "ca"))
    VAR_11 |= VAR_0;
   else if (!FUNC_1(VAR_24, "router"))
    VAR_11 |= VAR_4;
   else if (!FUNC_1(VAR_24, "port"))
    VAR_11 |= VAR_3;
   else if (!FUNC_1(VAR_24, "lid"))
    VAR_11 |= VAR_1;
   else if (!FUNC_1(VAR_24, "nodedesc"))
    VAR_11 |= VAR_2;
   else {
    FUNC_0(VAR_19, "invalid diff check key: %s\n",
     VAR_24);
    return -1;
   }
   VAR_24 = FUNC_3(((void*)0), ",");
  }
  break;
 case 's':
  VAR_23->show_progress = 1;
  break;
 case 'f':
  VAR_12 = 1;
  break;
 case 'l':
  VAR_14 = VAR_6 | VAR_8 | VAR_7;
  break;
 case 'g':
  VAR_13 = 1;
  break;
 case 'S':
  VAR_14 = VAR_8;
  break;
 case 'H':
  VAR_14 = VAR_6;
  break;
 case 'R':
  VAR_14 = VAR_7;
  break;
 case 'p':
  VAR_17 = 1;
  break;
 case 'm':
  VAR_18 = 1;
  break;
 case 'o':
  VAR_23->max_smps = FUNC_4(VAR_22, ((void*)0), 0);
  break;
 default:
  return -1;
 }

 return 0;
}
