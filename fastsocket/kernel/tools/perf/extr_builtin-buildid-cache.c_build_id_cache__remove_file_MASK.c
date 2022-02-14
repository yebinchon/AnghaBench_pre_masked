
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int build_id ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int **,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char*,char const*,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(const char *VAR_2,
           const char *VAR_3)
{
 u8 VAR_4[VAR_0];
 char VAR_5[VAR_0 * 2 + 1];

 int VAR_6;

 if (FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4)) < 0) {
  FUNC_3("Couldn't read a build-id in %s\n", VAR_2);
  return -1;
 }

 FUNC_0(VAR_4, sizeof(VAR_4), VAR_5);
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_1)
  FUNC_4("Removing %s %s: %s\n", VAR_5, VAR_2,
   VAR_6 ? "FAIL" : "Ok");

 return VAR_6;
}
