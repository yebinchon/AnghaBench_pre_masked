
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
struct ctl_scsiio {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;

int
FUNC_3(struct ctl_scsiio *VAR_1)
{

 FUNC_0(("ctl_tur\n"));

 FUNC_2(VAR_1);
 FUNC_1((union ctl_io *)VAR_1);

 return (VAR_0);
}
