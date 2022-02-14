
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_8__ {int ver; int current; scalar_t__ chunk_index; TYPE_2__* sfile; int start; } ;
typedef TYPE_3__ rep_state_t ;
typedef int buf ;
typedef int apr_pool_t ;
struct TYPE_7__ {TYPE_1__* rfile; } ;
struct TYPE_6__ {int file; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int *,int ,int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,char*,int,int *,int *,int *) ;

__attribute__((used)) static svn_error_t*
FUNC_5(rep_state_t *VAR_2, apr_pool_t *VAR_3)
{
  if (VAR_2->ver == -1)
    {
      char VAR_4[4];
      FUNC_0(FUNC_2(VAR_2, ((void*)0), VAR_2->start, VAR_3));
      FUNC_0(FUNC_4(VAR_2->sfile->rfile->file, VAR_4,
                                     sizeof(VAR_4), ((void*)0), ((void*)0), VAR_3));


      if (! ((VAR_4[0] == 'S') && (VAR_4[1] == 'V') && (VAR_4[2] == 'N')))
        return FUNC_3
          (VAR_0, ((void*)0),
           FUNC_1("Malformed svndiff data in representation"));
      VAR_2->ver = VAR_4[3];

      VAR_2->chunk_index = 0;
      VAR_2->current = 4;
    }

  return VAR_1;
}
