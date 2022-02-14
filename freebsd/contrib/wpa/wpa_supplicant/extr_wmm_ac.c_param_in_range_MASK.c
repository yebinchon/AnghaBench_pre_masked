
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,long,long,long) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, long VAR_2,
     long VAR_3, long VAR_4)
{
 if (VAR_2 < VAR_3 || (VAR_4 >= 0 && VAR_2 > VAR_4)) {
  FUNC_0(VAR_0,
      "WMM AC: param %s (%ld) is out of range (%ld-%ld)",
      VAR_1, VAR_2, VAR_3, VAR_4);
  return 0;
 }

 return 1;
}
