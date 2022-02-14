
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct g_bde_work {scalar_t__ length; int ko; scalar_t__ offset; TYPE_2__* ksp; TYPE_1__* sp; scalar_t__ data; struct g_bde_softc* softc; } ;
struct g_bde_softc {scalar_t__ sectorsize; } ;
typedef scalar_t__ off_t ;
typedef int keyInstance ;
typedef int cipherInstance ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int FUNC_0 (int *,int *,int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct g_bde_softc*,int *,int ,scalar_t__) ;

void
FUNC_6(struct g_bde_work *VAR_3)
{
 u_char *VAR_4, *VAR_5;
 struct g_bde_softc *VAR_6;
 u_int VAR_7;
 off_t VAR_8;
 u_char VAR_9[VAR_2];
 keyInstance VAR_10;
 cipherInstance VAR_11;

 VAR_6 = VAR_3->softc;
 FUNC_1(&VAR_11);
 VAR_8 = 0;
 for (VAR_7 = 0; VAR_8 < VAR_3->length; VAR_7++, VAR_8 += VAR_6->sectorsize) {

  VAR_4 = (u_char *)VAR_3->data + VAR_8;
  VAR_5 = (u_char *)VAR_3->sp->data + VAR_8;
  FUNC_3(VAR_9, sizeof VAR_9, 0);
  FUNC_2(&VAR_10, VAR_0, VAR_1, VAR_9);
  FUNC_0(&VAR_11, &VAR_10, VAR_4, VAR_5, VAR_6->sectorsize);

  VAR_5 = (u_char *)VAR_3->ksp->data + VAR_3->ko + VAR_7 * VAR_2;
  FUNC_5(VAR_6, &VAR_10, VAR_0, VAR_3->offset + VAR_8);
  FUNC_0(&VAR_11, &VAR_10, VAR_9, VAR_5, sizeof VAR_9);
  FUNC_4(VAR_9, sizeof VAR_9);
 }
 FUNC_4(VAR_9, sizeof VAR_9);
 FUNC_4(&VAR_11, sizeof VAR_11);
 FUNC_4(&VAR_10, sizeof VAR_10);
}
