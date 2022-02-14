
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {char* empty_file; int pool; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char**,int *,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(struct edit_baton *VAR_2,
               const char **VAR_3)
{



  if (!VAR_2->empty_file)
    FUNC_0(FUNC_1(((void*)0), &(VAR_2->empty_file), ((void*)0),
                                     VAR_1,
                                     VAR_2->pool, VAR_2->pool));

  *VAR_3 = VAR_2->empty_file;

  return VAR_0;
}
