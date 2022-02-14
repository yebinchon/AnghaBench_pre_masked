
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int instr ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,long long*,int) ;
 int FUNC_3 (char*,int ,int) ;
 long long FUNC_4 (char*,int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int,char*,int) ;
 scalar_t__** VAR_4 ;

__attribute__((used)) static int
FUNC_7 (CORE_ADDR VAR_5, char *VAR_6)
{
  char VAR_7[VAR_0];
  int VAR_8 = (int) (VAR_5 & 0x0f) / VAR_3;
  long long VAR_9;
  int VAR_10;
  int VAR_11;

  if (VAR_8 > 2)
    FUNC_0("Can't insert breakpoint for slot numbers greater than 2.");

  VAR_5 &= ~0x0f;

  VAR_10 = FUNC_5 (VAR_5, VAR_7, VAR_0);



  VAR_11 = FUNC_1 (VAR_7, 0, 5);
  if (VAR_8 == 1 && VAR_4[VAR_11][1] == VAR_2)
    {
      VAR_8 = 2;
    }

  VAR_9 = FUNC_4 (VAR_7, VAR_8);
  FUNC_2(VAR_6, &VAR_9, sizeof(VAR_9));
  FUNC_3 (VAR_7, VAR_1, VAR_8);
  if (VAR_10 == 0)
    FUNC_6 (VAR_5, VAR_7, VAR_0);

  return VAR_10;
}
