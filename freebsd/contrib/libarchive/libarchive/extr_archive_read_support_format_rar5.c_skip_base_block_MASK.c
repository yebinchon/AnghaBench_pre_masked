
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_header_id; scalar_t__ split_before; } ;
struct rar5 {TYPE_1__ generic; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 struct archive_entry* FUNC_1 () ;
 struct rar5* FUNC_2 (struct archive_read*) ;
 int FUNC_3 (struct archive_read*,struct archive_entry*) ;

__attribute__((used)) static int FUNC_4(struct archive_read* VAR_3) {
 int VAR_4;
 struct rar5* VAR_5 = FUNC_2(VAR_3);




 struct archive_entry* VAR_6 = FUNC_1();
 VAR_4 = FUNC_3(VAR_3, VAR_6);


 FUNC_0(VAR_6);
 if(VAR_4 == VAR_0)
  return VAR_4;

 if(VAR_5->generic.last_header_id == 2 && VAR_5->generic.split_before > 0)
  return VAR_1;

 if(VAR_4 == VAR_1)
  return VAR_2;
 else
  return VAR_4;
}
