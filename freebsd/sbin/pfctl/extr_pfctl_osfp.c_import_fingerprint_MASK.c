
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp_subtype_nm; int fp_version_nm; int fp_class_nm; int fp_os; } ;
struct pf_osfp_ioctl {TYPE_1__ fp_os; } ;
struct name_entry {int nm_num; void* nm_sublist_num; int nm_sublist; } ;


 int FUNC_0 (struct pf_osfp_ioctl*,char*,int,int,int) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int,int,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct name_entry* FUNC_3 (int *,int ) ;

void
FUNC_4(struct pf_osfp_ioctl *VAR_3)
{
 struct name_entry *VAR_4, *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_2(VAR_3->fp_os.fp_os, VAR_7, VAR_8, VAR_9);

 VAR_4 = FUNC_3(&VAR_1, VAR_3->fp_os.fp_class_nm);
 if (VAR_4->nm_num == 0) {
  VAR_4->nm_num = VAR_7;
  VAR_0 = FUNC_1(VAR_0, VAR_7);
 }

 VAR_5 = FUNC_3(&VAR_4->nm_sublist,
     VAR_3->fp_os.fp_version_nm);
 if (VAR_5) {
  if (VAR_5->nm_num == 0) {
   VAR_5->nm_num = VAR_8;
   VAR_4->nm_sublist_num = FUNC_1(VAR_4->nm_sublist_num,
       VAR_8);
  }
  VAR_6 = FUNC_3(&VAR_5->nm_sublist,
      VAR_3->fp_os.fp_subtype_nm);
  if (VAR_6) {
   if (VAR_6->nm_num == 0) {
    VAR_6->nm_num = VAR_9;
    VAR_5->nm_sublist_num =
        FUNC_1(VAR_5->nm_sublist_num, VAR_9);
   }
  }
 }


 VAR_2++;
 FUNC_0(VAR_3, "import signature %d:%d:%d", VAR_7, VAR_8, VAR_9);
}
