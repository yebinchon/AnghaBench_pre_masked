
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3()
{
 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_1(VAR_0);
 if (!(VAR_2 && VAR_3 && VAR_4)) {
  FUNC_2(VAR_1, "Unable to allocate hash tables.");
  FUNC_0(1);
 }
}
