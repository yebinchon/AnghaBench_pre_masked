
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int apr_size_t ;


 scalar_t__ FUNC_0 (char const) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int *,char const) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void
FUNC_4(svn_stringbuf_t *VAR_2, const char *VAR_3, apr_size_t VAR_4,
             int *VAR_5)
{
  char VAR_6[3];
  const char *VAR_7;


  for (VAR_7 = VAR_3; VAR_7 < VAR_3 + VAR_4; VAR_7++)
    {

      if (FUNC_0(*VAR_7))
        {
          FUNC_1(VAR_2, *VAR_7);
          (*VAR_5)++;
        }
      else
        {
          VAR_6[0] = '=';
          VAR_6[1] = VAR_1[(*VAR_7 >> 4) & 0xf];
          VAR_6[2] = VAR_1[*VAR_7 & 0xf];
          FUNC_2(VAR_2, VAR_6, 3);
          *VAR_5 += 3;
        }


      if (*VAR_5 + 3 > VAR_0)
        {
          FUNC_3(VAR_2, "=\n");
          *VAR_5 = 0;
        }
    }
}
