
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_ino; int st_nlink; } ;
struct ViceIoctl {char* out; char* in; int out_size; scalar_t__ in_size; } ;
typedef scalar_t__ ino_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ,struct ViceIoctl*,int ) ;
 int FUNC_3 (char const*,struct stat*) ;
 char* FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static int
FUNC_9 (const char *VAR_4, struct stat *VAR_5)
{
    return FUNC_3 (VAR_4, VAR_5);
}
