
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint32_t ;
struct scsi_per_res_key {int key; } ;
struct scsi_per_res_in_header {int generation; int length; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct scsi_per_res_in_header *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;
 struct scsi_per_res_key *VAR_6;

 VAR_3 = FUNC_2(VAR_1->length);
 VAR_3 = FUNC_0(VAR_3, VAR_2);

 VAR_4 = VAR_3 / sizeof(*VAR_6);

 FUNC_1(VAR_0, "PRgeneration: %#x\n", FUNC_2(VAR_1->generation));
 FUNC_1(VAR_0, "%u key%s%s\n", VAR_4, (VAR_4 == 1) ? "" : "s",
  (VAR_4 == 0) ? "." : ":");

 for (VAR_5 = 0, VAR_6 = (struct scsi_per_res_key *)&VAR_1[1]; VAR_5 < VAR_4;
      VAR_5++, VAR_6++) {
  FUNC_1(VAR_0, "%u: %jd\n", VAR_5,
   (uintmax_t)FUNC_3(VAR_6->key));
 }
}
