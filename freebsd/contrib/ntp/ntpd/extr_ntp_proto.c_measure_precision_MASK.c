
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_4(void)
{





 FUNC_2(0.);
 VAR_7 = VAR_0;
 VAR_3 = FUNC_0();
 FUNC_3(VAR_3);
 FUNC_1(VAR_1, "proto: precision = %.3f usec (%d)",
  VAR_6 * 1e6, VAR_5);
 if (VAR_4 < VAR_6) {
  FUNC_1(VAR_2, "proto: fuzz beneath %.3f usec",
   VAR_4 * 1e6);
 }
}
