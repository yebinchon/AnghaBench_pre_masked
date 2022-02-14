
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; int target; int text; int props; scalar_t__ is_subbranch_root; } ;
typedef TYPE_1__ svn_element__payload_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ) ;



 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_2__**,int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;

svn_boolean_t
FUNC_7(const svn_element__payload_t *VAR_3,
                           const svn_element__payload_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  apr_array_header_t *VAR_6;

  FUNC_1(FUNC_3(VAR_3));
  FUNC_1(FUNC_3(VAR_4));


  if (VAR_3->is_subbranch_root && VAR_4->is_subbranch_root)
    {
      return VAR_1;
    }
  else if (VAR_3->is_subbranch_root || VAR_4->is_subbranch_root)
    {
      return VAR_0;
    }


  FUNC_0(VAR_3->kind != VAR_2
                           && VAR_4->kind != VAR_2);

  if (VAR_3->kind != VAR_4->kind)
    {
      return VAR_0;
    }

  FUNC_4(FUNC_5(&VAR_6,
                                 VAR_3->props, VAR_4->props,
                                 VAR_5));

  if (VAR_6->nelts != 0)
    {
      return VAR_0;
    }
  switch (VAR_3->kind)
    {
    case 130:
      break;
    case 129:
      if (! FUNC_6(VAR_3->text, VAR_4->text))
        {
          return VAR_0;
        }
      break;
    case 128:
      if (FUNC_2(VAR_3->target, VAR_4->target) != 0)
        {
          return VAR_0;
        }
      break;
    default:
      break;
    }

  return VAR_1;
}
