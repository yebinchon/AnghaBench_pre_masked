
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union key {int dummy; } key ;
struct group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct group VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (int) ;

__attribute__((used)) static struct group *
FUNC_2(int (*VAR_7)(union key, struct group *, char *, size_t, struct group **),
    union key VAR_8)
{
 int VAR_9;
 struct group *VAR_10;

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5 == ((void*)0))
   return (((void*)0));
  VAR_6 = VAR_1;
 }
 do {
  VAR_9 = VAR_7(VAR_8, &VAR_4, VAR_5, VAR_6, &VAR_10);
  if (VAR_10 == ((void*)0) && VAR_9 == VAR_0) {
   FUNC_0(VAR_5);
   if ((VAR_6 << 1) > VAR_2) {
    VAR_5 = ((void*)0);
    VAR_3 = VAR_0;
    return (((void*)0));
   }
   VAR_6 <<= 1;
   VAR_5 = FUNC_1(VAR_6);
   if (VAR_5 == ((void*)0))
    return (((void*)0));
  }
 } while (VAR_10 == ((void*)0) && VAR_9 == VAR_0);
 if (VAR_9 != 0)
  VAR_3 = VAR_9;
 return (VAR_10);
}
