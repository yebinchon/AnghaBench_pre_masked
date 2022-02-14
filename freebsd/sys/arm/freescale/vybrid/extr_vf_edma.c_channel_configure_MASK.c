
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_softc {int device_id; } ;
struct edma_channel {int enabled; int mux_num; int mux_src; int mux_chn; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 struct edma_channel* VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct edma_softc *VAR_2, int VAR_3, int VAR_4)
{
 struct edma_channel *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if ((VAR_2->device_id == 0 && VAR_3 == 1) || (VAR_2->device_id == 1 && VAR_3 == 0)) {

  VAR_6 = VAR_0;
  VAR_7 = (VAR_2->device_id * 2) + 1;
 } else {
  VAR_6 = 0;
  VAR_7 = VAR_2->device_id * 2;
 }


 VAR_5 = ((void*)0);
 for (VAR_9 = VAR_6; VAR_9 < (VAR_6 + VAR_0); VAR_9++) {
  VAR_5 = &VAR_1[VAR_9];
  if (VAR_5->enabled == 0) {
   break;
  }
  VAR_5 = ((void*)0);
 }

 if (VAR_5 == ((void*)0)) {

  return (-1);
 }

 VAR_8 = VAR_9;

 VAR_5->enabled = 1;
 VAR_5->mux_num = VAR_7;
 VAR_5->mux_src = VAR_4;
 VAR_5->mux_chn = (VAR_8 - VAR_6);

 FUNC_0(VAR_5->mux_num, VAR_5->mux_src, VAR_5->mux_chn, 1);

 return (VAR_8);
}
