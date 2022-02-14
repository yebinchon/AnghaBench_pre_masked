
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqisrc_softstate {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pqisrc_softstate*,int ) ;

int
FUNC_3(void *VAR_2)
{
 struct pqisrc_softstate *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 FUNC_1("IN\n");

 VAR_3 = (struct pqisrc_softstate *)VAR_2;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4 != VAR_1) {
  FUNC_0("Unable to flush adapter cache! rval = %d", VAR_4);
 }

 FUNC_1("OUT\n");

 return VAR_4;
}
