
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_uid; scalar_t__ st_gid; } ;
typedef scalar_t__ GETGROUPS_T ;
typedef int Char ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 long FUNC_3 (int,scalar_t__*) ;
 char* FUNC_4 (int const*) ;
 int FUNC_5 (char*,struct stat*) ;
 long FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__*) ;
 scalar_t__* FUNC_8 (long) ;

__attribute__((used)) static int
FUNC_9(const Char *VAR_10, int VAR_11)
{



    char *VAR_12 = FUNC_4(VAR_10);

    if (*VAR_12 == '\0')
 return 1;


    return FUNC_2(VAR_12, VAR_11);
}
