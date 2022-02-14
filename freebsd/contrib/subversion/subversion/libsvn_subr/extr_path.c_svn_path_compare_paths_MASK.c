
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_0,
                       const char *VAR_1)
{
  apr_size_t VAR_2 = FUNC_2(VAR_0);
  apr_size_t VAR_3 = FUNC_2(VAR_1);
  apr_size_t VAR_4 = ((VAR_2 < VAR_3) ? VAR_2 : VAR_3);
  apr_size_t VAR_5 = 0;

  FUNC_0(FUNC_1(VAR_0, VAR_2));
  FUNC_0(FUNC_1(VAR_1, VAR_3));


  while (VAR_5 < VAR_4 && VAR_0[VAR_5] == VAR_1[VAR_5])
    ++VAR_5;


  if ((VAR_2 == VAR_3) && (VAR_5 >= VAR_4))
    return 0;



  if ((VAR_0[VAR_5] == '/') && (VAR_1[VAR_5] == 0))
    return 1;
  if ((VAR_1[VAR_5] == '/') && (VAR_0[VAR_5] == 0))
    return -1;
  if (VAR_0[VAR_5] == '/')
    return -1;
  if (VAR_1[VAR_5] == '/')
    return 1;





  return (unsigned char)(VAR_0[VAR_5]) < (unsigned char)(VAR_1[VAR_5]) ? -1 : 1;
}
