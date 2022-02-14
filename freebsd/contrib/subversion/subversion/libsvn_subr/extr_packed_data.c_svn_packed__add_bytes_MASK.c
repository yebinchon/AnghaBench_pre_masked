
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int packed; int lengths_stream; } ;
typedef TYPE_1__ svn_packed__byte_stream_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char const*,int ) ;

void
FUNC_2(svn_packed__byte_stream_t *VAR_0,
                      const char *VAR_1,
                      apr_size_t VAR_2)
{
  FUNC_0(VAR_0->lengths_stream, VAR_2);
  FUNC_1(VAR_0->packed, VAR_1, VAR_2);
}
