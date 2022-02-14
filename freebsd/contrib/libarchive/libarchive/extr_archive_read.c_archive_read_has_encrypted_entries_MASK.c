
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int (* has_encrypted_entries ) (struct archive_read*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive_read*) ;

int
FUNC_2(struct archive *VAR_4)
{
 struct archive_read *VAR_5 = (struct archive_read *)VAR_4;
 int VAR_6 = FUNC_0(VAR_4)
   & (VAR_0 | VAR_1);

 if (!VAR_4 || !VAR_6) {

  return VAR_3;
 }


 if (VAR_5->format && VAR_5->format->has_encrypted_entries) {
  return (VAR_5->format->has_encrypted_entries)(VAR_5);
 }


 return VAR_2;
}
