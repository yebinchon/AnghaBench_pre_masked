
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,unsigned int) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_5 (CORE_ADDR VAR_4, char *VAR_5, unsigned int VAR_6)
{
  char VAR_7[VAR_1];
  int VAR_8, VAR_9;

  FUNC_4 (VAR_7, sizeof VAR_7, "/proc/%d/auxv", VAR_3);

  VAR_8 = FUNC_2 (VAR_7, VAR_0);
  if (VAR_8 < 0)
    return -1;

  if (VAR_4 != (CORE_ADDR) 0
      && FUNC_1 (VAR_8, (off_t) VAR_4, VAR_2) != (off_t) VAR_4)
    VAR_9 = -1;
  else
    VAR_9 = FUNC_3 (VAR_8, VAR_5, VAR_6);

  FUNC_0 (VAR_8);

  return VAR_9;
}
