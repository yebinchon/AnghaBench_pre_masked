
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum edit_key_code { ____Placeholder_edit_key_code } edit_key_code ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,char) ;
 int FUNC_4 (int,int,char) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static enum edit_key_code FUNC_7(char *VAR_1)
{
 char VAR_2, *VAR_3;
 int VAR_4 = -1, VAR_5 = -1;
 enum edit_key_code VAR_6 = VAR_0;

 VAR_2 = '\0';
 for (VAR_3 = VAR_1; *VAR_3; VAR_3++)
  VAR_2 = *VAR_3;

 if (VAR_1[1] >= '0' && VAR_1[1] <= '9') {
  VAR_4 = FUNC_0(&VAR_1[1]);
  VAR_3 = FUNC_5(VAR_1, ';');
  if (VAR_3)
   VAR_5 = FUNC_0(VAR_3 + 1);
 }

 if (VAR_1[0] == '[')
  VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_2);
 else if (VAR_1[0] == 'O')
  VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_2);

 if (VAR_6 != VAR_0)
  return VAR_6;

 FUNC_1();
 FUNC_6("\rUnknown escape sequence '%s'\n", VAR_1);
 FUNC_2();
 return VAR_0;
}
