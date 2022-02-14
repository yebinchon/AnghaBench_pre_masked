
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,unsigned char*,int) ;
 int FUNC_1 (int,unsigned char*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_2, void *VAR_3, void *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6[3000];

 VAR_5 = FUNC_1(VAR_2, VAR_6, sizeof(VAR_6), 0);
 if (VAR_5 < 0) {
  FUNC_3(VAR_0, "macsec_linux: recv: %s",
      FUNC_2(VAR_1));
  return;
 }

 FUNC_0(VAR_3, VAR_6, VAR_5);
}
