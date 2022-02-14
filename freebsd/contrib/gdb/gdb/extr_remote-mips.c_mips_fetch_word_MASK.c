
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (char,int ,int ,int*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static unsigned int
FUNC_4 (CORE_ADDR VAR_2)
{
  unsigned int VAR_3;
  int VAR_4;

  VAR_3 = FUNC_1 ('d', VAR_2, 0, &VAR_4, VAR_1, ((void*)0));
  if (VAR_4)
    {

      VAR_3 = FUNC_1 ('i', VAR_2, 0, &VAR_4,
     VAR_1, ((void*)0));
      if (VAR_4)
 FUNC_0 ("Can't read address 0x%s: %s",
      FUNC_2 (VAR_2), FUNC_3 (VAR_0));
    }
  return VAR_3;
}
