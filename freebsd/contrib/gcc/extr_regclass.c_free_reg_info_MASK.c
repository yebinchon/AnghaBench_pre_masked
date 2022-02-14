
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char reg_pref ;
struct reg_info_data {struct reg_info_data* next; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct reg_info_data* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 short* VAR_7 ;

void
FUNC_2 (void)
{
  if (VAR_3)
    {
      struct reg_info_data *VAR_8;
      struct reg_info_data *VAR_9;

      FUNC_0 (VAR_2, VAR_0, VAR_3);
      for (VAR_8 = VAR_1; VAR_8; VAR_8 = VAR_9)
 {
   VAR_9 = VAR_8->next;
   FUNC_1 ((char *) VAR_8);
 }

      FUNC_1 (VAR_5);
      VAR_5 = (struct reg_pref *) 0;
      VAR_1 = (struct reg_info_data *) 0;
      VAR_7 = (short *) 0;
    }
  VAR_6 = 0;
  VAR_4 = 0;
}
