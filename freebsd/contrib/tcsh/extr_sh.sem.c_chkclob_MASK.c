
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;


 int FUNC_0 (int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_4)
{
    struct stat VAR_5;

    if (FUNC_3(VAR_4, &VAR_5) < 0)
 return;
    if (FUNC_1(VAR_5.st_mode))
 return;
    if (VAR_3 & VAR_2 && VAR_5.st_size == 0)
 return;
    if (VAR_3 & VAR_1) {
 if (FUNC_2(FUNC_0(22, 15,
     "Do you really want to overwrite an existing file? [N/y] ")))
     return;
    }

    FUNC_4(VAR_0, VAR_4);
}
