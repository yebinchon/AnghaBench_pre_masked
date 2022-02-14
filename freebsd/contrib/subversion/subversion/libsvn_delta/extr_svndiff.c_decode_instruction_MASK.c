
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int action_code; int length; int offset; } ;
typedef TYPE_1__ svn_txdelta_op_t ;
typedef enum svn_delta_action { ____Placeholder_svn_delta_action } svn_delta_action ;
typedef int apr_size_t ;


 unsigned char* FUNC_0 (int*,unsigned char const*,unsigned char const*) ;
 int VAR_0 ;

__attribute__((used)) static const unsigned char *
FUNC_1(svn_txdelta_op_t *VAR_1,
                   const unsigned char *VAR_2,
                   const unsigned char *VAR_3)
{
  apr_size_t VAR_4;
  apr_size_t VAR_5;

  if (VAR_2 == VAR_3)
    return ((void*)0);


  VAR_4 = *VAR_2++;


  VAR_5 = (VAR_4 >> 6) & 0x3;
  if (VAR_5 >= 0x3)
      return ((void*)0);



  VAR_1->action_code = (enum svn_delta_action)(VAR_5);


  VAR_1->length = VAR_4 & 0x3f;
  if (VAR_1->length == 0)
    {
      VAR_2 = FUNC_0(&VAR_1->length, VAR_2, VAR_3);
      if (VAR_2 == ((void*)0))
        return ((void*)0);
    }
  if (VAR_5 != VAR_0)
    {
      VAR_2 = FUNC_0(&VAR_1->offset, VAR_2, VAR_3);
      if (VAR_2 == ((void*)0))
        return ((void*)0);
    }

  return VAR_2;
}
