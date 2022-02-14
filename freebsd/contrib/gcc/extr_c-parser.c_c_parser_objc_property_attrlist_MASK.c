
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5 (c_parser *VAR_4)
{
  while (FUNC_2 (VAR_4, VAR_0)
  && FUNC_2 (VAR_4, VAR_2))
    {
      FUNC_3 (VAR_4);

      if (FUNC_2 (VAR_4, VAR_1)
   && FUNC_2 (VAR_4, VAR_0)
   && FUNC_2 (VAR_4, VAR_2))
 FUNC_4 (0, "property attributes must be separated by a comma");

      if (FUNC_1 (VAR_4, VAR_1)
   || FUNC_1 (VAR_4, VAR_3) )
 FUNC_0 (VAR_4);
    }
}
