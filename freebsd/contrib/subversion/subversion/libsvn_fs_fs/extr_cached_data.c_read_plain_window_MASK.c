
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_12__ {scalar_t__ current; TYPE_9__* sfile; scalar_t__ start; } ;
typedef TYPE_3__ rep_state_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_13__ {TYPE_1__* rfile; } ;
struct TYPE_10__ {int file; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *,scalar_t__,int *) ;
 int FUNC_4 (int ,scalar_t__*,size_t,int *,int *,int *) ;
 TYPE_2__* FUNC_5 (size_t,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_stringbuf_t **VAR_1, rep_state_t *VAR_2,
                  apr_size_t VAR_3, apr_pool_t *VAR_4,
                  apr_pool_t *VAR_5)
{
  apr_off_t VAR_6;



  FUNC_0(FUNC_1(VAR_2->sfile));
  FUNC_0(FUNC_2(VAR_2, VAR_5));

  VAR_6 = VAR_2->start + VAR_2->current;
  FUNC_0(FUNC_3(VAR_2, ((void*)0), VAR_6, VAR_5));


  *VAR_1 = FUNC_5(VAR_3, VAR_4);
  FUNC_0(FUNC_4(VAR_2->sfile->rfile->file, (*VAR_1)->data, VAR_3,
                                 ((void*)0), ((void*)0), VAR_4));
  (*VAR_1)->data[VAR_3] = 0;


  VAR_2->current += (apr_off_t)VAR_3;

  return VAR_0;
}
