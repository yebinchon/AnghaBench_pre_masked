
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_reset_cmd {void* halt_pkd; void* val; } ;
struct adapter {int flags; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fw_reset_cmd,int ,int ) ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct fw_reset_cmd*,int ,int) ;
 int FUNC_3 (struct adapter*,int ,int ,int ) ;
 int FUNC_4 (struct adapter*,unsigned int,struct fw_reset_cmd*,int,int *) ;

int FUNC_5(struct adapter *VAR_11, unsigned int VAR_12, int VAR_13)
{
 int VAR_14 = 0;





 if (VAR_11->flags & VAR_2 && VAR_12 <= VAR_8) {
  struct fw_reset_cmd VAR_15;

  FUNC_2(&VAR_15, 0, sizeof(VAR_15));
  FUNC_0(VAR_15, VAR_9, VAR_10);
  VAR_15.val = FUNC_1(VAR_5 | VAR_6);
  VAR_15.halt_pkd = FUNC_1(VAR_3);
  VAR_14 = FUNC_4(VAR_11, VAR_12, &VAR_15, sizeof(VAR_15), ((void*)0));
 }
 if (VAR_14 == 0 || VAR_13) {
  FUNC_3(VAR_11, VAR_0, VAR_7, VAR_7);
  FUNC_3(VAR_11, VAR_1, VAR_4,
     VAR_4);
 }





 return VAR_14;
}
