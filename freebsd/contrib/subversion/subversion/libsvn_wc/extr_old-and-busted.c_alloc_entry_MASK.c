
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* kind; } ;
struct TYPE_6__ {void* kind; } ;
struct TYPE_8__ {TYPE_2__ file_external_rev; TYPE_1__ file_external_peg_rev; int * file_external_path; int depth; int working_size; int kind; void* cmt_rev; void* copyfrom_rev; void* revision; } ;
typedef TYPE_3__ svn_wc_entry_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static svn_wc_entry_t *
FUNC_1(apr_pool_t *VAR_5)
{
  svn_wc_entry_t *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  VAR_6->revision = VAR_0;
  VAR_6->copyfrom_rev = VAR_0;
  VAR_6->cmt_rev = VAR_0;
  VAR_6->kind = VAR_3;
  VAR_6->working_size = VAR_1;
  VAR_6->depth = VAR_2;
  VAR_6->file_external_path = ((void*)0);
  VAR_6->file_external_peg_rev.kind = VAR_4;
  VAR_6->file_external_rev.kind = VAR_4;
  return VAR_6;
}
