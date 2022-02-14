
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static char *
FUNC_1 (unsigned long VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 static char VAR_3[80];

 if (!VAR_0 || !VAR_1 || !VAR_2)
  FUNC_0 (VAR_3, "         -         ");
 else
  FUNC_0 (VAR_3, "%10lu (%.1e)", VAR_0, (double)VAR_0/VAR_1/VAR_2);
 return VAR_3;
}
