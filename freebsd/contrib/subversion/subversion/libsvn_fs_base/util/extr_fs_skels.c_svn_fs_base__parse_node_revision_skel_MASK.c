
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; struct TYPE_8__* next; struct TYPE_8__* children; int data; scalar_t__ is_atom; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ kind; int predecessor_count; int has_mergeinfo; void* edit_key; int * data_key_uniquifier; void* data_key; void* prop_key; int mergeinfo_count; int predecessor_id; void* created_path; } ;
typedef TYPE_2__ node_revision_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int*,char const*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*) ;

svn_error_t *
FUNC_9(node_revision_t **VAR_3,
                                      svn_skel_t *VAR_4,
                                      apr_pool_t *VAR_5)
{
  node_revision_t *VAR_6;
  svn_skel_t *VAR_7, *VAR_8;


  if (! FUNC_3(VAR_4))
    return FUNC_4("node-revision");
  VAR_7 = VAR_4->children;


  VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));


  if (FUNC_8(VAR_7->children, "dir"))
    VAR_6->kind = VAR_1;
  else
    VAR_6->kind = VAR_2;


  VAR_6->created_path = FUNC_2(VAR_5,
                                         VAR_7->children->next->data,
                                         VAR_7->children->next->len);


  if (VAR_7->children->next->next)
    {
      VAR_8 = VAR_7->children->next->next;
      if (VAR_8->len)
        VAR_6->predecessor_id = FUNC_7(VAR_8->data,
                                                        VAR_8->len, VAR_5);


      VAR_6->predecessor_count = -1;
      if (VAR_8->next)
        {
          const char *VAR_9;

          VAR_8 = VAR_8->next;
          if (VAR_8->len)
            {
              VAR_9 = FUNC_2(VAR_5, VAR_8->data, VAR_8->len);
              FUNC_0(FUNC_5(&VAR_6->predecessor_count, VAR_9));
            }


          if (VAR_8->next)
            {
              int VAR_10;

              VAR_8 = VAR_8->next;
              VAR_9 = FUNC_2(VAR_5, VAR_8->data, VAR_8->len);
              FUNC_0(FUNC_5(&VAR_10, VAR_9));
              VAR_6->has_mergeinfo = (VAR_10 != 0);

              VAR_9 = FUNC_2(VAR_5, VAR_8->next->data,
                                   VAR_8->next->len);
              FUNC_0(FUNC_6(&VAR_6->mergeinfo_count, VAR_9));
            }
        }
    }


  if (VAR_4->children->next->len)
    VAR_6->prop_key = FUNC_2(VAR_5, VAR_4->children->next->data,
                                       VAR_4->children->next->len);


  if (VAR_4->children->next->next->is_atom)
    {

      if (VAR_4->children->next->next->len)
        VAR_6->data_key = FUNC_2(VAR_5,
                                           VAR_4->children->next->next->data,
                                           VAR_4->children->next->next->len);
      VAR_6->data_key_uniquifier = ((void*)0);
    }
  else
    {

      VAR_6->data_key =
        FUNC_2(VAR_5,
                       VAR_4->children->next->next->children->data,
                       VAR_4->children->next->next->children->len);
      VAR_6->data_key_uniquifier =
        FUNC_2(VAR_5,
                       VAR_4->children->next->next->children->next->data,
                       VAR_4->children->next->next->children->next->len);
    }


  if ((VAR_6->kind == VAR_2)
      && VAR_4->children->next->next->next
      && VAR_4->children->next->next->next->len)
    VAR_6->edit_key
      = FUNC_2(VAR_5, VAR_4->children->next->next->next->data,
                       VAR_4->children->next->next->next->len);


  *VAR_3 = VAR_6;
  return VAR_0;
}
