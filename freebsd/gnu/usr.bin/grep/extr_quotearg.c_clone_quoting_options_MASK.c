
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quoting_options {int dummy; } ;


 struct quoting_options VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

struct quoting_options *
FUNC_1 (struct quoting_options *VAR_1)
{
  struct quoting_options *VAR_2
    = (struct quoting_options *) FUNC_0 (sizeof (struct quoting_options));
  *VAR_2 = *(VAR_1 ? VAR_1 : &VAR_0);
  return VAR_2;
}
