
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;
struct protoent {int * p_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct protoent* FUNC_1 (int) ;
 struct servent* FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_10(char *VAR_2, char **VAR_3, int VAR_4, int VAR_5)
{
 char *VAR_6, *VAR_7;
 char *VAR_8;
 int VAR_9;

 *VAR_3 = VAR_2;
 if (*VAR_2 == '\0')
  return 0;

 if (FUNC_4(*VAR_2))
  return FUNC_9(VAR_2, VAR_3, VAR_4);




 for (VAR_8 = VAR_2; *VAR_8 && (FUNC_3(*VAR_8) || *VAR_8 == '\\' ||
     *VAR_8 == '_' || *VAR_8 == '.') ; VAR_8++)
  if (*VAR_8 == '\\' && VAR_8[1] != '\0')
   VAR_8++;

 VAR_7 = FUNC_7(VAR_8 - VAR_2 + 1, 1);




 for (VAR_6 = VAR_2, VAR_9 = 0; VAR_6 != VAR_8 ; VAR_6++)
  if (*VAR_6 != '\\')
   VAR_7[VAR_9++] = *VAR_6;
 VAR_7[VAR_9++] = '\0';

 if (VAR_5 == VAR_0) {
  VAR_9 = FUNC_5(VAR_1, VAR_7);
  FUNC_0(VAR_7);
  if (VAR_9 != -1) {
   *VAR_3 = VAR_8;
   return VAR_9;
  }
 } else {
  struct protoent *VAR_10 = ((void*)0);
  struct servent *VAR_11;

  if (VAR_5 != 0)
   VAR_10 = FUNC_1(VAR_5);
  FUNC_8(1);
  VAR_11 = FUNC_2(VAR_7, VAR_10 ? VAR_10->p_name : ((void*)0));
  FUNC_0(VAR_7);
  if (VAR_11 != ((void*)0)) {
   *VAR_3 = VAR_8;
   return FUNC_6(VAR_11->s_port);
  }
 }
 return 0;
}
