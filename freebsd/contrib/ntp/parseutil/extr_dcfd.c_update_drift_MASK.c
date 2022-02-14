
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int FILE ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,char*,int,int,char,long,long,int ) ;
 int FUNC_6 (long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(
      const char *VAR_2,
      long VAR_3,
      time_t VAR_4
      )
{
 FILE *VAR_5;

 VAR_5 = FUNC_4(VAR_2, "w");
 if (VAR_5 != ((void*)0))
 {
  int VAR_6 = FUNC_1(VAR_1, VAR_0);
  int VAR_7 = VAR_1 & ((1<<VAR_0)-1);

  FUNC_0("update_drift: drift_comp %ld ", (long int)VAR_1);
  VAR_7 = (VAR_7 * 1000) / (1<<VAR_0);
  FUNC_5(VAR_5, "%4d.%03d %c%ld.%06ld %.24s\n", VAR_6, VAR_7,
   (VAR_3 < 0) ? '-' : '+', (long int)(FUNC_6(VAR_3) / 1000000),
   (long int)(FUNC_6(VAR_3) % 1000000), FUNC_2(FUNC_7(&VAR_4)));
  FUNC_3(VAR_5);
  FUNC_0("update_drift: %d.%03d ppm ", VAR_6, VAR_7);
 }
}
