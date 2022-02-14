
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {int dummy; } ;
typedef int lin ;


 int FUNC_0 (int ,char*,long,...) ;
 int VAR_0 ;
 int FUNC_1 (struct file_data const*,int ,int ,long*,long*) ;

__attribute__((used)) static void
FUNC_2 (struct file_data const *VAR_1, lin VAR_2, lin VAR_3)
{
  long int VAR_4, VAR_5;
  FUNC_1 (VAR_1, VAR_2, VAR_3, &VAR_4, &VAR_5);
  if (VAR_5 <= VAR_4)
    FUNC_0 (VAR_0, "%ld", VAR_5);
  else
    FUNC_0 (VAR_0, "%ld,%ld", VAR_4, VAR_5);
}
