
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int size; int esize; int rs_num; int anchor; struct TYPE_5__* array; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 (char*,int,char*,char*,int,int) ;
 int FUNC_4 (int ,char*,int) ;

int
FUNC_5(u_int32_t VAR_12)
{
 char VAR_13[VAR_3];
 int VAR_14;

 FUNC_2(&VAR_10, 0, sizeof VAR_10);
 VAR_10.size = VAR_7;
 VAR_10.esize = sizeof VAR_11[0];
 VAR_10.array = VAR_11;

 FUNC_3(VAR_13, VAR_3, "%s/%d.%d", VAR_2,
     FUNC_0(), VAR_12);
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  FUNC_2(&VAR_11[VAR_14], 0, sizeof VAR_11[0]);
  FUNC_4(VAR_11[VAR_14].anchor, VAR_13, VAR_3);
  switch (VAR_14) {
  case 130:
   VAR_11[VAR_14].rs_num = VAR_4;
   break;
  case 129:
   VAR_11[VAR_14].rs_num = VAR_5;
   break;
  case 128:
   VAR_11[VAR_14].rs_num = VAR_6;
   break;
  default:
   VAR_9 = VAR_1;
   return (-1);
  }
 }

 if (FUNC_1(VAR_8, VAR_0, &VAR_10) == -1)
  return (-1);

 return (0);
}
