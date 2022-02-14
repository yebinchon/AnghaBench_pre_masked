
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
 int FUNC_0 (int,int ,int,int*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_2(int VAR_8, const char *VAR_9, int VAR_10)
{
 int VAR_11;

 FUNC_1("\t%s", VAR_9);


 if (FUNC_0(VAR_8, VAR_4, VAR_10, &VAR_11) != -1)
  FUNC_1(" cwmin %2u", VAR_11);
 if (FUNC_0(VAR_8, VAR_3, VAR_10, &VAR_11) != -1)
  FUNC_1(" cwmax %2u", VAR_11);
 if (FUNC_0(VAR_8, VAR_2, VAR_10, &VAR_11) != -1)
  FUNC_1(" aifs %2u", VAR_11);
 if (FUNC_0(VAR_8, VAR_5, VAR_10, &VAR_11) != -1)
  FUNC_1(" txopLimit %3u", VAR_11);
 if (FUNC_0(VAR_8, VAR_1, VAR_10, &VAR_11) != -1) {
  if (VAR_11)
   FUNC_1(" acm");
  else if (VAR_7)
   FUNC_1(" -acm");
 }

 if ((VAR_10 & VAR_6) == 0) {
  if (FUNC_0(VAR_8, VAR_0, VAR_10, &VAR_11) != -1) {
   if (!VAR_11)
    FUNC_1(" -ack");
   else if (VAR_7)
    FUNC_1(" ack");
  }
 }
 FUNC_1("\n");
}
