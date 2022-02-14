
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (char*,int,char*,int,int,...) ;

__attribute__((used)) static char *
FUNC_1(time_t VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 static char VAR_4[128];

 VAR_3 = (VAR_0 / 60) % 60;
 VAR_2 = (VAR_0 / 60 / 60) % 24;
 VAR_1 = VAR_0 / 60 / 60 / 24;
 if (VAR_1 > 0)
  FUNC_0(VAR_4, sizeof VAR_4, "%dd %d:%02d", VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_4, sizeof VAR_4, "%d:%02d", VAR_2, VAR_3);
 return VAR_4;
}
