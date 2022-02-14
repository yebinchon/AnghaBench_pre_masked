
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int instruction_type ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long FUNC_0 (char*,int ,int) ;
 long long FUNC_1 (char*,int) ;
 int FUNC_2 (int,char*,int) ;
 int ** VAR_3 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static CORE_ADDR
FUNC_4 (CORE_ADDR VAR_4, instruction_type *VAR_5, long long *VAR_6)
{
  char VAR_7[VAR_0];
  int VAR_8 = (int) (VAR_4 & 0x0f) / VAR_2;
  long long VAR_9;
  int VAR_10;
  if (VAR_8 > 2)
    {
      FUNC_3 ("Can't fetch instructions for slot numbers greater than 2.\n"
        "Using slot 0 instead");
      VAR_8 = 0;
    }

  VAR_4 &= ~0x0f;

  VAR_10 = FUNC_2 (VAR_4, VAR_7, VAR_0);

  if (VAR_10 != 0)
    return 0;

  *VAR_6 = FUNC_1 (VAR_7, VAR_8);
  VAR_9 = FUNC_0 (VAR_7, 0, 5);
  *VAR_5 = VAR_3[(int)VAR_9][VAR_8];

  if (VAR_8 == 2 || (VAR_8 == 1 && *VAR_5 == VAR_1))
    VAR_4 += 16;
  else
    VAR_4 += (VAR_8 + 1) * VAR_2;

  return VAR_4;
}
