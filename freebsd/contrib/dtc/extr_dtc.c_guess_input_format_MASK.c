
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stat {int st_mode; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (scalar_t__*,int,int,int *) ;
 char const* FUNC_6 (char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;

__attribute__((used)) static const char *FUNC_8(const char *VAR_1, const char *VAR_2)
{
 struct stat VAR_3;
 uint32_t VAR_4;
 FILE *VAR_5;

 if (FUNC_7(VAR_1, &VAR_3) != 0)
  return VAR_2;

 if (FUNC_0(VAR_3.st_mode))
  return "fs";

 if (!FUNC_1(VAR_3.st_mode))
  return VAR_2;

 VAR_5 = FUNC_4(VAR_1, "r");
 if (VAR_5 == ((void*)0))
  return VAR_2;
 if (FUNC_5(&VAR_4, 4, 1, VAR_5) != 1) {
  FUNC_2(VAR_5);
  return VAR_2;
 }
 FUNC_2(VAR_5);

 VAR_4 = FUNC_3(VAR_4);
 if (VAR_4 == VAR_0)
  return "dtb";

 return FUNC_6(VAR_1, VAR_2);
}
