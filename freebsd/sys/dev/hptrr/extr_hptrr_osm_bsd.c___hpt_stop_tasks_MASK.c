
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int param ;
struct TYPE_5__ {int Flags; int nDisk; int * Members; } ;
struct TYPE_6__ {TYPE_1__ array; } ;
struct TYPE_7__ {scalar_t__ Type; TYPE_2__ u; } ;
typedef int PVBUS_EXT ;
typedef TYPE_3__ LOGICAL_DEVICE_INFO_V3 ;
typedef int DEVICEID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(PVBUS_EXT VAR_10, DEVICEID VAR_11)
{
 LOGICAL_DEVICE_INFO_V3 VAR_12;
 int VAR_13, VAR_14;
 DEVICEID VAR_15[2] = { VAR_11, 0 };

 if (FUNC_3(VAR_11, &VAR_12))
  return -1;

 if (VAR_12.Type!=VAR_9)
  return -1;

 if (VAR_12.u.array.Flags & VAR_1)
  VAR_15[1] = VAR_5;
 else if (VAR_12.u.array.Flags & VAR_3)
  VAR_15[1] = VAR_7;
 else if (VAR_12.u.array.Flags & VAR_0)
  VAR_15[1] = VAR_4;
 else if (VAR_12.u.array.Flags & VAR_2)
  VAR_15[1] = VAR_6;
 else
  return -1;

 FUNC_2(("SET_ARRAY_STATE(%x, %d)", VAR_15[0], VAR_15[1]));
 VAR_14 = FUNC_1(VAR_8,
    VAR_15, sizeof(VAR_15), 0, 0);

 for (VAR_13=0; VAR_13<VAR_12.u.array.nDisk; VAR_13++)
  if (FUNC_0(VAR_12.u.array.Members[VAR_13]))
   FUNC_4(VAR_10, VAR_12.u.array.Members[VAR_13]);

 return VAR_14;
}
