
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int filename; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_1, const char *VAR_2)
{
  struct pr_handle *VAR_3 = (struct pr_handle *) VAR_1;

  FUNC_0 (VAR_3->filename);

  VAR_3->filename = FUNC_1 (VAR_2);

  return VAR_0;
}
