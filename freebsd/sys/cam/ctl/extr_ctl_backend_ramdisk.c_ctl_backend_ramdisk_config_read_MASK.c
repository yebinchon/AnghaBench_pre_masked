
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cdb; } ;
union ctl_io {TYPE_1__ scsiio; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(union ctl_io *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->scsiio.cdb[0]) {
 case 128:
  if (VAR_2->scsiio.cdb[1] == VAR_1) {
   VAR_3 = FUNC_0(VAR_2);
   break;
  }
  FUNC_2(&VAR_2->scsiio,
                        1,
                      1,
                    1,
                        1,
                  4);
  FUNC_1(VAR_2);
  VAR_3 = VAR_0;
  break;
 default:
  FUNC_3(&VAR_2->scsiio);
  FUNC_1(VAR_2);
  VAR_3 = VAR_0;
  break;
 }
 return (VAR_3);
}
