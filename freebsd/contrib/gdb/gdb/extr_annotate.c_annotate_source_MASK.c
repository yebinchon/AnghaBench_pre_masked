
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2 (char *VAR_2, int VAR_3, int VAR_4, int VAR_5, CORE_ADDR VAR_6)
{
  if (VAR_0 > 1)
    FUNC_1 ("\n\032\032source ");
  else
    FUNC_1 ("\032\032");

  FUNC_1 ("%s:%d:%d:%s:0x", VAR_2,
     VAR_3, VAR_4,
     VAR_5 ? "middle" : "beg");
  FUNC_0 (VAR_6, 0, VAR_1);
  FUNC_1 ("\n");
}
