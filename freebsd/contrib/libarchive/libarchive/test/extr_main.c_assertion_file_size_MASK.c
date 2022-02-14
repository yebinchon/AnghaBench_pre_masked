
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int int64_t ;
struct TYPE_3__ {int nFileSizeLow; scalar_t__ nFileSizeHigh; } ;
typedef TYPE_1__ BY_HANDLE_FILE_INFORMATION ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,char*,char const*,long,long) ;
 int FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char const*,TYPE_1__*) ;

int
FUNC_5(const char *VAR_0, int VAR_1, const char *VAR_2, long VAR_3)
{
 int64_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_0, VAR_1);







 {
  struct stat VAR_6;
  VAR_5 = FUNC_3(VAR_2, &VAR_6);
  VAR_4 = VAR_6.st_size;
 }

 if (VAR_5 == 0 && VAR_4 == VAR_3)
   return (1);
 FUNC_2(VAR_0, VAR_1, "File %s has size %ld, expected %ld",
     VAR_2, (long)VAR_4, (long)VAR_3);
 FUNC_1(((void*)0));
 return (0);
}
