
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_3__ {char* path; } ;
typedef TYPE_1__ path_info_t ;
typedef size_t apr_size_t ;


 scalar_t__ FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(path_info_t *VAR_0, const char *VAR_1, apr_size_t VAR_2)
{
  return (VAR_0 && FUNC_0(VAR_0->path, VAR_1, VAR_2) == 0 &&
          (!*VAR_1 || VAR_0->path[VAR_2] == '/'));
}
