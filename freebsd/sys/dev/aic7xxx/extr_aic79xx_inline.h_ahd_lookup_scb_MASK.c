
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct scb {int dummy; } ;
struct TYPE_2__ {struct scb** scbindex; } ;
struct ahd_softc {TYPE_1__ scb_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahd_softc*,struct scb*,int) ;

__attribute__((used)) static __inline struct scb *
FUNC_1(struct ahd_softc *VAR_3, u_int VAR_4)
{
 struct scb* VAR_5;

 if (VAR_4 >= VAR_0)
  return (((void*)0));
 VAR_5 = VAR_3->scb_data.scbindex[VAR_4];
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_3, VAR_5,
        VAR_1|VAR_2);
 return (VAR_5);
}
