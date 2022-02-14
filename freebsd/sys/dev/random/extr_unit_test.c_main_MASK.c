
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thrd_t ;
struct TYPE_2__ {int (* ra_deinit_alg ) (int *) ;int (* ra_init_alg ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*) ;
 int VAR_5 ;

int
FUNC_7(int VAR_6, char *VAR_7[])
{
 thrd_t VAR_8[VAR_0];
 int VAR_9;
 long VAR_10;

 VAR_3.ra_init_alg(((void*)0));

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  FUNC_1("In main: creating thread %ld\n", VAR_10);
  VAR_9 = FUNC_4(&VAR_8[VAR_10], (VAR_10 == 0 ? VAR_2 : VAR_1), ((void*)0));
  if (VAR_9 != VAR_5) {
   FUNC_1("ERROR; return code from thrd_create() is %d\n", VAR_9);
   FUNC_0(-1);
  }
 }

 for (VAR_10 = 2; VAR_10 < VAR_0; VAR_10++)
  FUNC_6(VAR_8[VAR_10], &VAR_9);

 VAR_4 = 1;

 FUNC_6(VAR_8[1], &VAR_9);
 FUNC_6(VAR_8[0], &VAR_9);

 VAR_3.ra_deinit_alg(((void*)0));


 FUNC_5(0);

 return (0);
}
