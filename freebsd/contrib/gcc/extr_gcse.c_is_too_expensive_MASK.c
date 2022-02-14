
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SBITMAP_ELT_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,char const*,int,int) ;

__attribute__((used)) static bool
FUNC_3 (const char *VAR_4)
{
  if (VAR_3 > 20000 + VAR_2 * 4)
    {
      FUNC_2 (VAR_1,
        "%s: %d basic blocks and %d edges/basic block",
        VAR_4, VAR_2, VAR_3 / VAR_2);

      return 1;
    }



  if ((VAR_2
       * FUNC_0 (FUNC_1 ())
       * sizeof (SBITMAP_ELT_TYPE)) > VAR_0)
    {
      FUNC_2 (VAR_1,
        "%s: %d basic blocks and %d registers",
        VAR_4, VAR_2, FUNC_1 ());

      return 1;
    }

  return 0;
}
