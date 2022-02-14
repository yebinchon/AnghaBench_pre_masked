
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 char* VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_3 ( const Char* VAR_2 )
{
   FUNC_1 ( VAR_1,
             "\n%s: PANIC -- internal consistency error:\n"
             "\t%s\n"
             "\tThis is a BUG.  Please report it to:\n"
             "\tbzip2-devel@sourceware.org\n",
             VAR_0, VAR_2 );
   FUNC_2();
   FUNC_0( 3 );
}
