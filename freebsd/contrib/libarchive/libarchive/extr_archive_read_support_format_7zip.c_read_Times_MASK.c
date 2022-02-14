
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct _7zip_entry {int flg; int mtime_ns; int mtime; int atime_ns; int atime; int ctime_ns; int ctime; } ;
struct _7zip {unsigned int numFiles; struct _7zip_entry* entries; } ;
struct _7z_header_info {scalar_t__ dataIndex; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char const*) ;
 unsigned char* FUNC_1 (size_t,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (struct archive_read*,int) ;



 int FUNC_5 (unsigned char*,int,size_t) ;
 scalar_t__ FUNC_6 (struct archive_read*,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct archive_read*,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_8(struct archive_read *VAR_4, struct _7z_header_info *VAR_5, int VAR_6)
{
 struct _7zip *VAR_7 = (struct _7zip *)VAR_4->format->data;
 const unsigned char *VAR_8;
 struct _7zip_entry *VAR_9 = VAR_7->entries;
 unsigned char *VAR_10;
 int VAR_11;
 unsigned VAR_12;

 VAR_10 = FUNC_1((size_t)VAR_7->numFiles, sizeof(*VAR_10));
 if (VAR_10 == ((void*)0))
  return (-1);


 if ((VAR_8 = FUNC_4(VAR_4, 1)) == ((void*)0))
  goto failed;
 VAR_11 = *VAR_8;
 if (VAR_11)
  FUNC_5(VAR_10, 1, (size_t)VAR_7->numFiles);
 else {
  if (FUNC_7(VAR_4, VAR_10, (size_t)VAR_7->numFiles) < 0)
   goto failed;
 }


 if ((VAR_8 = FUNC_4(VAR_4, 1)) == ((void*)0))
  goto failed;
 if (*VAR_8) {
  if (FUNC_6(VAR_4, &(VAR_5->dataIndex)) < 0)
   goto failed;
  if (VAR_3 < VAR_5->dataIndex)
   goto failed;
 }

 for (VAR_12 = 0; VAR_12 < VAR_7->numFiles; VAR_12++) {
  if (!VAR_10[VAR_12])
   continue;
  if ((VAR_8 = FUNC_4(VAR_4, 8)) == ((void*)0))
   goto failed;
  switch (VAR_6) {
  case 129:
   FUNC_2(FUNC_0(VAR_8),
       &(VAR_9[VAR_12].ctime),
       &(VAR_9[VAR_12].ctime_ns));
   VAR_9[VAR_12].flg |= VAR_1;
   break;
  case 130:
   FUNC_2(FUNC_0(VAR_8),
       &(VAR_9[VAR_12].atime),
       &(VAR_9[VAR_12].atime_ns));
   VAR_9[VAR_12].flg |= VAR_0;
   break;
  case 128:
   FUNC_2(FUNC_0(VAR_8),
       &(VAR_9[VAR_12].mtime),
       &(VAR_9[VAR_12].mtime_ns));
   VAR_9[VAR_12].flg |= VAR_2;
   break;
  }
 }

 FUNC_3(VAR_10);
 return (0);
failed:
 FUNC_3(VAR_10);
 return (-1);
}
