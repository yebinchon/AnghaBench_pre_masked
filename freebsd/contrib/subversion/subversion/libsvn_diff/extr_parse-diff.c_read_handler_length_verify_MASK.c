
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct length_verify_baton_t {scalar_t__ remaining; int inner; } ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,char*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2, char *VAR_3, apr_size_t *VAR_4)
{
  struct length_verify_baton_t *VAR_5 = VAR_2;
  apr_size_t VAR_6 = *VAR_4;

  FUNC_0(FUNC_3(VAR_5->inner, VAR_3, VAR_4));

  if (*VAR_4 > VAR_5->remaining)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Base85 data expands to longer than declared "
                              "filesize"));
  else if (VAR_6 > *VAR_4 && *VAR_4 != VAR_5->remaining)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Base85 data expands to smaller than declared "
                              "filesize"));

  VAR_5->remaining -= *VAR_4;

  return VAR_1;
}
