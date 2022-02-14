
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs_ino_t ;


 scalar_t__ FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(ufs_ino_t VAR_0, void *VAR_1, size_t VAR_2)
{

 if ((size_t)FUNC_0(VAR_0, VAR_1, VAR_2) != VAR_2) {
  FUNC_1("Invalid %s\n", "format");
  return (-1);
 }
 return (0);
}
