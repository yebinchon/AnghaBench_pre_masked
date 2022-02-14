
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* record; } ;
struct TYPE_7__ {TYPE_2__* record; } ;
struct TYPE_6__ {int mask; int data; int address; } ;
struct TYPE_5__ {int mask; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int *) ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,char*,int *,int*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_4(void *VAR_14, int VAR_15, char *VAR_16)
{
 int VAR_17;
 switch (VAR_15) {
 case 'N':
  VAR_6 = 1;
  break;
 case 'w':
  VAR_13 = 1;
  break;
 case 'i':
  VAR_4 = 1;
  break;
 case 'c':
  VAR_3 = 1;
  VAR_17 = FUNC_3(VAR_16, "%d,%d", &VAR_1, &VAR_2);
  if (VAR_17 != 2)
   return -1;
  break;
 case 'R':
  if (VAR_8 >= 18)
   break;
  VAR_17 = FUNC_3(VAR_16, "%x,%x",
        &VAR_7.record[VAR_8].address,
        &VAR_7.record[VAR_8].mask);
  if (VAR_17 < 1)
   return -1;
  else if (VAR_17 == 1)
   VAR_7.record[VAR_8].mask = 0xffffffff;
  VAR_8++;
  break;
 case 'W':
  if (VAR_12 >= 18)
   break;
  VAR_17 = FUNC_3(VAR_16, "%x,%x,%x",
        &VAR_11.record[VAR_12].address,
        &VAR_11.record[VAR_12].data,
        &VAR_11.record[VAR_12].mask);
  if (VAR_17 < 2)
   return -1;
  else if (VAR_17 == 2)
   VAR_11.record[VAR_12].mask = 0xffffffff;
  VAR_12++;
  break;
 case 25:
  if (!FUNC_2(VAR_0, VAR_16, &VAR_5)) {
   FUNC_0(VAR_9, "dgid format is wrong!\n");
   FUNC_1();
   return 1;
  }
  VAR_10 = 1;
  break;
 default:
  return -1;
 }
 return 0;
}
