
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct auth_xfer {int namelen; scalar_t__ dclass; int name; TYPE_1__* task_probe; } ;
typedef int ssize_t ;
typedef int sldns_buffer ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static int
FUNC_16(sldns_buffer* VAR_3, uint16_t VAR_4, struct auth_xfer* VAR_5,
 uint32_t* VAR_6)
{



 if(FUNC_11(VAR_3) < VAR_0)
  return 0;


 if(FUNC_1(FUNC_9(VAR_3)) != VAR_5->task_probe->id)
  return 0;


 if(!FUNC_4(FUNC_9(VAR_3)))
  return 0;
 if(FUNC_2(FUNC_9(VAR_3)) != VAR_1)
  return 0;
 if(FUNC_5(FUNC_9(VAR_3)) != VAR_2)
  return 0;


 if(FUNC_3(FUNC_9(VAR_3)) != 1)
  return 0;
 FUNC_15(VAR_3, VAR_0);
 if(FUNC_14(VAR_3) < VAR_5->namelen)
  return 0;
 if(FUNC_8(FUNC_10(VAR_3), VAR_5->name) != 0)
  return 0;
 FUNC_15(VAR_3, (ssize_t)VAR_5->namelen);


 if(FUNC_14(VAR_3) < 4)
  return 0;
 if(FUNC_12(VAR_3) != VAR_4)
  return 0;
 if(FUNC_12(VAR_3) != VAR_5->dclass)
  return 0;

 if(VAR_6) {
  uint16_t VAR_7;

  if(FUNC_0(FUNC_9(VAR_3)) == 0)
   return 0;

  if(FUNC_14(VAR_3) < 1)
   return 0;
  if(FUNC_6(VAR_3, FUNC_10(VAR_3),
   VAR_5->name) != 0)
   return 0;
  if(!FUNC_7(VAR_3))
   return 0;

  if(FUNC_14(VAR_3) < 4+4+2)
   return 0;
  if(FUNC_12(VAR_3) != VAR_4)
   return 0;
  if(FUNC_12(VAR_3) != VAR_5->dclass)
   return 0;
  FUNC_15(VAR_3, 4);
  VAR_7 = FUNC_12(VAR_3);
  if(FUNC_14(VAR_3) < VAR_7)
   return 0;
  if(FUNC_14(VAR_3) < 1)
   return 0;
  if(!FUNC_7(VAR_3))
   return 0;
  if(FUNC_14(VAR_3) < 1)
   return 0;
  if(!FUNC_7(VAR_3))
   return 0;
  if(FUNC_14(VAR_3) < 20)
   return 0;
  *VAR_6 = FUNC_13(VAR_3);
 }
 return 1;
}
