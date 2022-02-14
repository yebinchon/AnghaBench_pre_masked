
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int service; } ;
struct rar5 {TYPE_1__ file; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_read*,struct rar5*,struct archive_entry*,size_t) ;
 int FUNC_1 (struct archive_read*) ;

__attribute__((used)) static int FUNC_2(struct archive_read* VAR_2, struct rar5* VAR_3,
    struct archive_entry* VAR_4, size_t VAR_5)
{

 int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if(VAR_6 != VAR_0)
  return VAR_6;

 VAR_3->file.service = 1;




 VAR_6 = FUNC_1(VAR_2);
 if(VAR_6 != VAR_0)
  return VAR_6;


 return VAR_1;
}
