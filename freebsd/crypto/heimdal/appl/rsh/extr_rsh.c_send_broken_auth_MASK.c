
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 size_t FUNC_0 (int,char const*,size_t) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_0,
   struct sockaddr *VAR_1,
   struct sockaddr *VAR_2,
   const char *VAR_3,
   const char *VAR_4,
   const char *VAR_5,
   size_t VAR_6,
   const char *VAR_7)
{
    size_t VAR_8;

    VAR_8 = FUNC_1(VAR_5) + 1;
    if (FUNC_0 (VAR_0, VAR_5, VAR_8) != VAR_8) {
 FUNC_2 ("write");
 return 1;
    }
    VAR_8 = FUNC_1(VAR_4) + 1;
    if (FUNC_0 (VAR_0, VAR_4, VAR_8) != VAR_8) {
 FUNC_2 ("write");
 return 1;
    }
    if (FUNC_0 (VAR_0, VAR_7, VAR_6) != VAR_6) {
 FUNC_2 ("write");
 return 1;
    }
    return 0;
}
