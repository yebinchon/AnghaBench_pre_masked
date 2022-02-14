
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct text_baton_t {int pool; TYPE_1__* root; int file_stream; } ;
struct TYPE_2__ {int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,struct text_baton_t*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2)
{
  struct text_baton_t *VAR_3 = VAR_2;




  FUNC_0(FUNC_2(VAR_3->file_stream));


  return FUNC_1(VAR_3->root->fs,
                                VAR_1, VAR_3,
                                VAR_0, VAR_3->pool);
}
