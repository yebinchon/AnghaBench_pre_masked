
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,int,...) ;

__attribute__((used)) static svn_error_t *
FUNC_2(int VAR_4)
{


  if (VAR_4 == VAR_2)
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("Found format '%d', only created by "
                               "unreleased dev builds; see "
                               "http://subversion.apache.org"
                               "/docs/release-notes/1.7#revprop-packing"),
                             VAR_4);


  if (1 <= VAR_4 && VAR_4 <= VAR_1)
    return VAR_3;

  return FUNC_1(VAR_0, ((void*)0),
     FUNC_0("Expected FS format between '1' and '%d'; found format '%d'"),
     VAR_1, VAR_4);
}
