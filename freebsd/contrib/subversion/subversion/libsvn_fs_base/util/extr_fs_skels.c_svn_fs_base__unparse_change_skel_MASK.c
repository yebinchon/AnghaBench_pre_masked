
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int * data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_skel_t ;
typedef int svn_fs_path_change_kind_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int kind; char* path; scalar_t__ noderev_id; scalar_t__ text_mod; scalar_t__ prop_mod; } ;
typedef TYPE_2__ change_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int*) ;
 int * FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (scalar_t__,int *) ;





 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,int *) ;

svn_error_t *
FUNC_7(svn_skel_t **VAR_1,
                                 const change_t *VAR_2,
                                 apr_pool_t *VAR_3)
{
  svn_skel_t *VAR_4;
  svn_string_t *VAR_5;
  svn_fs_path_change_kind_t VAR_6;


  VAR_4 = FUNC_3(VAR_3);


  if (VAR_2->prop_mod)
    FUNC_5(FUNC_6("1", VAR_3), VAR_4);
  else
    FUNC_5(FUNC_4(((void*)0), 0, VAR_3), VAR_4);


  if (VAR_2->text_mod)
    FUNC_5(FUNC_6("1", VAR_3), VAR_4);
  else
    FUNC_5(FUNC_4(((void*)0), 0, VAR_3), VAR_4);


  switch (VAR_2->kind)
    {
    case 128:
      FUNC_5(FUNC_6("reset", VAR_3), VAR_4);
      break;
    case 132:
      FUNC_5(FUNC_6("add", VAR_3), VAR_4);
      break;
    case 131:
      FUNC_5(FUNC_6("delete", VAR_3), VAR_4);
      break;
    case 129:
      FUNC_5(FUNC_6("replace", VAR_3), VAR_4);
      break;
    case 130:
    default:
      FUNC_5(FUNC_6("modify", VAR_3), VAR_4);
      break;
    }


  if (VAR_2->noderev_id)
    {
      VAR_5 = FUNC_2(VAR_2->noderev_id, VAR_3);
      FUNC_5(FUNC_4(VAR_5->data, VAR_5->len, VAR_3),
                        VAR_4);
    }
  else
    {
      FUNC_5(FUNC_4(((void*)0), 0, VAR_3), VAR_4);
    }


  FUNC_5(FUNC_6(VAR_2->path, VAR_3), VAR_4);


  FUNC_5(FUNC_6("change", VAR_3), VAR_4);


  if (! FUNC_0(VAR_4, &VAR_6))
    return FUNC_1("change");
  if (VAR_6 != VAR_2->kind)
    return FUNC_1("change");
  *VAR_1 = VAR_4;
  return VAR_0;
}
