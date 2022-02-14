
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdb_cb_t ;
typedef int dmu_tx_t ;
typedef int blkptr_t ;
typedef int blkbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,int,int const*) ;
 int FUNC_2 (int *,int *,int const*,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, const blkptr_t *VAR_4, dmu_tx_t *VAR_5)
{
 zdb_cb_t *VAR_6 = VAR_3;

 if (VAR_2['b'] >= 5) {
  char VAR_7[VAR_0];
  FUNC_1(VAR_7, sizeof (VAR_7), VAR_4);
  (void) FUNC_0("[%s] %s\n",
      "deferred free", VAR_7);
 }
 FUNC_2(VAR_6, ((void*)0), VAR_4, VAR_1);
 return (0);
}
