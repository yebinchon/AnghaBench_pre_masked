
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ clear_semaphore_once; } ;
struct TYPE_6__ {int smb_counter; } ;
struct TYPE_8__ {TYPE_3__ _82575; TYPE_2__ _82571; } ;
struct TYPE_5__ {int word_size; } ;
struct e1000_hw {TYPE_4__ dev_spec; TYPE_1__ nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (int) ;

s32 FUNC_6(struct e1000_hw *VAR_6)
{
 u32 VAR_7;
 s32 VAR_8 = VAR_6->nvm.word_size + 1;
 s32 VAR_9 = VAR_6->nvm.word_size + 1;
 s32 VAR_10 = 0;

 FUNC_0("e1000_get_hw_semaphore");
 if (VAR_6->dev_spec._82571.smb_counter > 2)
  VAR_9 = 1;



 while (VAR_10 < VAR_9) {
  VAR_7 = FUNC_2(VAR_6, VAR_2);
  if (!(VAR_7 & VAR_3))
   break;

  FUNC_5(50);
  VAR_10++;
 }

 if (VAR_10 == VAR_9) {
  FUNC_1("Driver can't access device - SMBI bit is set.\n");
  VAR_6->dev_spec._82571.smb_counter++;
 }




         if (VAR_6->dev_spec._82575.clear_semaphore_once) {
          VAR_6->dev_spec._82575.clear_semaphore_once = VAR_5;
          FUNC_4(VAR_6);
          for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
           VAR_7 = FUNC_2(VAR_6, VAR_2);
           if (!(VAR_7 & VAR_3))
            break;

           FUNC_5(50);
          }
         }


 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_7 = FUNC_2(VAR_6, VAR_2);
  FUNC_3(VAR_6, VAR_2, VAR_7 | VAR_4);


  if (FUNC_2(VAR_6, VAR_2) & VAR_4)
   break;

  FUNC_5(50);
 }

 if (VAR_10 == VAR_8) {

  FUNC_4(VAR_6);
  FUNC_1("Driver can't access the NVM\n");
  return -VAR_0;
 }

 return VAR_1;
}
