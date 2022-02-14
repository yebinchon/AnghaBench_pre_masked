
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct rep_read_baton {int scratch_pool; int fs; scalar_t__ trail; } ;
struct read_rep_args {char* buf; int * len; struct rep_read_baton* rb; } ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int (*) (struct read_rep_args*,scalar_t__),struct read_rep_args*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct read_rep_args*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2, char *VAR_3, apr_size_t *VAR_4)
{
  struct rep_read_baton *VAR_5 = VAR_2;
  struct read_rep_args VAR_6;


  FUNC_2(VAR_5->scratch_pool);

  VAR_6.rb = VAR_5;
  VAR_6.buf = VAR_3;
  VAR_6.len = VAR_4;


  if (VAR_5->trail)
    FUNC_0(FUNC_3(&VAR_6, VAR_5->trail));
  else
    {





      FUNC_0(FUNC_1(VAR_5->fs,
                                     FUNC_3,
                                     &VAR_6,
                                     VAR_1,
                                     VAR_5->scratch_pool));
    }
  return VAR_0;
}
