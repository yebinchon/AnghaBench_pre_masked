
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (char const,char const,char*,char const,size_t,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, ssize_t VAR_1, const char *VAR_2,
    ssize_t VAR_3)
{
 ssize_t VAR_4;

 FUNC_0(VAR_1, VAR_3,
     "Expected %zd bytes but got %zd", VAR_1, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(VAR_2[VAR_4], VAR_0[VAR_4],
      "Expected %#hhx at position %zd; got %hhx instead",
      VAR_0[VAR_4], VAR_4, VAR_2[VAR_4]);
 }
}
