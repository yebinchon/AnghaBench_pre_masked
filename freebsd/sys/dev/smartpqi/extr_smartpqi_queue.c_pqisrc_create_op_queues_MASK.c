
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pqisrc_softstate_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(pqisrc_softstate_t *VAR_2)
{
 int VAR_3 = VAR_1;

 FUNC_0("IN\n");


 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto err_out;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto err_out_obq;


 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto err_out_eventq;

 FUNC_0("OUT\n");
 return VAR_3;
err_out_eventq:
 FUNC_5(VAR_2);
err_out_obq:
 FUNC_4(VAR_2);
err_out:
 FUNC_0("OUT failed %d\n", VAR_3);
 return VAR_0;
}
