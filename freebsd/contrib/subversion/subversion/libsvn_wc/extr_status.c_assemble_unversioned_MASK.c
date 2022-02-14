
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ actual_kind; int * changelist; scalar_t__ conflicted; scalar_t__ ood_kind; void* ood_changed_rev; void* changed_rev; void* revision; void* node_status; void* repos_prop_status; void* repos_text_status; void* repos_node_status; void* prop_status; void* text_status; void* filesize; int depth; int kind; } ;
typedef TYPE_1__ svn_wc_status3_t ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_2__ svn_wc__internal_status_t ;
typedef int svn_wc__db_t ;
struct TYPE_9__ {scalar_t__ kind; void* filesize; scalar_t__ special; } ;
typedef TYPE_3__ svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int * VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_wc__internal_status_t **VAR_12,
                     svn_wc__db_t *VAR_13,
                     const char *VAR_14,
                     const svn_io_dirent2_t *VAR_15,
                     svn_boolean_t VAR_16,
                     svn_boolean_t VAR_17,
                     apr_pool_t *VAR_18,
                     apr_pool_t *VAR_19)
{
  svn_wc__internal_status_t *VAR_20;
  svn_wc_status3_t *VAR_21;


  VAR_20 = FUNC_0(VAR_18, sizeof(*VAR_20));
  VAR_21 = &VAR_20->s;


  VAR_21->kind = VAR_7;
  VAR_21->depth = VAR_3;
  if (VAR_15)
    {
      VAR_21->actual_kind = VAR_15->special ? VAR_6
                                           : VAR_15->kind;
      VAR_21->filesize = (VAR_15->kind == VAR_4)
                            ? VAR_15->filesize
                            : VAR_0;
    }
  else
    {
       VAR_21->actual_kind = VAR_5;
       VAR_21->filesize = VAR_0;
    }

  VAR_21->node_status = VAR_10;
  VAR_21->text_status = VAR_10;
  VAR_21->prop_status = VAR_10;
  VAR_21->repos_node_status = VAR_10;
  VAR_21->repos_text_status = VAR_10;
  VAR_21->repos_prop_status = VAR_10;






  if (VAR_15 && VAR_15->kind != VAR_5)
    {
      if (VAR_17)
        VAR_21->node_status = VAR_9;
      else
        VAR_21->node_status = VAR_11;
    }
  else if (VAR_16)
    {


      VAR_21->node_status = VAR_8;
    }

  VAR_21->revision = VAR_1;
  VAR_21->changed_rev = VAR_1;
  VAR_21->ood_changed_rev = VAR_1;
  VAR_21->ood_kind = VAR_5;



  VAR_21->conflicted = VAR_16;
  VAR_21->changelist = ((void*)0);

  *VAR_12 = VAR_20;
  return VAR_2;
}
