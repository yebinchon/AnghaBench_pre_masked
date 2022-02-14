
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char**,int ,int *,int ,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(int VAR_6, char **VAR_7)
{
 int VAR_8;
 boolean_t VAR_9 = VAR_0;


 while ((VAR_8 = FUNC_2(VAR_6, VAR_7, "f")) != -1) {
  switch (VAR_8) {
  case 'f':
   VAR_9 = VAR_1;
   break;
  case '?':
   (void) FUNC_1(VAR_4, FUNC_3("invalid option '%c'\n"),
       VAR_3);
   FUNC_4(VAR_0);
  }
 }

 VAR_6 -= VAR_2;
 VAR_7 += VAR_2;


 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_0, ((void*)0), VAR_5, &VAR_9);

 return (VAR_8);
}
