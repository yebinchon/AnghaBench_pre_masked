
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int bktr_ptr_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(bktr_ptr_t VAR_2, u_char VAR_3)
{
 int VAR_4;

 if (FUNC_2(VAR_2, VAR_0, VAR_3, -1) == -1) {
  if (VAR_1)
   FUNC_3("%s: MT2032 write failed (i2c addr %#x)\n",
    FUNC_0(VAR_2), VAR_0);
  return -1;
 }
 if ((VAR_4 = FUNC_1(VAR_2, VAR_0 + 1)) == -1) {
  if (VAR_1)
   FUNC_3("%s: MT2032 get register %d failed\n",
    FUNC_0(VAR_2), VAR_3);
  return -1;
 }
 return VAR_4;
}
