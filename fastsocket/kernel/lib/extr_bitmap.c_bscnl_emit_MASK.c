
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static inline int FUNC_1(char *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_4 > 0)
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4, ",");
 if (VAR_2 == VAR_3)
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4, "%d", VAR_2);
 else
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4, "%d-%d", VAR_2, VAR_3);
 return VAR_4;
}
