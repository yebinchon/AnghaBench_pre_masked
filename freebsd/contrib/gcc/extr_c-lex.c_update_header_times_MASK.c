
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_fileinfo {int time; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct c_fileinfo* FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 (const char *VAR_3)
{


  if (VAR_1)
    {
      int VAR_4 = FUNC_1 ();
      struct c_fileinfo *VAR_5 = FUNC_0 (VAR_3);
      VAR_2 += VAR_4 - VAR_0;
      VAR_5->time += VAR_4 - VAR_0;
      VAR_0 = VAR_4;
    }
}
