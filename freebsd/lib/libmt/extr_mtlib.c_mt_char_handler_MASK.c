
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_status_data {scalar_t__ error; size_t level; int * cur_sb; } ;
typedef int XML_Char ;


 int FUNC_0 (int ,int const*,int) ;

void
FUNC_1(void *VAR_0, const XML_Char *VAR_1, int VAR_2)
{
 struct mt_status_data *VAR_3;

 VAR_3 = (struct mt_status_data *)VAR_0;
 if (VAR_3->error != 0)
  return;

 FUNC_0(VAR_3->cur_sb[VAR_3->level], VAR_1, VAR_2);
}
