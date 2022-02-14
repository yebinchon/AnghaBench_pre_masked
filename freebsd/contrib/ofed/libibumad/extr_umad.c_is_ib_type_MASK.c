
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dir_name ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_1 (char*,int ,unsigned int*) ;

__attribute__((used)) static unsigned FUNC_2(const char *VAR_2)
{
 char VAR_3[256];
 unsigned VAR_4;

 FUNC_0(VAR_3, sizeof(VAR_3), "%s/%s", VAR_0, VAR_2);

 if (FUNC_1(VAR_3, VAR_1, &VAR_4) < 0)
  return 0;

 return VAR_4 >= 1 && VAR_4 <= 3 ? 1 : 0;
}
