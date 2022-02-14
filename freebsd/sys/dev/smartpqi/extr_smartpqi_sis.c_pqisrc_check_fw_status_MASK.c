
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pqisrc_softstate_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(pqisrc_softstate_t *VAR_4)
{
 int VAR_5 = VAR_1;
 uint32_t VAR_6 = VAR_3;

 FUNC_2("IN\n");

 FUNC_4(1000000);
 FUNC_0((FUNC_3(VAR_4) &
  VAR_0), VAR_6);
 if (!VAR_6) {
  FUNC_1("FW check status timedout\n");
  VAR_5 = VAR_2;
 }

 FUNC_2("OUT\n");
 return VAR_5;
}
