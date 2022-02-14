
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,uintptr_t,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 char *VAR_0;
 uintptr_t VAR_1;
 int VAR_2;


 for(VAR_2=0; VAR_2 < 256; VAR_2++) {
  if ((VAR_0 = FUNC_1(20)) == ((void*)0))
   break;
  (void) FUNC_2(VAR_0, "cpu[%d]", VAR_2);
  VAR_1 = 0x01000000 + (VAR_2 << 16);
  FUNC_0(VAR_0, VAR_1, sizeof (uintptr_t));
 }
}
