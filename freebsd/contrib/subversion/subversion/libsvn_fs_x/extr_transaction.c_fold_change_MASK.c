
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_10__ {scalar_t__ change_kind; TYPE_1__ path; int mergeinfo_mod; void* prop_mod; void* text_mod; } ;
typedef TYPE_2__ svn_fs_x__change_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__ const*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;




 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_hash_t *VAR_4,
            apr_hash_t *VAR_5,
            const svn_fs_x__change_t *VAR_6)
{
  apr_pool_t *VAR_7 = FUNC_3(VAR_4);
  svn_fs_x__change_t *VAR_8, *VAR_9;
  const svn_string_t *VAR_10 = &VAR_6->path;

  if ((VAR_8 = FUNC_2(VAR_4, VAR_10->data, VAR_10->len)))
    {





      if ((VAR_8->change_kind == 130)
          && (! ((VAR_6->change_kind == 128)
                 || (VAR_6->change_kind == 131))))
        return FUNC_7
          (VAR_0, ((void*)0),
           FUNC_1("Invalid change ordering: non-add change on deleted path"));



      if ((VAR_6->change_kind == 131)
          && (VAR_8->change_kind != 130))
        return FUNC_7
          (VAR_0, ((void*)0),
           FUNC_1("Invalid change ordering: add change on preexisting path"));


      switch (VAR_6->change_kind)
        {
        case 130:
          if (VAR_8->change_kind == 131)
            {



              FUNC_4(VAR_4, VAR_10->data, VAR_10->len, ((void*)0));
            }
          else if (VAR_8->change_kind == 128)
            {

              VAR_9 = FUNC_2(VAR_5, VAR_10->data, VAR_10->len);
              FUNC_0(VAR_9);
              FUNC_4(VAR_4, VAR_10->data, VAR_10->len, VAR_9);
            }
          else
            {

              VAR_9 = FUNC_6(VAR_6, VAR_7);
              FUNC_4(VAR_4, VAR_10->data, VAR_10->len, VAR_9);
            }
          break;

        case 131:
        case 128:




          VAR_9 = FUNC_6(VAR_6, VAR_7);
          VAR_9->change_kind = 128;

          FUNC_4(VAR_4, VAR_10->data, VAR_10->len, VAR_9);



          FUNC_4(VAR_5,
                       FUNC_5(FUNC_3(VAR_5),
                                      VAR_10->data, VAR_10->len),
                       VAR_10->len, VAR_8);
          break;

        case 129:
        default:



          if (VAR_6->text_mod)
            VAR_8->text_mod = VAR_2;
          if (VAR_6->prop_mod)
            VAR_8->prop_mod = VAR_2;
          if (VAR_6->mergeinfo_mod == VAR_3)
            VAR_8->mergeinfo_mod = VAR_3;
          break;
        }
    }
  else
    {



      VAR_9 = FUNC_6(VAR_6, VAR_7);
      FUNC_4(VAR_4, VAR_9->path.data,
                   VAR_9->path.len, VAR_9);
    }

  return VAR_1;
}
