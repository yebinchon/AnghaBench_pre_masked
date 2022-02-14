
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; size_t valueSize; size_t nameLen; char* value; int * name; scalar_t__ putenv; } ;


 int FUNC_0 () ;
 int * FUNC_1 (char const*,size_t,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (int) ;
 char* FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (char*,char const*) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_3, size_t VAR_4, const char *VAR_5, int VAR_6)
{
 bool VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;
 size_t VAR_11;


 VAR_9 = VAR_2 - 1;
 VAR_10 = VAR_0;
 VAR_11 = FUNC_7(VAR_5);
 VAR_7 = 0;
 if (FUNC_1(VAR_3, VAR_4, &VAR_9, 0) != ((void*)0)) {

  if (VAR_1[VAR_9].active) {
   if (VAR_6 == 0)
    return (0);
   VAR_1[VAR_9].active = 0;
   VAR_10--;
  }


  if (VAR_1[VAR_9].putenv)
   FUNC_3(VAR_9);


  else if (VAR_1[VAR_9].valueSize >= VAR_11)
   VAR_7 = 1;
 }


 if (! VAR_7) {

  VAR_9 = VAR_2;
  if (!FUNC_0())
   return (-1);


  VAR_1[VAR_9].name = FUNC_4(VAR_4 + sizeof ("=") +
      VAR_11);
  if (VAR_1[VAR_9].name == ((void*)0)) {
   VAR_2--;
   return (-1);
  }
  VAR_1[VAR_9].nameLen = VAR_4;
  VAR_1[VAR_9].valueSize = VAR_11;


  VAR_8 = FUNC_5(VAR_1[VAR_9].name, VAR_3, VAR_4);
  *VAR_8++ = '=';
 }
 else
  VAR_8 = VAR_1[VAR_9].value;


 FUNC_6(VAR_8, VAR_5);
 VAR_1[VAR_9].value = VAR_8;
 VAR_1[VAR_9].active = 1;
 VAR_10++;


 if (VAR_7 && VAR_10 == VAR_0)
  return (0);
 else
  return (FUNC_2(VAR_10));
}
