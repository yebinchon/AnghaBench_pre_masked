
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pqisrc_softstate_t ;
typedef int ib_queue_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(pqisrc_softstate_t *VAR_2,
   ib_queue_t *VAR_3)
{
 int VAR_4 = VAR_1;

 FUNC_0("IN\n");

 VAR_4 = FUNC_2(VAR_2,VAR_3);
 if ( VAR_1 == VAR_4)
  VAR_4 = FUNC_1(VAR_2,
     VAR_3, VAR_0);

 FUNC_0("OUT ret : %d\n", VAR_4);
 return VAR_4;
}
