
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct isoent {TYPE_3__* file; } ;
struct TYPE_4__ {int media_type; struct isoent* boot; } ;
struct iso9660 {int temp_fd; TYPE_1__ el_torito; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ intmax_t ;
typedef scalar_t__ int64_t ;
typedef int buff ;
struct TYPE_5__ {scalar_t__ offset_of_temp; scalar_t__ location; } ;
struct TYPE_6__ {TYPE_2__ content; int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 int FUNC_2 (int *,int ,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_6 (int ,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,scalar_t__) ;
 int FUNC_8 (struct archive_write*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_9(struct archive_write *VAR_4)
{
 struct iso9660 *VAR_5 = VAR_4->format_data;
 struct isoent *VAR_6;
 int64_t VAR_7;
 uint32_t VAR_8;
 unsigned char VAR_9[4096];

 VAR_6 = VAR_5->el_torito.boot;
 FUNC_4(VAR_5->temp_fd,
     VAR_6->file->content.offset_of_temp + 64, VAR_1);
 VAR_7 = FUNC_0(VAR_6->file->entry) - 64;
 if (VAR_7 <= 0) {
  FUNC_2(&VAR_4->archive, VAR_3,
      "Boot file(%jd) is too small", (intmax_t)VAR_7 + 64);
  return (VAR_0);
 }
 VAR_8 = 0;
 while (VAR_7 > 0) {
  size_t VAR_10;
  ssize_t VAR_11, VAR_12;

  if (VAR_7 > (int64_t)sizeof(VAR_9))
   VAR_10 = sizeof(VAR_9);
  else
   VAR_10 = (size_t)VAR_7;

  VAR_12 = FUNC_6(VAR_5->temp_fd, VAR_9, VAR_10);
  if (VAR_12 <= 0) {
   FUNC_2(&VAR_4->archive, VAR_3,
       "Can't read temporary file(%jd)",
       (intmax_t)VAR_12);
   return (VAR_0);
  }
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11 += 4)
   VAR_8 += FUNC_1(VAR_9 + VAR_11);
  VAR_7 -= VAR_12;
 }

 FUNC_7(VAR_9, VAR_2);

 FUNC_7(VAR_9+4, VAR_6->file->content.location);

 VAR_7 = FUNC_3(VAR_5->el_torito.media_type);
 if (VAR_7 == 0)
  VAR_7 = FUNC_0(VAR_6->file->entry);
 FUNC_7(VAR_9+8, (uint32_t)VAR_7);

 FUNC_7(VAR_9+12, VAR_8);

 FUNC_5(VAR_9+16, 0, 40);


 FUNC_4(VAR_5->temp_fd,
     VAR_6->file->content.offset_of_temp + 8, VAR_1);
 return (FUNC_8(VAR_4, VAR_9, 56));
}
