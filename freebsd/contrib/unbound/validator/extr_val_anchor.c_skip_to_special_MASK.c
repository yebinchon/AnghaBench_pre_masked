
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int sldns_buffer ;
typedef int FILE ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *,int *,int*,int) ;
 scalar_t__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(FILE* VAR_0, sldns_buffer* VAR_1, int* VAR_2, int VAR_3)
{
 int VAR_4;
 FUNC_4(VAR_1);
 while((VAR_4=FUNC_2(VAR_0, VAR_1, VAR_2, 1))) {
  if(VAR_4 == 1 && FUNC_0((unsigned char)*FUNC_3(VAR_1))) {
   FUNC_4(VAR_1);
   continue;
  }
  if(VAR_4 != 1 || *FUNC_3(VAR_1) != (uint8_t)VAR_3) {
   FUNC_5(VAR_1, 0);
   FUNC_1("trusted-keys, line %d, expected %c",
    *VAR_2, VAR_3);
   return 0;
  }
  return 1;
 }
 FUNC_1("trusted-keys, line %d, expected %c got EOF", *VAR_2, VAR_3);
 return 0;
}
