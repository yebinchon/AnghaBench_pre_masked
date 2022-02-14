
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int chip; int unpause; int pause; int * scb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int * FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;

int
FUNC_3(struct ahc_softc *VAR_7)
{


 if ((VAR_7->chip & VAR_0) == 0)
  VAR_7->unpause = FUNC_0(VAR_7, VAR_2) & VAR_3;
 else
  VAR_7->unpause = 0;
 VAR_7->pause = VAR_7->unpause | VAR_6;

 if (VAR_7->scb_data == ((void*)0)) {
  VAR_7->scb_data = FUNC_1(sizeof(*VAR_7->scb_data),
           VAR_4, VAR_5);
  if (VAR_7->scb_data == ((void*)0))
   return (VAR_1);
  FUNC_2(VAR_7->scb_data, 0, sizeof(*VAR_7->scb_data));
 }

 return (0);
}
