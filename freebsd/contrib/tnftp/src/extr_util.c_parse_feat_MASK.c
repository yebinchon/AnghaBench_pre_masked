
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int* VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_6)
{





 while (*VAR_6 && FUNC_0((int)*VAR_6))
  VAR_6++;

 if (FUNC_1(VAR_6, "MDTM") == 0)
  VAR_5[VAR_0] = 1;
 else if (FUNC_2(VAR_6, "MLST", sizeof("MLST") - 1) == 0) {
  VAR_5[VAR_1] = 1;
 } else if (FUNC_1(VAR_6, "REST STREAM") == 0)
  VAR_5[VAR_2] = 1;
 else if (FUNC_1(VAR_6, "SIZE") == 0)
  VAR_5[VAR_3] = 1;
 else if (FUNC_1(VAR_6, "TVFS") == 0)
  VAR_5[VAR_4] = 1;
}
