
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_write_ptr; int filtered_buf; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct filter_info {int type; int block_length; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int ) ;
 struct rar5* FUNC_2 (struct archive_read*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct archive_read*,struct rar5*,int ,int ,int ) ;
 int FUNC_5 (struct rar5*,struct filter_info*) ;
 int FUNC_6 (struct rar5*,struct filter_info*) ;
 int FUNC_7 (struct rar5*,struct filter_info*,int) ;

__attribute__((used)) static int FUNC_8(struct archive_read* VAR_5, struct filter_info* VAR_6) {
 int VAR_7;
 struct rar5* VAR_8 = FUNC_2(VAR_5);

 FUNC_1(VAR_8->cstate.filtered_buf);

 VAR_8->cstate.filtered_buf = FUNC_3(VAR_6->block_length);
 if(!VAR_8->cstate.filtered_buf) {
  FUNC_0(&VAR_5->archive, VAR_4,
      "Can't allocate memory for filter data.");
  return VAR_2;
 }

 switch(VAR_6->type) {
  case 130:
   VAR_7 = FUNC_6(VAR_8, VAR_6);
   break;

  case 129:

  case 128:
   VAR_7 = FUNC_7(VAR_8, VAR_6,
       VAR_6->type == 128);
   break;

  case 131:
   VAR_7 = FUNC_5(VAR_8, VAR_6);
   break;

  default:
   FUNC_0(&VAR_5->archive,
       VAR_0,
       "Unsupported filter type: 0x%x", VAR_6->type);
   return VAR_2;
 }

 if(VAR_7 != VAR_3) {

  return VAR_7;
 }

 if(VAR_3 != FUNC_4(VAR_5, VAR_8, VAR_8->cstate.filtered_buf,
     VAR_6->block_length, VAR_8->cstate.last_write_ptr))
 {
  FUNC_0(&VAR_5->archive, VAR_1,
      "Stack overflow when submitting unpacked data");

  return VAR_2;
 }

 VAR_8->cstate.last_write_ptr += VAR_6->block_length;
 return VAR_3;
}
