
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
 int FUNC_0 (void*,int,char*) ;
 int FUNC_1 (int,char*,int,char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*,int,int,int,int ) ;

void FUNC_4(void *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 char VAR_11[64];
 char VAR_12[1024];

 for (VAR_9 = VAR_1; VAR_9 < VAR_2; VAR_9++) {
  for (VAR_10=0;VAR_10<VAR_8;VAR_10++)
   FUNC_2("\t");
  if (VAR_9 == VAR_4 && VAR_6 == 0) {
   FUNC_3(VAR_12, 1024, VAR_9, 32, VAR_5);
  } else {
   FUNC_0(VAR_7, VAR_9, VAR_11);
   if (!FUNC_1(VAR_9, VAR_12, 1024, VAR_11))
    return;
  }
  FUNC_2("%s\n", VAR_12);
 }

 for (VAR_9 = VAR_0;
      VAR_9 < VAR_3; VAR_9++) {
  for (VAR_10=0;VAR_10<VAR_8;VAR_10++)
   FUNC_2("\t");
  FUNC_0(VAR_7, VAR_9, VAR_11);
  if (!FUNC_1(VAR_9, VAR_12, 1024, VAR_11))
   return;
  FUNC_2("%s\n", VAR_12);
 }
}
