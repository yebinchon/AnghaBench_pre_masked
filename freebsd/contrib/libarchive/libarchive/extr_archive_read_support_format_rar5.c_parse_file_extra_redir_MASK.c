
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int redir_type; int redir_flags; } ;
struct rar5 {TYPE_1__ file; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;
typedef size_t ssize_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int FUNC_0 (struct archive_entry*,int ) ;
 int FUNC_1 (struct archive_entry*,int ) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (struct archive_read*,int ) ;
 int FUNC_6 (char*,int const*,size_t) ;
 int FUNC_7 (struct archive_read*,size_t,int const**) ;
 int FUNC_8 (struct archive_read*,int*,scalar_t__*) ;
 int FUNC_9 (struct archive_read*,size_t*,int *) ;

__attribute__((used)) static int FUNC_10(struct archive_read* VAR_11,
    struct archive_entry* VAR_12, struct rar5* VAR_13, ssize_t* VAR_14)
{
 uint64_t VAR_15 = 0;
 size_t VAR_16 = 0;
 char VAR_17[VAR_8];
 const uint8_t* VAR_18;

 if(!FUNC_8(VAR_11, &VAR_13->file.redir_type, &VAR_15))
  return VAR_4;
 if(VAR_7 != FUNC_5(VAR_11, (int64_t)VAR_15))
  return VAR_4;
 *VAR_14 -= VAR_15;

 if(!FUNC_8(VAR_11, &VAR_13->file.redir_flags, &VAR_15))
  return VAR_4;
 if(VAR_7 != FUNC_5(VAR_11, (int64_t)VAR_15))
  return VAR_4;
 *VAR_14 -= VAR_15;

 if(!FUNC_9(VAR_11, &VAR_16, ((void*)0)))
  return VAR_4;
 *VAR_14 -= VAR_16 + 1;

 if(!FUNC_7(VAR_11, VAR_16, &VAR_18))
  return VAR_4;

 if(VAR_16 > (VAR_9 - 1)) {
  FUNC_4(&VAR_11->archive, VAR_5,
      "Link target is too long");
  return VAR_6;
 }

 if(VAR_16 == 0) {
  FUNC_4(&VAR_11->archive, VAR_5,
      "No link target specified");
  return VAR_6;
 }

 FUNC_6(VAR_17, VAR_18, VAR_16);
 VAR_17[VAR_16] = 0;

 if(VAR_7 != FUNC_5(VAR_11, (int64_t)VAR_16))
  return VAR_4;

 switch(VAR_13->file.redir_type) {
  case 129:
  case 128:
   FUNC_0(VAR_12, VAR_0);
   FUNC_3(VAR_12, VAR_17);
   if (VAR_13->file.redir_flags & VAR_10) {
    FUNC_1(VAR_12,
     VAR_2);
   } else {
    FUNC_1(VAR_12,
    VAR_3);
   }
   break;

  case 130:
   FUNC_0(VAR_12, VAR_1);
   FUNC_2(VAR_12, VAR_17);
   break;

  default:

   break;
 }
 return VAR_7;
}
