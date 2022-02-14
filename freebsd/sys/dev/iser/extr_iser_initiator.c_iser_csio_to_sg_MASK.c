
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_data_buf {int dummy; } ;
struct ccb_hdr {int flags; } ;
struct ccb_scsiio {scalar_t__ data_ptr; struct ccb_hdr ccb_h; } ;
struct bio {int dummy; } ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct bio*,struct iser_data_buf*) ;
 int FUNC_2 (scalar_t__,struct iser_data_buf*) ;

__attribute__((used)) static int
FUNC_3(struct ccb_scsiio *VAR_2, struct iser_data_buf *VAR_3)
{
 struct ccb_hdr *VAR_4;
 int VAR_5 = 0;

 VAR_4 = &VAR_2->ccb_h;
 switch ((VAR_4->flags & VAR_0)) {
  case 129:
   FUNC_1((struct bio *) VAR_2->data_ptr, VAR_3);
   break;
  case 128:
   FUNC_2(VAR_2->data_ptr, VAR_3);
   break;
  default:
   FUNC_0("flags 0x%X unimplemented", VAR_4->flags);
   VAR_5 = VAR_1;
 }
 return (VAR_5);
}
