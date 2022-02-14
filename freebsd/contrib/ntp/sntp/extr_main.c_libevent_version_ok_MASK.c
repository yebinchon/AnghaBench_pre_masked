
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ev_uint32_t ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int VAR_2 ;

int
FUNC_3(void)
{
 ev_uint32_t VAR_3;
 ev_uint32_t VAR_4;

 VAR_3 = VAR_1 & 0xffff0000;
 VAR_4 = FUNC_1() & 0xffff0000;
 if (VAR_3 != VAR_4) {
  FUNC_2(VAR_2,
   "Incompatible libevent versions: have %s, built with %s\n",
   FUNC_0(),
   VAR_0);
  return 0;
 }
 return 1;
}
