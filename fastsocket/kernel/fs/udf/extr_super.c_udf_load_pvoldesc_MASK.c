
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ustr {int u_len; int u_name; } ;
struct timestamp {int typeAndTimezone; int minute; int hour; int day; int month; int year; } ;
struct super_block {int dummy; } ;
struct primaryVolDesc {int volSetIdent; int volIdent; struct timestamp recordingDateAndTime; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
struct TYPE_2__ {int s_volume_ident; int s_record_time; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct ustr*) ;
 struct ustr* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (struct ustr*,struct ustr*) ;
 int FUNC_8 (struct ustr*,int ,int) ;
 int FUNC_9 (char*,int ,...) ;
 scalar_t__ FUNC_10 (int *,struct timestamp) ;
 struct buffer_head* FUNC_11 (struct super_block*,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_2, sector_t VAR_3)
{
 struct primaryVolDesc *VAR_4;
 struct ustr *VAR_5, *VAR_6;
 struct buffer_head *VAR_7;
 uint16_t VAR_8;
 int VAR_9 = 1;

 VAR_5 = FUNC_4(sizeof(struct ustr), VAR_0);
 if (!VAR_5)
  return 1;

 VAR_6 = FUNC_4(sizeof(struct ustr), VAR_0);
 if (!VAR_6)
  goto out1;

 VAR_7 = FUNC_11(VAR_2, VAR_3, VAR_3, &VAR_8);
 if (!VAR_7)
  goto out2;

 FUNC_0(VAR_8 != VAR_1);

 VAR_4 = (struct primaryVolDesc *)VAR_7->b_data;

 if (FUNC_10(&FUNC_1(VAR_2)->s_record_time,
         VAR_4->recordingDateAndTime)) {







 }

 if (!FUNC_8(VAR_5, VAR_4->volIdent, 32))
  if (FUNC_7(VAR_6, VAR_5)) {
   FUNC_6(FUNC_1(VAR_2)->s_volume_ident, VAR_6->u_name,
    VAR_6->u_len > 31 ? 31 : VAR_6->u_len);
   FUNC_9("volIdent[] = '%s'\n",
     FUNC_1(VAR_2)->s_volume_ident);
  }

 if (!FUNC_8(VAR_5, VAR_4->volSetIdent, 128))
  if (FUNC_7(VAR_6, VAR_5))
   FUNC_9("volSetIdent[] = '%s'\n", VAR_6->u_name);

 FUNC_2(VAR_7);
 VAR_9 = 0;
out2:
 FUNC_3(VAR_6);
out1:
 FUNC_3(VAR_5);
 return VAR_9;
}
