
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct vdd {int vdd_type; int rootent; int location_type_M_path_table; int location_type_L_path_table; int path_table_size; } ;
struct TYPE_2__ {char* s; } ;
struct iso9660 {int volume_sequence_number; int birth_time; int bibliographic_file_identifier; int abstract_file_identifier; int copyright_file_identifier; int application_identifier; int data_preparer_identifier; int publisher_identifier; int volume_space_size; TYPE_1__ volume_identifier; } ;
struct archive_write {struct iso9660* format_data; } ;
typedef int identifier ;
typedef enum vdc { ____Placeholder_vdc } vdc ;
typedef enum VD_type { ____Placeholder_VD_type } VD_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (unsigned char*,int,unsigned char) ;
 int FUNC_3 (unsigned char*,int ) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*,int,int ,struct iso9660*,int ,int const) ;
 int FUNC_6 (unsigned char*,int,int,int,struct archive_write*,struct vdd*,int *,char*,int,int ) ;
 int FUNC_7 (unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int ) ;
 int FUNC_9 (unsigned char*,int ) ;
 int FUNC_10 (unsigned char*,int ) ;
 int FUNC_11 (struct archive_write*,unsigned char*,int,int,char*,int) ;
 int FUNC_12 (struct archive_write*,unsigned char*,int,int,char*,int) ;
 int FUNC_13 (unsigned char*,int,int) ;
 unsigned char* FUNC_14 (struct archive_write*) ;
 int FUNC_15 (struct archive_write*,int) ;

__attribute__((used)) static int
FUNC_16(struct archive_write *VAR_10, struct vdd *VAR_11)
{
 struct iso9660 *VAR_12;
 unsigned char *VAR_13;
 uint16_t VAR_14 = 1;
 char VAR_15[256];
 enum VD_type VAR_16;
 enum vdc VAR_17;
 unsigned char VAR_18, VAR_19;
 int VAR_20;

 VAR_12 = VAR_10->format_data;
 switch (VAR_11->vdd_type) {
 case 129:
  VAR_16 = VAR_9;
  VAR_18 = VAR_19 = 1;
  VAR_17 = VAR_7;
  break;
 case 130:
  VAR_16 = VAR_9;
  VAR_18 = VAR_19 = 2;
  VAR_17 = VAR_5;
  break;
 case 128:
 default:
  VAR_16 = VAR_8;
  VAR_18 = VAR_19 = 1;



  VAR_17 = VAR_6;

  break;
 }

 VAR_13 = FUNC_14(VAR_10) -1;

 FUNC_2(VAR_13, VAR_16, VAR_18);

 FUNC_13(VAR_13, 8, 8);

 FUNC_0(VAR_15, sizeof(VAR_15));
 VAR_20 = FUNC_11(VAR_10, VAR_13, 9, 40, VAR_15, VAR_17);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 VAR_20 = FUNC_12(VAR_10, VAR_13, 41, 72,
     VAR_12->volume_identifier.s, VAR_17);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 FUNC_13(VAR_13, 73, 80);

 FUNC_10(VAR_13+81, VAR_12->volume_space_size);
 if (VAR_11->vdd_type == 129) {

  VAR_13[89] = 0x25;
  VAR_13[90] = 0x2F;
  VAR_13[91] = 0x45;
  FUNC_1(VAR_13 + 92, 0, 120 - 92 + 1);
 } else {

  FUNC_13(VAR_13, 89, 120);
 }

 FUNC_7(VAR_13+121, VAR_14);

 FUNC_7(VAR_13+125, VAR_12->volume_sequence_number);

 FUNC_7(VAR_13+129, VAR_4);

 FUNC_10(VAR_13+133, VAR_11->path_table_size);

 FUNC_8(VAR_13+141, VAR_11->location_type_L_path_table);

 FUNC_8(VAR_13+145, 0);

 FUNC_9(VAR_13+149, VAR_11->location_type_M_path_table);

 FUNC_9(VAR_13+153, 0);

 FUNC_5(VAR_13+157, 190-157+1, VAR_11->rootent,
     VAR_12, VAR_2, VAR_11->vdd_type);

 VAR_20 = FUNC_12(VAR_10, VAR_13, 191, 318, "", VAR_17);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 VAR_20 = FUNC_6(VAR_13, 319, 446, VAR_17, VAR_10, VAR_11,
     &(VAR_12->publisher_identifier),
     "Publisher File", 1, VAR_1);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 VAR_20 = FUNC_6(VAR_13, 447, 574, VAR_17, VAR_10, VAR_11,
     &(VAR_12->data_preparer_identifier),
     "Data Preparer File", 1, VAR_1);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 VAR_20 = FUNC_6(VAR_13, 575, 702, VAR_17, VAR_10, VAR_11,
     &(VAR_12->application_identifier),
     "Application File", 1, VAR_1);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 VAR_20 = FUNC_6(VAR_13, 703, 739, VAR_17, VAR_10, VAR_11,
     &(VAR_12->copyright_file_identifier),
     "Copyright File", 0, VAR_3);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 VAR_20 = FUNC_6(VAR_13, 740, 776, VAR_17, VAR_10, VAR_11,
     &(VAR_12->abstract_file_identifier),
     "Abstract File", 0, VAR_3);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 VAR_20 = FUNC_6(VAR_13, 777, 813, VAR_17, VAR_10, VAR_11,
     &(VAR_12->bibliographic_file_identifier),
     "Bibliongraphic File", 0, VAR_3);
 if (VAR_20 != VAR_0)
  return (VAR_20);

 FUNC_3(VAR_13+814, VAR_12->birth_time);

 FUNC_3(VAR_13+831, VAR_12->birth_time);

 FUNC_4(VAR_13+848);

 FUNC_3(VAR_13+865, VAR_12->birth_time);

 VAR_13[882] = VAR_19;

 VAR_13[883] = 0;

 FUNC_1(VAR_13 + 884, 0x20, 1395 - 884 + 1);

 FUNC_13(VAR_13, 1396, VAR_4);

 return (FUNC_15(VAR_10, VAR_4));
}
