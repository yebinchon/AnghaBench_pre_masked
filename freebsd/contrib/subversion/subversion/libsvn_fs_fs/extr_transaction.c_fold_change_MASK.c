
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_11__ {scalar_t__ change_kind; int mergeinfo_mod; void* prop_mod; void* text_mod; scalar_t__ node_rev_id; } ;
typedef TYPE_2__ svn_fs_path_change2_t ;
typedef int svn_error_t ;
struct TYPE_12__ {TYPE_2__ info; TYPE_1__ path; } ;
typedef TYPE_3__ change_t ;
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
 int FUNC_8 (scalar_t__,scalar_t__) ;





 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_hash_t *VAR_4,
            apr_hash_t *VAR_5,
            const change_t *VAR_6)
{
  apr_pool_t *VAR_7 = FUNC_3(VAR_4);
  svn_fs_path_change2_t *VAR_8, *VAR_9;
  const svn_string_t *VAR_10 = &VAR_6->path;
  const svn_fs_path_change2_t *VAR_11 = &VAR_6->info;

  if ((VAR_8 = FUNC_2(VAR_4, VAR_10->data, VAR_10->len)))
    {





      if ((! VAR_11->node_rev_id)
           && (VAR_11->change_kind != 128))
        return FUNC_7
          (VAR_0, ((void*)0),
           FUNC_1("Missing required node revision ID"));




      if (VAR_11->node_rev_id
          && (! FUNC_8(VAR_8->node_rev_id, VAR_11->node_rev_id))
          && (VAR_8->change_kind != 131))
        return FUNC_7
          (VAR_0, ((void*)0),
           FUNC_1("Invalid change ordering: new node revision ID "
             "without delete"));



      if ((VAR_8->change_kind == 131)
          && (! ((VAR_11->change_kind == 129)
                 || (VAR_11->change_kind == 128)
                 || (VAR_11->change_kind == 132))))
        return FUNC_7
          (VAR_0, ((void*)0),
           FUNC_1("Invalid change ordering: non-add change on deleted path"));



      if ((VAR_11->change_kind == 132)
          && (VAR_8->change_kind != 131)
          && (VAR_8->change_kind != 128))
        return FUNC_7
          (VAR_0, ((void*)0),
           FUNC_1("Invalid change ordering: add change on preexisting path"));


      switch (VAR_11->change_kind)
        {
        case 128:


          FUNC_4(VAR_4, VAR_10->data, VAR_10->len, ((void*)0));
          break;

        case 131:
          if (VAR_8->change_kind == 132)
            {



              FUNC_4(VAR_4, VAR_10->data, VAR_10->len, ((void*)0));
            }
          else if (VAR_8->change_kind == 129)
            {

              VAR_9 = FUNC_2(VAR_5, VAR_10->data, VAR_10->len);
              FUNC_0(VAR_9);
              FUNC_4(VAR_4, VAR_10->data, VAR_10->len, VAR_9);
            }
          else
            {

              VAR_9 = FUNC_6(VAR_11, VAR_7);
              FUNC_4(VAR_4, VAR_10->data, VAR_10->len, VAR_9);
            }
          break;

        case 132:
        case 129:




          VAR_9 = FUNC_6(VAR_11, VAR_7);
          VAR_9->change_kind = 129;

          FUNC_4(VAR_4, VAR_10->data, VAR_10->len, VAR_9);



          FUNC_4(VAR_5,
                       FUNC_5(FUNC_3(VAR_5),
                                      VAR_10->data, VAR_10->len),
                       VAR_10->len, VAR_8);
          break;

        case 130:
        default:



          if (VAR_11->text_mod)
            VAR_8->text_mod = VAR_2;
          if (VAR_11->prop_mod)
            VAR_8->prop_mod = VAR_2;
          if (VAR_11->mergeinfo_mod == VAR_3)
            VAR_8->mergeinfo_mod = VAR_3;
          break;
        }
    }
  else
    {



      FUNC_4(VAR_4,
                   FUNC_5(VAR_7, VAR_10->data, VAR_10->len), VAR_10->len,
                   FUNC_6(VAR_11, VAR_7));
    }

  return VAR_1;
}
