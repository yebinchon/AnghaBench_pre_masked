
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahd_softc {void** sysctl_tree; int * sysctl_ctx; int * summerr; int dev_softc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,char*,int,struct ahd_softc*,size_t,int ,char*,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int ,int *,size_t,char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char** VAR_13 ;
 char** VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct ahd_softc *VAR_17)
{
 u_int VAR_18;

 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++)
  FUNC_6(&VAR_17->sysctl_ctx[VAR_18]);

 VAR_17->sysctl_tree[VAR_4] =
     FUNC_0(&VAR_17->sysctl_ctx[VAR_4],
       FUNC_4(VAR_10), VAR_9,
       FUNC_5(VAR_17->dev_softc), VAR_6, 0,
       VAR_15[VAR_4]);
     FUNC_1(&VAR_17->sysctl_ctx[VAR_4],
       FUNC_3(VAR_17->sysctl_tree[VAR_4]),
       VAR_9, "clear", VAR_8 | VAR_7, VAR_17,
       0, VAR_11, "IU",
       "Clear all counters");

 for (VAR_18 = VAR_5; VAR_18 < VAR_3; VAR_18++)
  VAR_17->sysctl_tree[VAR_18] =
      FUNC_0(&VAR_17->sysctl_ctx[VAR_18],
        FUNC_3(VAR_17->sysctl_tree[VAR_4]),
        VAR_9, VAR_16[VAR_18],
        VAR_6, 0,
        VAR_15[VAR_18]);

 for (VAR_18 = VAR_0; VAR_18 < VAR_1; VAR_18++) {
  FUNC_2(&VAR_17->sysctl_ctx[VAR_5],
    FUNC_3(VAR_17->sysctl_tree[VAR_5]),
    VAR_9, VAR_14[VAR_18],
    VAR_6, &VAR_17->summerr[VAR_18], VAR_18,
    VAR_13[VAR_18]);
  FUNC_1(&VAR_17->sysctl_ctx[VAR_2],
    FUNC_3(VAR_17->sysctl_tree[VAR_2]),
    VAR_9, VAR_14[VAR_18],
    VAR_7 | VAR_8, VAR_17, VAR_18,
    VAR_12, "IU",
    VAR_13[VAR_18]);
 }
}
