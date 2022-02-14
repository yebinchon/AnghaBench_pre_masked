
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int pool; int revision; int fs; int * rfile; } ;
typedef TYPE_1__ shared_file_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int ,int ) ;

__attribute__((used)) static svn_error_t*
FUNC_2(shared_file_t *VAR_1)
{
  if (VAR_1->rfile == ((void*)0))
    FUNC_0(FUNC_1(&VAR_1->rfile, VAR_1->fs,
                                    VAR_1->revision, VAR_1->pool));

  return VAR_0;
}
