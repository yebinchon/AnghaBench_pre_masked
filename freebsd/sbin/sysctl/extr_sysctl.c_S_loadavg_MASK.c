
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loadavg {scalar_t__ fscale; scalar_t__* ldavg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,double,double,double) ;
 int FUNC_1 (char*,size_t,int) ;

__attribute__((used)) static int
FUNC_2(size_t VAR_1, void *VAR_2)
{
 struct loadavg *VAR_3 = (struct loadavg*)VAR_2;

 if (VAR_1 != sizeof(*VAR_3)) {
  FUNC_1("S_loadavg %zu != %zu", VAR_1, sizeof(*VAR_3));
  return (1);
 }
 FUNC_0(VAR_0 ? "{ %'.2f %'.2f %'.2f }" : "{ %.2f %.2f %.2f }",
  (double)VAR_3->ldavg[0]/(double)VAR_3->fscale,
  (double)VAR_3->ldavg[1]/(double)VAR_3->fscale,
  (double)VAR_3->ldavg[2]/(double)VAR_3->fscale);
 return (0);
}
