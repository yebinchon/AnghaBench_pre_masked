
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int off_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static off_t
FUNC_2(const char * restrict VAR_0)
{
 struct stat VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1);
 FUNC_0(VAR_2 == 0);
 return VAR_1.st_size;
}
