
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (long long*,char*,int) ;
 int FUNC_2 (char*,long long,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__** VAR_3 ;

__attribute__((used)) static int
FUNC_5 (CORE_ADDR VAR_4, char *VAR_5)
{
  char VAR_6[VAR_0];
  int VAR_7 = (VAR_4 & 0x0f) / VAR_2;
  long long VAR_8;
  int VAR_9;
  int VAR_10;

  VAR_4 &= ~0x0f;

  VAR_9 = FUNC_3 (VAR_4, VAR_6, VAR_0);



  VAR_10 = FUNC_0 (VAR_6, 0, 5);
  if (VAR_7 == 1 && VAR_3[VAR_10][1] == VAR_1)
    {
      VAR_7 = 2;
    }

  FUNC_1 (&VAR_8, VAR_5, sizeof VAR_8);
  FUNC_2 (VAR_6, VAR_8, VAR_7);
  if (VAR_9 == 0)
    FUNC_4 (VAR_4, VAR_6, VAR_0);

  return VAR_9;
}
