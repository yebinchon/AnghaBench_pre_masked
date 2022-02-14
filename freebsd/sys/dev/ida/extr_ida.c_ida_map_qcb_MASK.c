
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_softc {int flags; int buffer_dmat; } ;
struct ida_qcb {int dmamap; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,void*,int ,int ,struct ida_qcb*,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct ida_softc *VAR_6, struct ida_qcb *VAR_7, void *VAR_8,
    bus_size_t VAR_9)
{
 int VAR_10, VAR_11;

 if (VAR_6->flags & VAR_3)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_0;
 VAR_10 = FUNC_0(VAR_6->buffer_dmat, VAR_7->dmamap, VAR_8, VAR_9,
     VAR_5, VAR_7, VAR_11);
 if (VAR_10 == VAR_2) {
  VAR_6->flags |= VAR_4;
  VAR_10 = 0;
 }
 return (VAR_10);
}
