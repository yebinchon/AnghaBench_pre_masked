
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mps_softc {int mps_log_eh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int VAR_3 ;
 int FUNC_1 (struct mps_softc*,int *,int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct mps_softc *VAR_4)
{
 u32 VAR_5[VAR_2];

 FUNC_0(VAR_5, 16);
 FUNC_2(VAR_5, VAR_0);
 FUNC_2(VAR_5, VAR_1);

 FUNC_1(VAR_4, VAR_5, VAR_3, ((void*)0),
     &VAR_4->mps_log_eh);

 return (0);
}
