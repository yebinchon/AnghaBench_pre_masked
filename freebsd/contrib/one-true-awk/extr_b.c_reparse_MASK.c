
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uschar ;
typedef int Node ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * VAR_2 ;
 int * FUNC_2 (int ,int ,int ) ;
 int * VAR_3 ;
 int * FUNC_3 () ;
 char FUNC_4 () ;
 char VAR_4 ;

Node *FUNC_5(const char *VAR_5)
{
 Node *VAR_6;

 FUNC_1( ("reparse <%s>\n", VAR_5) );
 VAR_2 = VAR_3 = (uschar *) VAR_5;
 VAR_4 = FUNC_4();

 if (VAR_4 == '\0') {

  return(FUNC_2(VAR_0, VAR_1, VAR_1));
 }
 VAR_6 = FUNC_3();
 if (VAR_4 != '\0')
  FUNC_0("syntax error in regular expression %s at %s", VAR_2, VAR_3);
 return(VAR_6);
}
