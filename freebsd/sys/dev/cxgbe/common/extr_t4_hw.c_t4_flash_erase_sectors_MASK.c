
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sf_nsec; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*,int,int) ;
 int FUNC_2 (struct adapter*,int,int ,int,int) ;
 int FUNC_3 (struct adapter*,int ,int ) ;

int FUNC_4(struct adapter *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6 >= VAR_4->params.sf_nsec)
  return -VAR_1;

 while (VAR_5 <= VAR_6) {
  if ((VAR_7 = FUNC_2(VAR_4, 1, 0, 1, VAR_3)) != 0 ||
      (VAR_7 = FUNC_2(VAR_4, 4, 0, 1,
         VAR_2 | (VAR_5 << 8))) != 0 ||
      (VAR_7 = FUNC_1(VAR_4, 14, 500)) != 0) {
   FUNC_0(VAR_4,
    "erase of flash sector %d failed, error %d\n",
    VAR_5, VAR_7);
   break;
  }
  VAR_5++;
 }
 FUNC_3(VAR_4, VAR_0, 0);
 return VAR_7;
}
