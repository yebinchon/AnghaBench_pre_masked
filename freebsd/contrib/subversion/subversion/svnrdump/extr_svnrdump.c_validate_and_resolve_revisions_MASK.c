
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ number; } ;
struct TYPE_10__ {scalar_t__ kind; TYPE_3__ value; } ;
struct TYPE_7__ {scalar_t__ number; } ;
struct TYPE_8__ {scalar_t__ kind; TYPE_1__ value; } ;
struct TYPE_11__ {TYPE_4__ start_revision; TYPE_2__ end_revision; } ;
typedef TYPE_5__ opt_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int *,int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_4(opt_baton_t *VAR_6,
                               svn_revnum_t VAR_7,
                               apr_pool_t *VAR_8)
{
  svn_revnum_t VAR_9 = VAR_1;




  if (VAR_6->start_revision.kind == VAR_4)
    {
      VAR_9 = VAR_6->start_revision.value.number;
    }
  else if (VAR_6->start_revision.kind == VAR_3)
    {
      VAR_6->start_revision.kind = VAR_4;
      VAR_6->start_revision.value.number = VAR_7;
    }
  else if (VAR_6->start_revision.kind == VAR_5)
    {
      VAR_6->start_revision.kind = VAR_4;
      VAR_6->start_revision.value.number = 0;
    }

  if (VAR_6->start_revision.kind != VAR_4)
    {
      return FUNC_2(VAR_0, ((void*)0),
                              FUNC_1("Unsupported revision specifier used; use "
                                "only integer values or 'HEAD'"));
    }

  if ((VAR_6->start_revision.value.number < 0) ||
      (VAR_6->start_revision.value.number > VAR_7))
    {
      return FUNC_3(VAR_0, ((void*)0),
                               FUNC_1("Revision '%ld' does not exist"),
                               VAR_6->start_revision.value.number);
    }






  if (VAR_6->end_revision.kind == VAR_5)
    {
      VAR_6->end_revision.kind = VAR_4;
      if (FUNC_0(VAR_9))
        VAR_6->end_revision.value.number = VAR_9;
      else
        VAR_6->end_revision.value.number = VAR_7;
    }
  else if (VAR_6->end_revision.kind == VAR_3)
    {
      VAR_6->end_revision.kind = VAR_4;
      VAR_6->end_revision.value.number = VAR_7;
    }

  if (VAR_6->end_revision.kind != VAR_4)
    {
      return FUNC_2(VAR_0, ((void*)0),
                              FUNC_1("Unsupported revision specifier used; use "
                                "only integer values or 'HEAD'"));
    }

  if ((VAR_6->end_revision.value.number < 0) ||
      (VAR_6->end_revision.value.number > VAR_7))
    {
      return FUNC_3(VAR_0, ((void*)0),
                               FUNC_1("Revision '%ld' does not exist"),
                               VAR_6->end_revision.value.number);
    }



  if (VAR_6->end_revision.value.number <
      VAR_6->start_revision.value.number)
    {
      return FUNC_2(VAR_0, ((void*)0),
                              FUNC_1("LOWER revision cannot be greater than "
                                "UPPER revision; consider reversing your "
                                "revision range"));
    }
  return VAR_2;
}
