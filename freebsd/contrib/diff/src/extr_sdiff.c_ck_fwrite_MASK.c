
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (char const*,int,size_t,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (char const *VAR_0, size_t VAR_1, FILE *VAR_2)
{
  if (FUNC_1 (VAR_0, sizeof (char), VAR_1, VAR_2) != VAR_1)
    FUNC_2 (FUNC_0("write failed"));
}
