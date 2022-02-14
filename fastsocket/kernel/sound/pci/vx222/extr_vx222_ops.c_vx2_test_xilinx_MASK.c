
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {scalar_t__ type; } ;
struct snd_vx222 {int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (struct snd_vx222*,int ) ;
 int FUNC_2 (struct snd_vx222*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct vx_core *VAR_9)
{
 struct snd_vx222 *VAR_10 = (struct snd_vx222 *)VAR_9;
 unsigned int VAR_11;

 FUNC_0("testing xilinx...\n");





 FUNC_2(VAR_10, VAR_0, VAR_10->regCDSP | VAR_4);
 FUNC_1(VAR_10, VAR_2);
 VAR_11 = FUNC_1(VAR_10, VAR_3);
 if ((VAR_11 & VAR_6) == VAR_6) {
  FUNC_0("bad!\n");
  return -VAR_1;
 }


 FUNC_2(VAR_10, VAR_0, VAR_10->regCDSP & ~VAR_4);
 FUNC_1(VAR_10, VAR_2);
 VAR_11 = FUNC_1(VAR_10, VAR_3);
 if (! (VAR_11 & VAR_6)) {
  FUNC_0("bad! #2\n");
  return -VAR_1;
 }

 if (VAR_9->type == VAR_8) {


  FUNC_2(VAR_10, VAR_0, VAR_10->regCDSP | VAR_5);
  FUNC_1(VAR_10, VAR_2);
  VAR_11 = FUNC_1(VAR_10, VAR_3);
  if ((VAR_11 & VAR_7) == VAR_7) {
   FUNC_0("bad! #3\n");
   return -VAR_1;
  }


  FUNC_2(VAR_10, VAR_0, VAR_10->regCDSP & ~VAR_5);
  FUNC_1(VAR_10, VAR_2);
  VAR_11 = FUNC_1(VAR_10, VAR_3);
  if (! (VAR_11 & VAR_7)) {
   FUNC_0("bad! #4\n");
   return -VAR_1;
  }
 }
 FUNC_0("ok, xilinx fine.\n");
 return 0;
}
