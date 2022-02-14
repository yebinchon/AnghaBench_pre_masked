
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (void*,int,size_t,int *) ;
 int FUNC_2 (char*,int ,int ,char*) ;
 int FUNC_3 (char*,int ,char*,unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_2, void *VAR_3, size_t VAR_4, int VAR_5,
    char *VAR_6)
{
 size_t VAR_7;

 VAR_7 = FUNC_1(VAR_3, 1, VAR_4, VAR_2);
 if (VAR_7 != VAR_4) {
  if (FUNC_0(VAR_2)) {
   FUNC_2(VAR_6, VAR_0,
       VAR_1, "error reading dump file");
  } else {
   if (VAR_7 == 0 && !VAR_5)
    return (0);
   FUNC_3(VAR_6, VAR_0,
       "truncated dump file; tried to read %lu bytes, only got %lu",
       (unsigned long)VAR_4,
       (unsigned long)VAR_7);
  }
  return (-1);
 }
 return (1);
}
