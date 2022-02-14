
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (unsigned char*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(svn_stringbuf_t *VAR_2, const void *VAR_3, apr_size_t VAR_4,
             unsigned char *VAR_5, size_t *VAR_6, size_t *VAR_7,
             svn_boolean_t VAR_8)
{
  char VAR_9[4];
  const char *VAR_10 = VAR_3, *VAR_11 = VAR_10 + VAR_4;
  apr_size_t VAR_12;





  VAR_12 = VAR_4 * 4 / 3 + 4;
  if (VAR_8)
    {

      VAR_12 += VAR_12 / VAR_0;
    }
  FUNC_5(VAR_2, VAR_2->len + VAR_12);


  while ((VAR_11 - VAR_10) >= (3 - *VAR_6))
    {



      if ( *VAR_6 == 0
          && (*VAR_7 == 0 || !VAR_8)
          && (VAR_11 - VAR_10 >= VAR_1))
        {

          FUNC_1(VAR_2, VAR_10);
          VAR_10 += VAR_1;
          *VAR_7 += VAR_0;
        }
      else
        {


          FUNC_2(VAR_5 + *VAR_6, VAR_10, 3 - *VAR_6);
          VAR_10 += (3 - *VAR_6);
          FUNC_0(VAR_5, VAR_9);
          FUNC_4(VAR_2, VAR_9, 4);
          *VAR_6 = 0;
          *VAR_7 += 4;
        }


      if (VAR_8 && *VAR_7 == VAR_0)
        {
          FUNC_3(VAR_2, '\n');
          *VAR_7 = 0;
        }
    }


  FUNC_2(VAR_5 + *VAR_6, VAR_10, VAR_11 - VAR_10);
  *VAR_6 += (VAR_11 - VAR_10);
}
