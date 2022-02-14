
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct revision_baton {TYPE_1__* pb; } ;
struct node_baton {char const* path; int action; char const* copyfrom_path; int copy_source_checksum; int base_checksum; int result_checksum; int copyfrom_rev; int kind; int * pool; struct revision_baton* rb; } ;
typedef enum svn_node_action { ____Placeholder_svn_node_action } svn_node_action ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {scalar_t__ parent_dir; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char const*) ;
 struct node_baton* FUNC_2 (int *,int) ;
 int FUNC_3 (char const*,char*) ;
 int VAR_10 ;
 int FUNC_4 (int *,int ,char const*,int *) ;
 char* FUNC_5 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* FUNC_6 (char const*,int *) ;
 void* FUNC_7 (scalar_t__,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(struct node_baton **VAR_18,
                apr_hash_t *VAR_19,
                struct revision_baton *VAR_20,
                apr_pool_t *VAR_21)
{
  struct node_baton *VAR_22 = FUNC_2(VAR_21, sizeof(*VAR_22));
  const char *VAR_23;


  VAR_22->rb = VAR_20;
  VAR_22->pool = VAR_21;
  VAR_22->kind = VAR_17;


  if ((VAR_23 = FUNC_5(VAR_19, VAR_6)))
  {
    VAR_23 = FUNC_6(VAR_23, VAR_21);
    if (VAR_20->pb->parent_dir)
      VAR_22->path = FUNC_7(VAR_20->pb->parent_dir, VAR_23, VAR_21);
    else
      VAR_22->path = VAR_23;
  }

  if ((VAR_23 = FUNC_5(VAR_19, VAR_5)))
    {
      if (! FUNC_3(VAR_23, "file"))
        VAR_22->kind = VAR_16;
      else if (! FUNC_3(VAR_23, "dir"))
        VAR_22->kind = VAR_15;
    }

  VAR_22->action = (enum svn_node_action)(-1);
  if ((VAR_23 = FUNC_5(VAR_19, VAR_2)))
    {
      if (! FUNC_3(VAR_23, "change"))
        VAR_22->action = VAR_12;
      else if (! FUNC_3(VAR_23, "add"))
        VAR_22->action = VAR_11;
      else if (! FUNC_3(VAR_23, "delete"))
        VAR_22->action = VAR_13;
      else if (! FUNC_3(VAR_23, "replace"))
        VAR_22->action = VAR_14;
    }

  VAR_22->copyfrom_rev = VAR_0;
  if ((VAR_23 = FUNC_5(VAR_19, VAR_4)))
    {
      VAR_22->copyfrom_rev = FUNC_1(VAR_23);
    }
  if ((VAR_23 = FUNC_5(VAR_19, VAR_3)))
    {
      VAR_23 = FUNC_6(VAR_23, VAR_21);
      if (VAR_20->pb->parent_dir)
        VAR_22->copyfrom_path = FUNC_7(VAR_20->pb->parent_dir, VAR_23, VAR_21);
      else
        VAR_22->copyfrom_path = VAR_23;
    }

  if ((VAR_23 = FUNC_5(VAR_19, VAR_7)))
    {
      FUNC_0(FUNC_4(&VAR_22->result_checksum, VAR_10,
                                     VAR_23, VAR_21));
    }

  if ((VAR_23 = FUNC_5(VAR_19,
                           VAR_9)))
    {
      FUNC_0(FUNC_4(&VAR_22->base_checksum, VAR_10, VAR_23,
                                     VAR_21));
    }

  if ((VAR_23 = FUNC_5(VAR_19,
                           VAR_8)))
    {
      FUNC_0(FUNC_4(&VAR_22->copy_source_checksum,
                                     VAR_10, VAR_23, VAR_21));
    }




  *VAR_18 = VAR_22;
  return VAR_1;
}
