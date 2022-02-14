
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int off_t ;


 int FUNC_0 (int,char const*,struct stat*,int ) ;

__attribute__((used)) static off_t
FUNC_1(int VAR_0, const char *VAR_1)
{
 struct stat VAR_2;


 if (FUNC_0(VAR_0, VAR_1, &VAR_2, 0) == -1)
  return (0);
 return (VAR_2.st_size);
}
