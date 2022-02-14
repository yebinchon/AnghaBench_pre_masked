
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef size_t u_char ;
struct TYPE_2__ {size_t* salt; size_t* mkey; } ;
struct g_bde_softc {TYPE_1__ key; } ;
typedef int off_t ;
typedef int keyInstance ;
typedef size_t MD5_CTX ;


 int FUNC_0 (int *,int,int ,size_t*) ;
 int VAR_0 ;
 int FUNC_1 (size_t*,size_t*) ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (size_t*,size_t*,int) ;
 int FUNC_4 (size_t*,int) ;
 int FUNC_5 (size_t*,int ) ;

__attribute__((used)) static void
FUNC_6(struct g_bde_softc *VAR_1, keyInstance *VAR_2, int VAR_3, off_t VAR_4)
{
 u_int VAR_5;
 MD5_CTX VAR_6;
 u_char VAR_7[16];
 u_char VAR_8[8];


 FUNC_5(VAR_8, VAR_4);

 FUNC_2(&VAR_6);
 FUNC_3(&VAR_6, VAR_1->key.salt, 8);
 FUNC_3(&VAR_6, VAR_8, sizeof VAR_8);
 FUNC_3(&VAR_6, VAR_1->key.salt + 8, 8);
 FUNC_1(VAR_7, &VAR_6);

 FUNC_2(&VAR_6);
 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  FUNC_3(&VAR_6, &VAR_1->key.mkey[VAR_7[VAR_5]], 1);
  if (VAR_5 == 8)
   FUNC_3(&VAR_6, VAR_8, sizeof VAR_8);
 }
 FUNC_4(VAR_8, sizeof VAR_8);
 FUNC_1(VAR_7, &VAR_6);
 FUNC_4(&VAR_6, sizeof VAR_6);
 FUNC_0(VAR_2, VAR_3, VAR_0, VAR_7);
 FUNC_4(VAR_7, sizeof VAR_7);
}
