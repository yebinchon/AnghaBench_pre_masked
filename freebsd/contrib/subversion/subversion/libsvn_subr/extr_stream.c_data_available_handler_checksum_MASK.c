
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct checksum_stream_baton {int proxy; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_0, svn_boolean_t *VAR_1)
{
  struct checksum_stream_baton *VAR_2 = VAR_0;

  return FUNC_0(FUNC_1(VAR_2->proxy,
                                                   VAR_1));
}
