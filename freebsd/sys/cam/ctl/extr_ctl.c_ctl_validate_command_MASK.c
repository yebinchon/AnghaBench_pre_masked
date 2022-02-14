
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint8_t ;
struct ctl_scsiio {int* cdb; } ;
struct ctl_cmd_entry {int length; int* usage; int * execute; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (union ctl_io*) ;
 struct ctl_cmd_entry* FUNC_2 (struct ctl_scsiio*,int*) ;
 int FUNC_3 (struct ctl_scsiio*,int,int,int,int,int) ;
 int FUNC_4 (struct ctl_scsiio*) ;
 int FUNC_5 (int) ;

const struct ctl_cmd_entry *
FUNC_6(struct ctl_scsiio *VAR_0)
{
 const struct ctl_cmd_entry *VAR_1;
 int VAR_2, VAR_3;
 uint8_t VAR_4;

 VAR_1 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_1->execute == ((void*)0)) {
  if (VAR_3)
   FUNC_3(VAR_0,
                         1,
                       1,
                     1,
                         1,
                   4);
  else
   FUNC_4(VAR_0);
  FUNC_1((union ctl_io *)VAR_0);
  return (((void*)0));
 }
 FUNC_0(VAR_1->length > 0,
     ("Not defined length for command 0x%02x/0x%02x",
      VAR_0->cdb[0], VAR_0->cdb[1]));
 for (VAR_2 = 1; VAR_2 < VAR_1->length; VAR_2++) {
  VAR_4 = VAR_0->cdb[VAR_2] & ~VAR_1->usage[VAR_2 - 1];
  if (VAR_4 == 0)
   continue;
  FUNC_3(VAR_0,
                        1,
                      1,
                    VAR_2,
                        1,
                  FUNC_5(VAR_4) - 1);
  FUNC_1((union ctl_io *)VAR_0);
  return (((void*)0));
 }
 return (VAR_1);
}
