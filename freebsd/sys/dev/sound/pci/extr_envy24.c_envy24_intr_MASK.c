
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int psize; int* blk; int* intr; int rsize; int lock; struct sc_chinfo* chan; int dev; } ;
struct sc_chinfo {int blk; int channel; scalar_t__ run; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (struct sc_info*,int ) ;
 int FUNC_5 (char*,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_8)
{
 struct sc_info *VAR_9 = (struct sc_info *)VAR_8;
 struct sc_chinfo *VAR_10;
 u_int32_t VAR_11, VAR_12, VAR_13;
 int VAR_14;




 FUNC_6(VAR_9->lock);
 if (FUNC_2(VAR_9, VAR_6)) {



  VAR_12 = VAR_9->psize / 4;
  VAR_11 = VAR_12 - FUNC_3(VAR_9, VAR_4, 2) - 1;



  VAR_11 -= VAR_11 % VAR_9->blk[0];
  VAR_13 = (VAR_11 + VAR_12 - VAR_9->intr[0]) % VAR_12;



  for (VAR_14 = VAR_0; VAR_14 <= VAR_1; VAR_14++) {
   VAR_10 = &VAR_9->chan[VAR_14];




   if (VAR_10->run && VAR_10->blk <= VAR_13) {
    FUNC_7(VAR_9->lock);
    FUNC_0(VAR_10->channel);
    FUNC_6(VAR_9->lock);
   }
  }
  VAR_9->intr[0] = VAR_11;
  FUNC_4(VAR_9, VAR_6);
 }
 if (FUNC_2(VAR_9, VAR_7)) {



  VAR_12 = VAR_9->rsize / 4;
  VAR_11 = VAR_12 - FUNC_3(VAR_9, VAR_5, 2) - 1;
  VAR_11 -= VAR_11 % VAR_9->blk[1];
  VAR_13 = (VAR_11 + VAR_12 - VAR_9->intr[1]) % VAR_12;
  for (VAR_14 = VAR_2; VAR_14 <= VAR_3; VAR_14++) {
   VAR_10 = &VAR_9->chan[VAR_14];
   if (VAR_10->run && VAR_10->blk <= VAR_13) {
    FUNC_7(VAR_9->lock);
    FUNC_0(VAR_10->channel);
    FUNC_6(VAR_9->lock);
   }
  }
  VAR_9->intr[1] = VAR_11;
  FUNC_4(VAR_9, VAR_7);
 }
 FUNC_7(VAR_9->lock);

 return;
}
