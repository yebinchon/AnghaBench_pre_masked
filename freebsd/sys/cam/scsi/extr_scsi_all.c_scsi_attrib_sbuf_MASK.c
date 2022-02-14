
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_mam_attribute_header {int id; } ;
struct scsi_attrib_table_entry {int (* to_str ) (struct sbuf*,struct scsi_mam_attribute_header*,int,int ,int,char*,int) ;int * suffix; int flags; int * desc; } ;
struct sbuf {int dummy; } ;


 size_t FUNC_0 (struct scsi_attrib_table_entry*) ;
 int FUNC_1 (struct sbuf*,char*,...) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sbuf*,int,struct scsi_mam_attribute_header*,int,int *) ;
 int FUNC_5 (struct sbuf*,int,struct scsi_mam_attribute_header*,int,char*,int) ;
 struct scsi_attrib_table_entry* FUNC_6 (struct scsi_attrib_table_entry*,size_t,int) ;
 struct scsi_attrib_table_entry* VAR_0 ;
 int FUNC_7 (struct sbuf*,struct scsi_mam_attribute_header*,int,int ,int,char*,int) ;
 int FUNC_8 (struct sbuf*,struct scsi_mam_attribute_header*,int,int ,int,char*,int) ;

int
FUNC_9(struct sbuf *VAR_1, struct scsi_mam_attribute_header *VAR_2,
   uint32_t VAR_3, struct scsi_attrib_table_entry *VAR_4,
   size_t VAR_5, int VAR_6,
   uint32_t VAR_7, char *VAR_8, int VAR_9)
{
 int VAR_10;
 struct scsi_attrib_table_entry *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 struct scsi_attrib_table_entry *VAR_13 = ((void*)0);
 size_t VAR_14 = 0, VAR_15 = 0;
 uint32_t VAR_16;

 VAR_10 = 0;

 if (VAR_3 < sizeof(*VAR_2)) {
  VAR_10 = 1;
  goto bailout;
 }

 VAR_16 = FUNC_3(VAR_2->id);

 if (VAR_4 != ((void*)0)) {
  if (VAR_6 != 0) {
   VAR_11 = VAR_4;
   VAR_14 = VAR_5;
   VAR_12 = VAR_0;
   VAR_15 = FUNC_0(VAR_0);
  } else {
   VAR_11 = VAR_0;
   VAR_14 = FUNC_0(VAR_0);
   VAR_12 = VAR_4;
   VAR_15 = VAR_5;
  }
 } else {
  VAR_11 = VAR_0;
  VAR_14 = FUNC_0(VAR_0);
 }

 VAR_13 = FUNC_6(VAR_11, VAR_14, VAR_16);
 if (VAR_13 != ((void*)0)) {
  FUNC_4(VAR_1, VAR_7, VAR_2, VAR_3,
     VAR_13->desc);
  if (VAR_13->to_str == ((void*)0))
   goto print_default;
  VAR_10 = VAR_13->to_str(VAR_1, VAR_2, VAR_3, VAR_13->flags,
           VAR_7, VAR_8, VAR_9);
  goto bailout;
 }
 if (VAR_12 != ((void*)0)) {
  VAR_13 = FUNC_6(VAR_12, VAR_15, VAR_16);
  if (VAR_13 != ((void*)0)) {
   if (VAR_13->to_str == ((void*)0))
    goto print_default;

   FUNC_4(VAR_1, VAR_7, VAR_2,
      VAR_3, VAR_13->desc);
   VAR_10 = VAR_13->to_str(VAR_1, VAR_2, VAR_3, VAR_13->flags,
            VAR_7, VAR_8,
            VAR_9);
   goto bailout;
  }
 }

 FUNC_4(VAR_1, VAR_7, VAR_2, VAR_3, ((void*)0));

print_default:
 VAR_10 = FUNC_5(VAR_1, VAR_3, VAR_2, VAR_7,
     VAR_8, VAR_9);
bailout:
 if (VAR_10 == 0) {
   if ((VAR_13 != ((void*)0))
   && (VAR_13->suffix != ((void*)0)))
   FUNC_1(VAR_1, " %s", VAR_13->suffix);

  FUNC_2(VAR_1);
  FUNC_1(VAR_1, "\n");
 }

 return (VAR_10);
}
