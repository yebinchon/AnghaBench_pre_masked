
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct scb {int dummy; } ;
struct ahc_softc {TYPE_1__* scb_data; } ;
struct TYPE_2__ {struct scb** scbindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_softc*,struct scb*,int) ;

__attribute__((used)) static __inline struct scb *
FUNC_1(struct ahc_softc *VAR_2, u_int VAR_3)
{
 struct scb* VAR_4;

 VAR_4 = VAR_2->scb_data->scbindex[VAR_3];
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_2, VAR_4,
        VAR_0|VAR_1);
 return (VAR_4);
}
