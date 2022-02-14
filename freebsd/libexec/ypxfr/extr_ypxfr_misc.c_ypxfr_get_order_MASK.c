
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stat; unsigned long ordernum; } ;
typedef TYPE_1__ ypresp_order ;
struct TYPE_6__ {char* map; char* domain; } ;
typedef TYPE_2__ ypreq_nokey ;
typedef enum ypstat { ____Placeholder_ypstat } ypstat ;
typedef int CLIENT ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;


 int VAR_6 ;

 int * FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int VAR_7 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*,unsigned int*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int *) ;

unsigned long
FUNC_7(char *VAR_8, char *VAR_9, char *VAR_10, const int VAR_11)
{
 if (VAR_11) {
  unsigned int VAR_12;
  int VAR_13;
  if ((VAR_13 = FUNC_5(VAR_8, VAR_9, &VAR_12))) {
   switch (VAR_13) {
   case 133:
    VAR_7 = (enum ypstat)VAR_2;
    break;
   case 132:
    VAR_7 = (enum ypstat)VAR_3;
    break;
   case 131:
   default:
    VAR_7 = (enum ypstat)VAR_5;
    break;
   }
   return(0);
  } else
   return(VAR_12);
 } else {
  CLIENT *VAR_14;
  ypresp_order *VAR_15;
  ypreq_nokey VAR_16;

  if ((VAR_14 = FUNC_0(VAR_10,VAR_0,VAR_1,"udp")) == ((void*)0)) {
   FUNC_4("%s",FUNC_2("couldn't create udp handle to ypserv"));

   VAR_7 = (enum ypstat)VAR_4;
   return(0);
  }
  VAR_16.map = VAR_9;
  VAR_16.domain = VAR_8;
  if ((VAR_15 = FUNC_6(&VAR_16, VAR_14)) == ((void*)0)) {
   FUNC_4("%s", FUNC_3(VAR_14, "YPPROC_ORDER failed"));

   FUNC_1(VAR_14);
   VAR_7 = (enum ypstat)VAR_4;
   return(0);
  }
  FUNC_1(VAR_14);
  if (VAR_15->stat != VAR_6) {
   switch (VAR_15->stat) {
   case 130:
    VAR_7 = (enum ypstat)VAR_2;
    break;
   case 129:
    VAR_7 = (enum ypstat)VAR_3;
    break;
   case 128:
   default:
    VAR_7 = (enum ypstat)VAR_5;
    break;
   }
   return(0);
  }
  return(VAR_15->ordernum);
 }
}
