
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loadavg {double fscale; scalar_t__* ldavg; } ;
typedef int loadinfo ;
typedef int fixpt_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int*,int,struct loadavg*,size_t*,int *,int ) ;

int
FUNC_2(double VAR_2[], int VAR_3)
{
 struct loadavg VAR_4;
 int VAR_5, VAR_6[2];
 size_t VAR_7;

 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_1;
 VAR_7 = sizeof(VAR_4);
 if (FUNC_1(VAR_6, 2, &VAR_4, &VAR_7, ((void*)0), 0) < 0)
  return (-1);

 VAR_3 = FUNC_0(VAR_3, sizeof(VAR_4.ldavg) / sizeof(fixpt_t));
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_2[VAR_5] = (double) VAR_4.ldavg[VAR_5] / VAR_4.fscale;
 return (VAR_3);
}
