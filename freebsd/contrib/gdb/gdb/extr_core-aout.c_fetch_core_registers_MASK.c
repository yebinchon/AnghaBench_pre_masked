
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int CORE_ADDR ;


 unsigned int FUNC_0 (int,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2, unsigned VAR_3, int VAR_4,
        CORE_ADDR VAR_5)
{
  int VAR_6;
  CORE_ADDR VAR_7;
  int VAR_8 = -1;
  CORE_ADDR VAR_9 = -VAR_5;
  int VAR_10 = VAR_1;







  if (VAR_9 > VAR_3)
    VAR_9 -= VAR_0;

  for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
    {
      VAR_7 = FUNC_0 (VAR_6, VAR_9);
      if (VAR_7 >= VAR_3
   && VAR_8 < 0)
 VAR_8 = VAR_6;
      else
 FUNC_3 (VAR_6, VAR_2 + VAR_7);
    }

  if (VAR_8 >= 0)
    FUNC_2 ("Register %s not found in core file.", FUNC_1 (VAR_8));
}
