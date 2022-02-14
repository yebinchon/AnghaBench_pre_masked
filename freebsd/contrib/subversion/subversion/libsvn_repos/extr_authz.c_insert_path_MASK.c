
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;


struct TYPE_30__ {int rights; } ;
typedef TYPE_4__ path_access_t ;
struct TYPE_29__ {int len; int data; } ;
struct TYPE_31__ {TYPE_3__ segment; int sub_nodes; TYPE_1__* pattern_sub_nodes; int rights; } ;
typedef TYPE_5__ node_t ;
struct TYPE_32__ {TYPE_5__* node; TYPE_9__* segment; } ;
typedef TYPE_6__ node_segment_pair_t ;
struct TYPE_33__ {int min_rights; int max_rights; TYPE_4__ access; } ;
typedef TYPE_7__ limited_rights_t ;
struct TYPE_34__ {int path; } ;
typedef TYPE_8__ construction_context_t ;
struct TYPE_28__ {int data; } ;
struct TYPE_35__ {int kind; TYPE_2__ pattern; } ;
typedef TYPE_9__ authz_rule_segment_t ;
typedef int apr_pool_t ;
struct TYPE_27__ {int complex; int suffixes; int prefixes; int any_var; int any; } ;
struct TYPE_26__ {int repeat; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_5__*) ;



 int VAR_1 ;


 int FUNC_3 (int *,TYPE_7__*) ;
 TYPE_5__* FUNC_4 (TYPE_9__*,int *) ;
 TYPE_5__* FUNC_5 (int *,TYPE_9__*,int *) ;
 TYPE_5__* FUNC_6 (int *,TYPE_9__*,int *) ;
 TYPE_15__* FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (int *) ;
 TYPE_5__* FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(construction_context_t *VAR_2,
            node_t *VAR_3,
            path_access_t *VAR_4,
            int VAR_5,
            authz_rule_segment_t *VAR_6,
            apr_pool_t *VAR_7,
            apr_pool_t *VAR_8)
{
  node_t *VAR_9;
  node_segment_pair_t *VAR_10;


  if (VAR_5 == 0)
    {




      limited_rights_t VAR_11;
      VAR_11.access = *VAR_4;
      VAR_11.max_rights = VAR_4->rights;
      VAR_11.min_rights = VAR_4->rights;
      FUNC_3(&VAR_3->rights, &VAR_11);
      return;
    }


  if (VAR_6->kind != VAR_1)
    FUNC_7(VAR_3, VAR_7);

  switch (VAR_6->kind)
    {

    case 131:
      VAR_9 = FUNC_5(&VAR_3->pattern_sub_nodes->any,
                             VAR_6, VAR_7);
      break;


    case 132:
      VAR_9 = FUNC_5(&VAR_3->pattern_sub_nodes->any_var,
                             VAR_6, VAR_7);
      FUNC_7(VAR_9, VAR_7)->repeat = VAR_0;
      break;


    case 129:
      VAR_9 = FUNC_6(&VAR_3->pattern_sub_nodes->prefixes,
                                      VAR_6, VAR_7);
      break;


    case 128:
      VAR_9 = FUNC_6(&VAR_3->pattern_sub_nodes->suffixes,
                                      VAR_6, VAR_7);
      break;


    case 130:
      VAR_9 = FUNC_6(&VAR_3->pattern_sub_nodes->complex,
                                      VAR_6, VAR_7);
      break;


    default:
      FUNC_0(VAR_6->kind == VAR_1);

      if (!VAR_3->sub_nodes)
        {
          VAR_3->sub_nodes = FUNC_8(VAR_7);
          VAR_9 = ((void*)0);
        }
      else
        {
          VAR_9 = FUNC_9(VAR_3->sub_nodes, VAR_6->pattern.data);
        }


      if (!VAR_9)
        {
          VAR_9 = FUNC_4(VAR_6, VAR_7);
          FUNC_2(VAR_3->sub_nodes,
                       VAR_9->segment.data,
                       VAR_9->segment.len,
                       VAR_9);
        }
    }


  VAR_10 = FUNC_1(VAR_2->path);
  VAR_10->segment = VAR_6;
  VAR_10->node = VAR_9;


  FUNC_10(VAR_2, VAR_9, VAR_4, VAR_5 - 1, VAR_6 + 1,
              VAR_7, VAR_8);
}
