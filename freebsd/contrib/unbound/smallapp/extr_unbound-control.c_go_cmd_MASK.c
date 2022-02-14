
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pre ;
typedef int buf ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int *,int,char*,int) ;
 int FUNC_2 (int *,int,char const*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ,char*,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(SSL* VAR_2, int VAR_3, int VAR_4, int VAR_5, char* VAR_6[])
{
 char VAR_7[10];
 const char* VAR_8=" ";
 const char* VAR_9="\n";
 int VAR_10 = 0, VAR_11 = 1;
 int VAR_12;
 char VAR_13[1024];
 FUNC_5(VAR_7, sizeof(VAR_7), "UBCT%d ", VAR_0);
 FUNC_2(VAR_2, VAR_3, VAR_7, FUNC_7(VAR_7));
 for(VAR_12=0; VAR_12<VAR_5; VAR_12++) {
  FUNC_2(VAR_2, VAR_3, VAR_8, FUNC_7(VAR_8));
  FUNC_2(VAR_2, VAR_3, VAR_6[VAR_12], FUNC_7(VAR_6[VAR_12]));
 }
 FUNC_2(VAR_2, VAR_3, VAR_9, FUNC_7(VAR_9));

 if(VAR_5 == 1 && FUNC_6(VAR_6[0], "load_cache") == 0) {
  FUNC_4(VAR_2, VAR_3, VAR_1, VAR_13, sizeof(VAR_13));
 }
 else if(VAR_5 >= 1 && (FUNC_6(VAR_6[0], "local_zones") == 0 ||
  FUNC_6(VAR_6[0], "local_zones_remove") == 0 ||
  FUNC_6(VAR_6[0], "local_datas") == 0 ||
  FUNC_6(VAR_6[0], "view_local_datas") == 0 ||
  FUNC_6(VAR_6[0], "local_datas_remove") == 0)) {
  FUNC_4(VAR_2, VAR_3, VAR_1, VAR_13, sizeof(VAR_13));
  FUNC_3(VAR_2, VAR_3);
 }

 while(1) {
  if(FUNC_1(VAR_2, VAR_3, VAR_13, sizeof(VAR_13)) == 0) {
   break;
  }
  if(VAR_11 && FUNC_8(VAR_13, "error", 5) == 0) {
   FUNC_0("%s", VAR_13);
   VAR_10 = 1;
  } else if (!VAR_4)
   FUNC_0("%s", VAR_13);

  VAR_11 = 0;
 }
 return VAR_10;
}
