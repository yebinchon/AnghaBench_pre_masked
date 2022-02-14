
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 scalar_t__ FUNC_0 (int,int ,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3 (int VAR_8, int VAR_9)
{
 int VAR_10;

 if (FUNC_0 (VAR_8, VAR_0, &VAR_10) < 0) {
  FUNC_1 ("getting modem status");
  return;
 }
 if (VAR_9)
  FUNC_2 ("Channel\tLE\tDTR\tDSR\tRTS\tCTS\tCD\n");
 FUNC_2 ("%s\t%s\t%s\t%s\t%s\t%s\t%s\n", VAR_7,
  VAR_10 & VAR_5 ? "On" : "-",
  VAR_10 & VAR_4 ? "On" : "-",
  VAR_10 & VAR_3 ? "On" : "-",
  VAR_10 & VAR_6 ? "On" : "-",
  VAR_10 & VAR_2 ? "On" : "-",
  VAR_10 & VAR_1 ? "On" : "-");
}
