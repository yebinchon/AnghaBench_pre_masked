
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ change_kind; void* prop_mod; void* text_mod; int node_rev_id; } ;
typedef TYPE_1__ svn_fs_path_change2_t ;
typedef int svn_error_t ;
struct TYPE_10__ {char const* path; scalar_t__ kind; void* prop_mod; void* text_mod; int noderev_id; } ;
typedef TYPE_2__ change_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 char const* FUNC_3 (int *,char const*) ;
 TYPE_1__* FUNC_4 (TYPE_2__ const*,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ) ;





 TYPE_1__* FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char const*,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_hash_t *VAR_3,
            apr_hash_t *VAR_4,
            const change_t *VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_2(VAR_3);
  svn_fs_path_change2_t *VAR_7, *VAR_8;
  const char *VAR_9;

  if ((VAR_7 = FUNC_7(VAR_3, VAR_5->path)))
    {





      VAR_9 = VAR_5->path;



      if ((! VAR_5->noderev_id) && (VAR_5->kind != 128))
        return FUNC_5
          (VAR_0, ((void*)0),
           FUNC_1("Missing required node revision ID"));




      if (VAR_5->noderev_id
          && (! FUNC_6(VAR_7->node_rev_id,
                                   VAR_5->noderev_id))
          && (VAR_7->change_kind != 131))
        return FUNC_5
          (VAR_0, ((void*)0),
           FUNC_1("Invalid change ordering: new node revision ID without delete"));



      if ((VAR_7->change_kind == 131)
          && (! ((VAR_5->kind == 129)
                 || (VAR_5->kind == 128)
                 || (VAR_5->kind == 132))))
        return FUNC_5
          (VAR_0, ((void*)0),
           FUNC_1("Invalid change ordering: non-add change on deleted path"));



      if ((VAR_5->kind == 132)
          && (VAR_7->change_kind != 131)
          && (VAR_7->change_kind != 128))
        return FUNC_5
          (VAR_0, ((void*)0),
           FUNC_1("Invalid change ordering: add change on preexisting path"));


      switch (VAR_5->kind)
        {
        case 128:


          VAR_8 = ((void*)0);
          break;

        case 131:
          if (VAR_7->change_kind == 132)
            {



              VAR_8 = ((void*)0);
            }
          else if (VAR_7->change_kind == 129)
            {

              VAR_8 = FUNC_7(VAR_4, VAR_9);
              FUNC_0(VAR_8);
            }
          else
            {

              VAR_8 = VAR_7;
              VAR_8->change_kind = 131;
              VAR_8->text_mod = VAR_5->text_mod;
              VAR_8->prop_mod = VAR_5->prop_mod;
            }
          break;

        case 132:
        case 129:



          VAR_8 = FUNC_4(VAR_5, VAR_6);
          VAR_8->change_kind = 129;



          FUNC_8(VAR_4,
                        FUNC_3(FUNC_2(VAR_4), VAR_9),
                        VAR_7);
          break;

        case 130:
        default:
          VAR_8 = VAR_7;
          if (VAR_5->text_mod)
            VAR_8->text_mod = VAR_2;
          if (VAR_5->prop_mod)
            VAR_8->prop_mod = VAR_2;
          break;
        }
    }
  else
    {



      VAR_8 = FUNC_4(VAR_5, VAR_6);
      VAR_9 = FUNC_3(VAR_6, VAR_5->path);
    }


  FUNC_8(VAR_3, VAR_9, VAR_8);

  return VAR_1;
}
