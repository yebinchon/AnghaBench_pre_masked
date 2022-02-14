
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_nlink; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
 struct stat VAR_1;
 FUNC_0(0, FUNC_1(VAR_0, &VAR_1));
 return VAR_1.st_nlink;
}
