
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
typedef int mi_out_data ;


 int FUNC_0 (struct ui_out*,int,int,int,char*,int) ;
 int FUNC_1 (struct ui_out*,char const*,int ) ;
 int * FUNC_2 (struct ui_out*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3 (struct ui_out *VAR_2,
  int VAR_3,
  int VAR_4,
  const char *VAR_5)
{
  mi_out_data *VAR_6 = FUNC_2 (VAR_2);
  FUNC_1 (VAR_2, VAR_5, VAR_1);
  FUNC_0 (VAR_2, -1 , -1 , -1 ,
  "nr_rows", VAR_4);
  FUNC_0 (VAR_2, -1 , -1 , -1 ,
  "nr_cols", VAR_3);
  FUNC_1 (VAR_2, "hdr", VAR_0);
}
