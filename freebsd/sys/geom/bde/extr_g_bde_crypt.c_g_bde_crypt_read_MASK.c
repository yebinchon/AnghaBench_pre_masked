
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct g_bde_work {scalar_t__ length; int ko; scalar_t__ offset; scalar_t__ data; TYPE_1__* ksp; struct g_bde_softc* softc; } ;
struct g_bde_softc {int sectorsize; } ;
typedef scalar_t__ off_t ;
typedef int keyInstance ;
typedef int cipherInstance ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int *,int *,int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct g_bde_softc*,int *,int ,scalar_t__) ;

void
FUNC_5(struct g_bde_work *VAR_3)
{
 struct g_bde_softc *VAR_4;
 u_char *VAR_5;
 u_int VAR_6;
 off_t VAR_7;
 u_char VAR_8[VAR_2];
 keyInstance VAR_9;
 cipherInstance VAR_10;


 FUNC_1(&VAR_10);
 VAR_4 = VAR_3->softc;
 VAR_7 = 0;
 for (VAR_6 = 0; VAR_7 < VAR_3->length; VAR_6++, VAR_7 += VAR_4->sectorsize) {
  VAR_5 = (u_char *)VAR_3->ksp->data + VAR_3->ko + VAR_6 * VAR_2;
  FUNC_4(VAR_4, &VAR_9, VAR_0, VAR_3->offset + VAR_7);
  FUNC_0(&VAR_10, &VAR_9, VAR_5, VAR_8, sizeof VAR_8);
  VAR_5 = (u_char *)VAR_3->data + VAR_7;
  FUNC_2(&VAR_9, VAR_0, VAR_1, VAR_8);
  FUNC_0(&VAR_10, &VAR_9, VAR_5, VAR_5, VAR_4->sectorsize);
 }
 FUNC_3(VAR_8, sizeof VAR_8);
 FUNC_3(&VAR_10, sizeof VAR_10);
 FUNC_3(&VAR_9, sizeof VAR_9);
}
