
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int buf; } ;
struct gcov_iterator {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gcov_iterator*,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct gcov_iterator *VAR_3 = VAR_2;

 if (FUNC_0(VAR_3, VAR_1->buf))
  return (-VAR_0);
 return (0);
}
