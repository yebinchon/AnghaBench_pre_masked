
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct g_bde_work {scalar_t__ length; TYPE_1__* sp; struct g_bde_softc* softc; } ;
struct g_bde_softc {scalar_t__ sectorsize; } ;
typedef scalar_t__ off_t ;
typedef int keyInstance ;
typedef int cipherInstance ;
struct TYPE_2__ {scalar_t__* data; } ;


 int FUNC_0 (int *,int *,scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*,int,int) ;

void
FUNC_4(struct g_bde_work *VAR_3)
{
 struct g_bde_softc *VAR_4;
 u_char *VAR_5;
 off_t VAR_6;
 u_char VAR_7[VAR_2];
 keyInstance VAR_8;
 cipherInstance VAR_9;

 VAR_4 = VAR_3->softc;
 VAR_5 = VAR_3->sp->data;
 FUNC_1(&VAR_9);






 for (VAR_6 = 0; VAR_6 < VAR_3->length; VAR_6 += VAR_4->sectorsize) {
  FUNC_3(VAR_5, VAR_4->sectorsize, 0);
  FUNC_3(VAR_7, sizeof VAR_7, 0);
  FUNC_2(&VAR_8, VAR_0, VAR_1, VAR_7);
  FUNC_0(&VAR_9, &VAR_8, VAR_5, VAR_5, VAR_4->sectorsize);
  VAR_5 += VAR_4->sectorsize;
 }





 FUNC_3(&VAR_6, sizeof VAR_6, 1);
}
