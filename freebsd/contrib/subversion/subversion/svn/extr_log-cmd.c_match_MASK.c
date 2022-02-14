
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_membuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const**,char const*,int ,int ,int ,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_4(const char *VAR_3, const char *VAR_4, svn_membuf_t *VAR_5)
{
  svn_error_t *VAR_6;

  VAR_6 = FUNC_3(&VAR_4, VAR_4, FUNC_1(VAR_4), VAR_2, VAR_2, VAR_5);
  if (VAR_6)
    {

      FUNC_2(VAR_6);
      return VAR_1;
    }

  return FUNC_0(VAR_3, VAR_4, 0) == VAR_0;
}
