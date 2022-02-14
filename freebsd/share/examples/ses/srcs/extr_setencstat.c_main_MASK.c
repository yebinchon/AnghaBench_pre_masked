
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ encioc_enc_status_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 long FUNC_5 (char*,int *,int ) ;

int
FUNC_6(int VAR_3, char **VAR_4)
{
 int VAR_5;
 long VAR_6;
 encioc_enc_status_t VAR_7;

 if (VAR_3 != 3) {
  FUNC_1(VAR_2, "usage: %s device enclosure_status\n", *VAR_4);
  return (1);
 }
 VAR_5 = FUNC_3(VAR_4[1], VAR_1);
 if (VAR_5 < 0) {
  FUNC_4(VAR_4[1]);
  return (1);
 }

 VAR_6 = FUNC_5(VAR_4[2], ((void*)0), 0);
 VAR_7 = (encioc_enc_status_t)VAR_6;
 if (FUNC_2(VAR_5, VAR_0, (caddr_t) &VAR_7) < 0) {
  FUNC_4("ENCIOC_SETENCSTAT");
 }
 (void) FUNC_0(VAR_5);
 return (0);
}
