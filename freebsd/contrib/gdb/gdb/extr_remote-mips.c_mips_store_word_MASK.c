
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char,int ,unsigned int,int*,int ,int *) ;
 int FUNC_1 (char*,int,unsigned int) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_2, unsigned int VAR_3, char *VAR_4)
{
  int VAR_5;
  unsigned int VAR_6;

  VAR_6 = FUNC_0 ('D', VAR_2, VAR_3, &VAR_5,
         VAR_1, ((void*)0));
  if (VAR_5)
    {

      VAR_6 = FUNC_0 ('I', VAR_2, VAR_3, &VAR_5,
      VAR_1, ((void*)0));
      if (VAR_5)
 return VAR_0;
    }
  if (VAR_4 != ((void*)0))
    FUNC_1 (VAR_4, 4, VAR_6);
  return 0;
}
