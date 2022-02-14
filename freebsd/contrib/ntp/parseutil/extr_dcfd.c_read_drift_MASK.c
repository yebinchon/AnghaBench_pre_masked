
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int*,int*) ;

__attribute__((used)) static void
FUNC_4(
    const char *VAR_2
    )
{
 FILE *VAR_3;

 VAR_3 = FUNC_2(VAR_2, "r");
 if (VAR_3 != ((void*)0))
 {
  int VAR_4 = 0, VAR_5 = 0;

  FUNC_3(VAR_3, "%4d.%03d", &VAR_4, &VAR_5);
  FUNC_1(VAR_3);
  FUNC_0("read_drift: %d.%03d ppm ", VAR_4, VAR_5);

  VAR_1 = VAR_4 << VAR_0;
  VAR_5 = (VAR_5 << VAR_0) / 1000;
  VAR_1 += VAR_5 & (1<<VAR_0);
  FUNC_0("read_drift: drift_comp %ld ", (long int)VAR_1);
 }
}
