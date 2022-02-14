
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int has_blake2; int blake2sp; } ;
struct rar5 {TYPE_1__ file; } ;
struct archive_read {int archive; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;
 scalar_t__ FUNC_1 (struct archive_read*,int const) ;
 int FUNC_2 (int *,int const*,int const) ;
 int FUNC_3 (struct archive_read*,int const,int const**) ;
 int FUNC_4 (struct archive_read*,size_t*,size_t*) ;

__attribute__((used)) static int FUNC_5(struct archive_read* VAR_4, struct rar5* VAR_5,
    ssize_t* VAR_6)
{
 size_t VAR_7;
 size_t VAR_8;

 if(!FUNC_4(VAR_4, &VAR_7, &VAR_8))
  return VAR_0;

 *VAR_6 -= VAR_8;
 if(VAR_3 != FUNC_1(VAR_4, VAR_8)) {
  return VAR_0;
 }

 enum HASH_TYPE {
  BLAKE2sp = 0x00
 };



 if(VAR_7 == BLAKE2sp) {
  const uint8_t* VAR_9;
  const int VAR_10 = sizeof(VAR_5->file.blake2sp);

  if(!FUNC_3(VAR_4, VAR_10, &VAR_9))
   return VAR_0;

  VAR_5->file.has_blake2 = 1;
  FUNC_2(&VAR_5->file.blake2sp, VAR_9, VAR_10);

  if(VAR_3 != FUNC_1(VAR_4, VAR_10)) {
   return VAR_0;
  }

  *VAR_6 -= VAR_10;
 } else {
  FUNC_0(&VAR_4->archive, VAR_1,
      "Unsupported hash type (0x%x)", (int) VAR_7);
  return VAR_2;
 }

 return VAR_3;
}
