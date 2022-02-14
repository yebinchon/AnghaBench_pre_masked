
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static
void FUNC_5 ( Char* VAR_3, Char* VAR_4 )
{
   if ( FUNC_3(VAR_4) > VAR_0-10 ) {
      FUNC_1 (
         VAR_2,
         "bzip2: file name\n`%s'\n"
         "is suspiciously (more than %d chars) long.\n"
         "Try using a reasonable file name instead.  Sorry! :-)\n",
         VAR_4, VAR_0-10
      );
      FUNC_2(1);
      FUNC_0(VAR_1);
   }

  FUNC_4(VAR_3,VAR_4,VAR_0-10);
  VAR_3[VAR_0-10]='\0';
}
