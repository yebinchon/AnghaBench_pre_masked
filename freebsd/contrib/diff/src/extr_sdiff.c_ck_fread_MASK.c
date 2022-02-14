
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static size_t
FUNC_4 (char *VAR_0, size_t VAR_1, FILE *VAR_2)
{
  size_t VAR_3 = FUNC_2 (VAR_0, sizeof (char), VAR_1, VAR_2);
  if (VAR_3 == 0 && FUNC_1 (VAR_2))
    FUNC_3 (FUNC_0("read failed"));
  return VAR_3;
}
