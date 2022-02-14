
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {long st_size; } ;


 int FUNC_0 (int ,char*,long) ;
 int FUNC_1 (int,struct stat*) ;
 int VAR_0 ;

size_t FUNC_2 (int VAR_1)
{
 int VAR_2;
 struct stat VAR_3;

 VAR_2 = FUNC_1 (VAR_1, &VAR_3);
 FUNC_0 (VAR_0, "filesize: %ld\n", VAR_2 < 0 ? (long)VAR_2 : VAR_3.st_size);
 if (VAR_2 < 0)
  return VAR_2;
 return (size_t) VAR_3.st_size;
}
