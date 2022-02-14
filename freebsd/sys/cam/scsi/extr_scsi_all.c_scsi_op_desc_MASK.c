
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct scsi_op_quirk_entry {int num_ops; struct op_table_entry* op_table; } ;
struct scsi_inquiry_data {int dummy; } ;
struct op_table_entry {int opcode; int opmask; char const* desc; } ;
typedef int * caddr_t ;


 int FUNC_0 (struct scsi_inquiry_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int *,int,int,int ) ;
 int FUNC_2 (struct op_table_entry*) ;
 int VAR_4 ;
 struct op_table_entry* VAR_5 ;
 struct op_table_entry* VAR_6 ;

const char *
FUNC_3(u_int16_t VAR_7, struct scsi_inquiry_data *VAR_8)
{
 caddr_t VAR_9;
 int VAR_10, VAR_11;
 u_int32_t VAR_12;
 u_int16_t VAR_13;
 int VAR_14[2];
 struct op_table_entry *VAR_15[2];
 int VAR_16;






 if (VAR_8 == ((void*)0)) {
  VAR_13 = VAR_0;
  VAR_9 = ((void*)0);
 } else {
  VAR_13 = FUNC_0(VAR_8);

  VAR_9 = FUNC_1((caddr_t)VAR_8,
           (caddr_t)VAR_6,
           FUNC_2(VAR_6),
           sizeof(*VAR_6),
           VAR_4);
 }

 if (VAR_9 != ((void*)0)) {
  VAR_15[0] = ((struct scsi_op_quirk_entry *)VAR_9)->op_table;
  VAR_14[0] = ((struct scsi_op_quirk_entry *)VAR_9)->num_ops;
  VAR_15[1] = VAR_5;
  VAR_14[1] = FUNC_2(VAR_5);
  VAR_16 = 2;
 } else {




  if ((VAR_7 > 0xBF) || ((VAR_7 > 0x5F) && (VAR_7 < 0x80)))
   return("Vendor Specific Command");

  VAR_15[0] = VAR_5;
  VAR_14[0] = FUNC_2(VAR_5);
  VAR_16 = 1;
 }


 if (VAR_13 == VAR_2)
  VAR_13 = VAR_0;




 if (VAR_13 == VAR_3)
  VAR_13 = VAR_0;


 if (VAR_13 == VAR_1)
  VAR_13 = VAR_0;

 VAR_12 = 1 << VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++) {
  for (VAR_10 = 0;VAR_10 < VAR_14[VAR_11] && VAR_15[VAR_11][VAR_10].opcode <= VAR_7; VAR_10++){
   if ((VAR_15[VAR_11][VAR_10].opcode == VAR_7)
    && ((VAR_15[VAR_11][VAR_10].opmask & VAR_12) != 0))
    return(VAR_15[VAR_11][VAR_10].desc);
  }
 }





 return("Vendor Specific Command");

}
