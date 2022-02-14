
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int * data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int const apr_ssize_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (void const*,scalar_t__,int * const,int const,int) ;

__attribute__((used)) static apr_ssize_t
FUNC_2(int VAR_4,
                      const char *VAR_5, apr_size_t VAR_6,
                      svn_membuf_t *VAR_7)
{
  const int VAR_8 = (VAR_6 == VAR_0
                        ? VAR_2 : 0);

  for (;;)
    {
      apr_int32_t *const VAR_9 = VAR_7->data;
      const apr_ssize_t VAR_10 = VAR_7->size / sizeof(*VAR_9);
      const apr_ssize_t VAR_11 =
        FUNC_1((const void*) VAR_5, VAR_6, VAR_9, VAR_10,
                           VAR_1 | VAR_3
                           | VAR_4 | VAR_8);

      if (VAR_11 < 0 || VAR_11 <= VAR_10)
        return VAR_11;


      FUNC_0(VAR_7, VAR_11 * sizeof(*VAR_9));
    }
}
