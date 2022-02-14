
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
struct _stati64 {int st_mode; } ;
struct __stat64 {int st_mode; } ;
typedef int U64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,struct __stat64*) ;
 int FUNC_3 (char const*,struct _stati64*) ;
 int FUNC_4 (char const*,struct stat*) ;

U64 FUNC_5(const char* VAR_2)
{
    if (!FUNC_1(VAR_2)) return VAR_1;
    { int VAR_3;
        struct stat VAR_4;
        VAR_3 = FUNC_4(VAR_2, &VAR_4);
        if (VAR_3 || !FUNC_0(VAR_4.st_mode)) return VAR_1;

        return (U64)VAR_4.st_size;
    }
}
