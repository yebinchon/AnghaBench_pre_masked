
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* origin_path; } ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char const*) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static char *
FUNC_8(Obj_Entry *VAR_0, char *VAR_1, const char *VAR_2,
    const char *VAR_3, bool VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = FUNC_4(VAR_2);





 for (VAR_5 = VAR_1, VAR_11 = 0;; VAR_5 = VAR_6 + VAR_10, VAR_11++) {
  VAR_6 = FUNC_5(VAR_5, VAR_2);
  if (VAR_6 == ((void*)0))
   break;
 }
 if (VAR_11 == 0 || (VAR_0 != ((void*)0) && !FUNC_2(VAR_0)))
  return (VAR_4 ? VAR_1 : FUNC_7(VAR_1));
 if (VAR_0 != ((void*)0))
  VAR_3 = VAR_0->origin_path;





 VAR_9 = FUNC_4(VAR_3);
 VAR_12 = FUNC_4(VAR_1);
 VAR_13 = VAR_12 + (VAR_9 - VAR_10) * VAR_11;
 VAR_7 = FUNC_6(VAR_13 + 1);




 for (VAR_5 = VAR_1, VAR_8 = VAR_7, *VAR_8 = '\0';;) {
  VAR_6 = FUNC_5(VAR_5, VAR_2);
  if (VAR_6 != ((void*)0)) {

   FUNC_1(VAR_8, VAR_5, VAR_6 - VAR_5);
   VAR_8 += VAR_6 - VAR_5;

   FUNC_1(VAR_8, VAR_3, VAR_9);
   VAR_8 += VAR_9;
   *VAR_8 = '\0';
   VAR_5 = VAR_6 + VAR_10;
  } else
   break;
 }


 FUNC_3(VAR_8, VAR_5);
 if (VAR_4)
  FUNC_0(VAR_1);
 return (VAR_7);
}
