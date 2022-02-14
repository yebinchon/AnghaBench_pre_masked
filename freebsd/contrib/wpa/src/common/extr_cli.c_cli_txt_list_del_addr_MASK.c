
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dl_list {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct dl_list*,char*) ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int FUNC_3 (char*,int,int ,int ) ;

void FUNC_4(struct dl_list *VAR_2, const char *VAR_3)
{
 u8 VAR_4[VAR_0];
 char VAR_5[18];

 if (FUNC_2(VAR_3, VAR_4) < 0)
  return;
 FUNC_3(VAR_5, sizeof(VAR_5), VAR_1, FUNC_0(VAR_4));
 FUNC_1(VAR_2, VAR_5);
}
