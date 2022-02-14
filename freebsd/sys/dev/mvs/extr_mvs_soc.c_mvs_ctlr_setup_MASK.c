
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_controller {int ccc; int cccc; int gmim; int pmim; int r_mem; int channels; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct mvs_controller* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_9)
{
 struct mvs_controller *VAR_10 = FUNC_2(VAR_9);
 int VAR_11 = VAR_10->ccc, VAR_12 = VAR_10->cccc, VAR_13 = 0;


 FUNC_0(VAR_10->r_mem, VAR_1, 0x00000000);

 FUNC_0(VAR_10->r_mem, VAR_2, 0x00000000);

 FUNC_0(VAR_10->r_mem, VAR_0, 0);

 if (VAR_11 && VAR_8) {
  FUNC_3(VAR_9,
      "CCC with %dus/%dcmd enabled\n",
      VAR_10->ccc, VAR_10->cccc);
 }
 VAR_11 *= 150;
 FUNC_0(VAR_10->r_mem, VAR_3, VAR_12);
 FUNC_0(VAR_10->r_mem, VAR_4, VAR_11);
 if (VAR_11)
  VAR_13 |= VAR_7;

 VAR_10->gmim = ((VAR_11 ? VAR_7 :
     (VAR_5 & FUNC_1(VAR_10->channels))) |
     (VAR_6 & FUNC_1(VAR_10->channels)));
 FUNC_0(VAR_10->r_mem, VAR_1, VAR_10->gmim | VAR_10->pmim);
 return (0);
}
