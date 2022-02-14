
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const svn_boolean_t ;
typedef int svn_atomic_t ;
typedef int const (* init_func_t ) (int *) ;
typedef int init_baton_t ;


 int VAR_0 ;
 int const VAR_1 ;




 int const VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int volatile*,int const,int const) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(volatile svn_atomic_t *VAR_3,
          init_func_t VAR_4, init_baton_t *VAR_5)
{
  svn_atomic_t VAR_6 = FUNC_2(VAR_3,
                                       129,
                                       128);

  for (;;)
    {
      switch (VAR_6)
        {
        case 128:
          {
            const svn_boolean_t VAR_7 = VAR_4(VAR_5);
            const svn_atomic_t VAR_8 = (VAR_7
                                             ? 131
                                             : 130);

            FUNC_2(VAR_3, VAR_8,
                           129);
            return VAR_7;
          }

        case 129:

          FUNC_1(VAR_0 / 1000);
          VAR_6 = FUNC_2(VAR_3,
                                  128,
                                  128);
          continue;

        case 130:
          return VAR_1;

        case 131:
          return VAR_2;

        default:

          FUNC_0();
        }
    }
}
