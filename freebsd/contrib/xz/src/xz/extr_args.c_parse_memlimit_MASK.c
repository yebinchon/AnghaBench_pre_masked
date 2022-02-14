
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (char const*,char*,int,int) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, const char *VAR_2, char *VAR_3,
  bool VAR_4, bool VAR_5)
{
 bool VAR_6 = 0;
 uint64_t VAR_7;

 const size_t VAR_8 = FUNC_2(VAR_3);
 if (VAR_8 > 0 && VAR_3[VAR_8 - 1] == '%') {
  VAR_3[VAR_8 - 1] = '\0';
  VAR_6 = 1;
  VAR_7 = FUNC_1(VAR_2, VAR_3, 1, 100);
 } else {



  VAR_7 = FUNC_1(VAR_1, VAR_3, 0, VAR_0);
 }

 FUNC_0(
   VAR_7, VAR_4, VAR_5, VAR_6);
 return;
}
