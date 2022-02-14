
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint32_t ;
typedef size_t apr_size_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char const*,size_t) ;
 size_t FUNC_1 (int *,void const*,size_t) ;

void
FUNC_2(apr_uint32_t VAR_2[4],
                    const void *VAR_3,
                    apr_size_t VAR_4)
{
  apr_size_t VAR_5;

  apr_size_t VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
    VAR_2[VAR_6] = VAR_0;


  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);


  VAR_2[0] = FUNC_0(VAR_2[0], (const char *)VAR_3 + VAR_5,
                       VAR_4 - VAR_5);
}
