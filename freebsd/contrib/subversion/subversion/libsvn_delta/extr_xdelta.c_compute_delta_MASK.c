
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta__ops_baton_t ;
struct blocks {int* flags; } ;
typedef int apr_uint32_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int,char const,char const) ;
 int FUNC_1 (struct blocks*,int,char const*,int,char const*,int,int*,int*,int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int,struct blocks*,int *) ;
 int FUNC_5 (int *,char const*,int,char const*,int,int,int *) ;
 int FUNC_6 (char const*,char const*,int) ;
 int FUNC_7 (char const*,char const*,int) ;
 int FUNC_8 (int *,int ,int,int,char const*,int *) ;
 int FUNC_9 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(svn_txdelta__ops_baton_t *VAR_3,
              const char *VAR_4,
              apr_size_t VAR_5,
              const char *VAR_6,
              apr_size_t VAR_7,
              apr_pool_t *VAR_8)
{
  struct blocks VAR_9;
  apr_uint32_t VAR_10;
  apr_size_t VAR_11 = 0, VAR_12 = 0, VAR_13;




  VAR_11 = FUNC_6(VAR_4, VAR_6, VAR_5 > VAR_7 ? VAR_7 : VAR_5);
  if ((VAR_11 > 4) || (VAR_11 == VAR_7))
    {
      FUNC_8(VAR_3, VAR_2,
                             0, VAR_11, ((void*)0), VAR_8);
      VAR_12 = VAR_11;
    }
  else
    VAR_11 = 0;



  if ((VAR_7 - VAR_11 < VAR_0) || (VAR_5 < VAR_0))
    {
      FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_11, VAR_8);
      return;
    }

  VAR_13 = VAR_7 - VAR_0;


  FUNC_4(VAR_4, VAR_5, &VAR_9, VAR_8);


  VAR_10 = FUNC_3(VAR_6 + VAR_11);
  while (VAR_11 < VAR_13)
    {
      apr_size_t VAR_14;
      apr_size_t VAR_15;



      while (!(VAR_9.flags[FUNC_2(VAR_10)] & (1 << (VAR_10 & 7)))
             && VAR_11 < VAR_13)
        {
          VAR_10 = FUNC_0(VAR_10, VAR_6[VAR_11], VAR_6[VAR_11+VAR_0]);
          VAR_11++;
        }




      VAR_14 = FUNC_1(&VAR_9, VAR_10, VAR_4, VAR_5, VAR_6, VAR_7,
                            &VAR_11, &VAR_15, VAR_12);



      if (VAR_14 == 0)
        {


          if (VAR_11 + VAR_0 < VAR_7)
            VAR_10 = FUNC_0(VAR_10, VAR_6[VAR_11], VAR_6[VAR_11+VAR_0]);

          VAR_11++;
        }
      else
        {

          if (VAR_11 - VAR_12 > 0)
            FUNC_8(VAR_3, VAR_1,
                                   0, VAR_11 - VAR_12,
                                   VAR_6 + VAR_12, VAR_8);
          else
            {


              apr_size_t VAR_16 = FUNC_7
                                 (VAR_4 + VAR_15, VAR_6 + VAR_11, VAR_15 < VAR_11 ? VAR_15 : VAR_11);
              if (VAR_16 > 0)
                {
                  VAR_16 = FUNC_9(VAR_3, VAR_16);
                  VAR_15 -= VAR_16;
                  VAR_14 += VAR_16;
                  VAR_11 -= VAR_16;
                }
            }



          VAR_11 += VAR_14;
          VAR_12 = VAR_11;
          FUNC_8(VAR_3, VAR_2,
                                 VAR_15, VAR_14, ((void*)0), VAR_8);




          if (VAR_11 + VAR_0 <= VAR_7)
            VAR_10 = FUNC_3(VAR_6 + VAR_11);
        }
    }


  FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_12, VAR_8);
}
