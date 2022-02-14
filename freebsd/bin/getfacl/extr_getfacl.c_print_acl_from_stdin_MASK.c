
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathname ;
typedef int acl_type_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int ,int,int,int,int,int) ;
 int VAR_1 ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(acl_type_t VAR_2, int VAR_3, int VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 char *VAR_8, VAR_9[VAR_0];
 int VAR_10 = 0;

 while (FUNC_0(VAR_9, (int)sizeof(VAR_9), VAR_1)) {
  if ((VAR_8 = FUNC_2(VAR_9, '\n')) != ((void*)0))
   *VAR_8 = '\0';
  if (FUNC_1(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7) == -1) {
   VAR_10 = -1;
  }
 }

 return(VAR_10);
}
