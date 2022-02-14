
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysent {int sy_thrcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysent*) ;

int
FUNC_1(struct sysent *VAR_2, int VAR_3,
    const struct sysent *VAR_4)
{
 struct sysent *VAR_5;

 if (VAR_3 == 0)
  return (0);

 VAR_5 = &VAR_2[VAR_3];
 if ((VAR_5->sy_thrcnt & VAR_1) != 0)
  return (VAR_0);
 FUNC_0(VAR_5);
 VAR_2[VAR_3] = *VAR_4;
 return (0);
}
