
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int asymbol ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,void const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_6 (const void *VAR_4, const void *VAR_5)
{
  asymbol *VAR_6, *VAR_7;
  const char *VAR_8, *VAR_9;

  VAR_6 = FUNC_3 (VAR_0, VAR_1, VAR_4, VAR_2);
  VAR_7 = FUNC_3 (VAR_0, VAR_1, VAR_5, VAR_3);
  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
    FUNC_1 (FUNC_2 (VAR_0));

  VAR_8 = FUNC_0 (VAR_6);
  VAR_9 = FUNC_0 (VAR_7);

  if (VAR_9 == ((void*)0))
    return VAR_8 != ((void*)0);
  if (VAR_8 == ((void*)0))
    return -1;
  return FUNC_4 (VAR_8, VAR_9);

}
