
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kern_data_len; int kern_sg_entries; } ;
union ctl_io {TYPE_1__ scsiio; } ;
typedef scalar_t__ uint32_t ;
struct ctl_sg_entry {scalar_t__ len; int addr; } ;


 int VAR_0 ;
 struct ctl_sg_entry* FUNC_0 (union ctl_io*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_3(union ctl_io *VAR_3)
{
 struct ctl_sg_entry *VAR_4;
 uint32_t VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = 0;
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = VAR_3->scsiio.kern_data_len;







 for (VAR_7 = 0; VAR_5 > 0; VAR_7++) {
  VAR_4[VAR_7].len = FUNC_1(VAR_5, VAR_0);
  VAR_4[VAR_7].addr =
      FUNC_2(VAR_4[VAR_7].len, VAR_1, VAR_2);

  VAR_5 -= VAR_4[VAR_7].len;
 }




 VAR_3->scsiio.kern_sg_entries = VAR_7;

 return (VAR_6);
}
