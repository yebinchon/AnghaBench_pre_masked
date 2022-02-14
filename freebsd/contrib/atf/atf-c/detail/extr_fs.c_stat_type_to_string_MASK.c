
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;

__attribute__((used)) static
const char *
FUNC_0(const int VAR_9)
{
    const char *VAR_10;

    if (VAR_9 == VAR_1)
        VAR_10 = "block device";
    else if (VAR_9 == VAR_2)
        VAR_10 = "character device";
    else if (VAR_9 == VAR_3)
        VAR_10 = "directory";
    else if (VAR_9 == VAR_4)
        VAR_10 = "named pipe";
    else if (VAR_9 == VAR_5)
        VAR_10 = "symbolic link";
    else if (VAR_9 == VAR_6)
        VAR_10 = "regular file";
    else if (VAR_9 == VAR_7)
        VAR_10 = "socket";
    else if (VAR_9 == VAR_8)
        VAR_10 = "whiteout";
    else {
        VAR_0;
        VAR_10 = ((void*)0);
    }

    return VAR_10;
}
