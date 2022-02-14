
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffered; void const* buffer; int hashes; } ;
typedef TYPE_1__ svn_fnv1a_32x4__context_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,void const*,scalar_t__) ;
 int FUNC_1 (void const*,char const*,scalar_t__) ;

void
FUNC_2(svn_fnv1a_32x4__context_t *VAR_1,
                       const void *VAR_2,
                       apr_size_t VAR_3)
{
  apr_size_t VAR_4;

  if (VAR_1->buffered)
    {
      apr_size_t VAR_5 = VAR_0 - VAR_1->buffered;
      if (VAR_5 > VAR_3)
        {
          FUNC_1(VAR_1->buffer + VAR_1->buffered, VAR_2, VAR_3);
          VAR_1->buffered += VAR_3;
          return;
        }

      FUNC_1(VAR_1->buffer + VAR_1->buffered, VAR_2, VAR_5);
      VAR_2 = (const char *)VAR_2 + VAR_5;
      VAR_3 -= VAR_5;

      FUNC_0(VAR_1->hashes, VAR_1->buffer, VAR_0);
      VAR_1->buffered = 0;
    }

  VAR_4 = FUNC_0(VAR_1->hashes, VAR_2, VAR_3);
  if (VAR_4 != VAR_3)
    {
      VAR_1->buffered = VAR_3 - VAR_4;
      FUNC_1(VAR_1->buffer,
             (const char*)VAR_2 + VAR_4,
             VAR_3 - VAR_4);
    }
}
