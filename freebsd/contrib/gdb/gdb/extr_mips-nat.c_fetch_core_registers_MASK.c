
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int) ;
 unsigned int VAR_5 ;
 unsigned int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_6, unsigned VAR_7, int VAR_8,
        CORE_ADDR VAR_9)
{
  int VAR_10;
  unsigned int VAR_11;
  int VAR_12 = -1;
  VAR_5 = -VAR_9;

  char VAR_13[VAR_2];
  FUNC_2 (VAR_13, 0, VAR_2);
  if (VAR_5 > VAR_7)



    FUNC_1 ("Old mips core file can't be processed on this machine.");


  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
    {
      VAR_11 = FUNC_3 (VAR_10, VAR_5);
      if (VAR_11 >= VAR_7)
 {
   if (VAR_12 < 0)
     VAR_12 = VAR_10;
 }
      else
 {
   FUNC_4 (VAR_10, VAR_6 + VAR_11);
 }
    }
  if (VAR_12 >= 0)
    {
      FUNC_1 ("Register %s not found in core file.", FUNC_0 (VAR_12));
    }
  FUNC_4 (VAR_4, VAR_13);

  FUNC_4 (VAR_0, VAR_13);
}
