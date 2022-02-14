
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int fdpath ;
typedef int DIR ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 long FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int * FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,long) ;
 long FUNC_8 (char*,char**,int) ;
 long FUNC_9 (int ) ;

void
FUNC_10(int VAR_4)
{
    long VAR_5, VAR_6;
    {
 VAR_6 = FUNC_3();

 if (VAR_6 < 0)
     VAR_6 = VAR_1;

 for (VAR_5 = VAR_4; VAR_5 < VAR_6; VAR_5++)
     (void) FUNC_0((int) VAR_5);
    }
}
