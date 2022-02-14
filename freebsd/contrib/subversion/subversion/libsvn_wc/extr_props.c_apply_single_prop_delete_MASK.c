
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int const*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const svn_string_t **VAR_3,
                         svn_boolean_t *VAR_4,
                         svn_boolean_t *VAR_5,
                         const svn_string_t *VAR_6,
                         const svn_string_t *VAR_7,
                         const svn_string_t *VAR_8)
{
  *VAR_4 = VAR_0;

  if (! VAR_6)
    {
      if (VAR_8
          && !FUNC_0(VAR_8, VAR_7))
        {

          *VAR_4 = VAR_2;
        }
      else
        {
          *VAR_3 = ((void*)0);
          if (VAR_7)


            *VAR_5 = VAR_2;
        }
    }

  else if (FUNC_0(VAR_6, VAR_7))
    {
       if (VAR_8)
         {
           if (FUNC_0(VAR_8, VAR_7))

             *VAR_3 = ((void*)0);
           else
             *VAR_4 = VAR_2;
         }
       else


         *VAR_5 = VAR_2;
    }

  else
    *VAR_4 = VAR_2;

  return VAR_1;
}
