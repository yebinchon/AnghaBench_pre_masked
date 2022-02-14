
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sense_len; int sense_data; } ;
union ctl_io {TYPE_1__ scsiio; } ;
typedef int tpc_error_action ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*,int*,int*,int*,int) ;

__attribute__((used)) static tpc_error_action
FUNC_1(union ctl_io *VAR_3)
{
 tpc_error_action VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;




 VAR_4 = VAR_2;

 FUNC_0(&VAR_3->scsiio.sense_data,
          VAR_3->scsiio.sense_len,
          &VAR_5,
          &VAR_6,
          &VAR_7,
          &VAR_8,
                          1);

 switch (VAR_5) {
 case 133:
 case 131:
  VAR_4 |= VAR_1;
  break;
 case 134:
 case 132:
 default:
  switch (VAR_6) {
  case 128:
   VAR_4 |= VAR_1;
   break;
  case 130:




   if ((VAR_7 == 0x44) && (VAR_8 == 0x00))
    VAR_4 = VAR_0;
   break;
  case 129:




   if ((VAR_7 == 0x04) && (VAR_8 == 0x02))
    VAR_4 = VAR_0;




   if ((VAR_7 == 0x04) && (VAR_8 == 0x03))
    VAR_4 = VAR_0;
   break;
  }
 }
 return (VAR_4);
}
