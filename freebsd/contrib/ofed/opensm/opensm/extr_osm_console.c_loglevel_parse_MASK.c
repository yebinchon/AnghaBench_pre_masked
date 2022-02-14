
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log; } ;
typedef TYPE_1__ osm_opensm_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (char**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int *,int) ;
 int FUNC_6 (char*,int *,int) ;

__attribute__((used)) static void FUNC_7(char **VAR_0, osm_opensm_t * VAR_1, FILE * VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  FUNC_0(VAR_2, "Current log level is 0x%x\n",
   FUNC_2(&VAR_1->log));
 else {

  if (!FUNC_4(VAR_3, "x", 1)) {
   VAR_3++;
   VAR_4 = FUNC_6(VAR_3, ((void*)0), 16);
  } else {
   if (!FUNC_4(VAR_3, "0x", 2)) {
    VAR_3 += 2;
    VAR_4 = FUNC_6(VAR_3, ((void*)0), 16);
   } else
    VAR_4 = FUNC_5(VAR_3, ((void*)0), 10);
  }
  if ((VAR_4 >= 0) && (VAR_4 < 256)) {
   FUNC_0(VAR_2, "Setting log level to 0x%x\n", VAR_4);
   FUNC_3(&VAR_1->log, VAR_4);
  } else
   FUNC_0(VAR_2, "Invalid log level 0x%x\n", VAR_4);
 }
}
