
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int ReturnStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;

__attribute__((used)) static ReturnStatus
FUNC_2(int VAR_2, size_t *VAR_3)
{
 struct stat VAR_4;

 if (FUNC_1(VAR_2, &VAR_4) < 0) {
  return VAR_0;
 }

 if (!FUNC_0(VAR_4.st_mode)) {
  return VAR_0;
 }
 if (VAR_4.st_size < 0 || VAR_4.st_size > 0x7fffffff) {
  return VAR_0;
 }

 *VAR_3 = (size_t) VAR_4.st_size;
 return VAR_1;
}
