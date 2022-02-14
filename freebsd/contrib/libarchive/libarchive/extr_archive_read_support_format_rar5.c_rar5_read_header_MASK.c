
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ endarc; } ;
struct rar5 {int header_initialized; int skipped_magic; TYPE_1__ main; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_read*,int ) ;
 struct rar5* FUNC_1 (struct archive_read*) ;
 int FUNC_2 (struct archive_read*) ;
 int FUNC_3 (struct archive_read*,struct archive_entry*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct archive_read *VAR_4,
    struct archive_entry *VAR_5)
{
 struct rar5* VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 if(VAR_6->header_initialized == 0) {
  FUNC_2(VAR_4);
  VAR_6->header_initialized = 1;
 }

 if(VAR_6->skipped_magic == 0) {
  if(VAR_1 != FUNC_0(VAR_4, VAR_3)) {
   return VAR_0;
  }

  VAR_6->skipped_magic = 1;
 }

 do {
  VAR_7 = FUNC_3(VAR_4, VAR_5);
 } while(VAR_7 == VAR_2 ||
   (VAR_6->main.endarc > 0 && VAR_7 == VAR_1));

 return VAR_7;
}
