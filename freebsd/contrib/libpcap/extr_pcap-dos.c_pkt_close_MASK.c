
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * priv; } ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3 (struct device *VAR_2)
{
  BOOL VAR_3 = FUNC_0();

  if (VAR_0 > 1)
     FUNC_1 (VAR_1, "pkt_close(): %d\n", VAR_3);

  if (VAR_2->priv)
     FUNC_2 (VAR_2->priv);
  VAR_2->priv = ((void*)0);
}
