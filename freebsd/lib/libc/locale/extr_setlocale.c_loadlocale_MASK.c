
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** components; } ;
struct TYPE_3__ {char* locale; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 TYPE_2__ VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 int * FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static char *
FUNC_10(int VAR_6)
{
 char *VAR_7 = VAR_5[VAR_6];
 char *VAR_8 = VAR_3[VAR_6];
 int (*VAR_9) (const char *);
 int VAR_10;

 if ((VAR_7[0] == '.' &&
     (VAR_7[1] == '\0' || (VAR_7[1] == '.' && VAR_7[2] == '\0'))) ||
     FUNC_7(VAR_7, '/') != ((void*)0)) {
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 VAR_10 = VAR_4;
 VAR_4 = FUNC_1();
 if (VAR_4 != 0)
  return (((void*)0));
 VAR_4 = VAR_10;

 switch (VAR_6) {
 case 132:
  VAR_9 = FUNC_6;
  break;
 case 133:
  VAR_9 = FUNC_0;
  break;
 case 128:
  VAR_9 = FUNC_5;
  break;
 case 129:
  VAR_9 = FUNC_4;
  break;
 case 130:
  VAR_9 = FUNC_3;
  break;
 case 131:
  VAR_9 = FUNC_2;
  break;
 default:
  VAR_4 = VAR_0;
  return (((void*)0));
 }

 if (FUNC_8(VAR_7, VAR_8) == 0)
  return (VAR_8);

 if (VAR_9(VAR_7) != VAR_1) {
  (void)FUNC_9(VAR_8, VAR_7);
  (void)FUNC_9(VAR_2.components[VAR_6-1]->locale, VAR_7);
  return (VAR_8);
 }

 return (((void*)0));
}
