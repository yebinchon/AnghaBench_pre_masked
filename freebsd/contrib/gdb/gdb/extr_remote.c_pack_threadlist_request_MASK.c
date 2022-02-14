
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadref ;


 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,int *) ;

__attribute__((used)) static char *
FUNC_3 (char *VAR_0, int VAR_1, int VAR_2,
    threadref *VAR_3)
{
  *VAR_0++ = 'q';
  *VAR_0++ = 'L';
  VAR_0 = FUNC_1 (VAR_0, VAR_1);
  VAR_0 = FUNC_0 (VAR_0, VAR_2);
  VAR_0 = FUNC_2 (VAR_0, VAR_3);
  *VAR_0 = '\0';
  return VAR_0;
}
