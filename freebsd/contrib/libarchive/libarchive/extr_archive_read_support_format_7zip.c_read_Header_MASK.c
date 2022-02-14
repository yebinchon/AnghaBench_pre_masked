
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct archive_read {TYPE_3__* format; } ;
struct _7zip_entry {unsigned char* utf16name; int name_len; int attr; int flg; int mode; int ssIndex; int folderIndex; int * wname; } ;
struct TYPE_5__ {scalar_t__ numFolders; struct _7z_folder* folders; } ;
struct TYPE_4__ {size_t unpack_streams; scalar_t__* digestsDefined; } ;
struct _7z_stream_info {TYPE_2__ ci; TYPE_1__ ss; } ;
struct _7zip {scalar_t__ numFiles; scalar_t__ header_bytes_remaining; unsigned char* entry_names; struct _7zip_entry* entries; struct _7z_stream_info si; } ;
struct _7z_header_info {scalar_t__* emptyStreamBools; scalar_t__* emptyFileBools; scalar_t__* antiBools; scalar_t__* attrBools; } ;
struct _7z_folder {scalar_t__ numUnpackStreams; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned char const*) ;
 void* FUNC_1 (size_t,int) ;
 unsigned char* FUNC_2 (struct archive_read*,size_t) ;


 unsigned char const VAR_8 ;





 unsigned char const VAR_9 ;
 unsigned char const VAR_10 ;
 unsigned char const VAR_11 ;

 unsigned char const VAR_12 ;

 unsigned char* FUNC_3 (size_t) ;
 int FUNC_4 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_5 (scalar_t__*,int,size_t) ;
 scalar_t__ FUNC_6 (struct archive_read*,scalar_t__*) ;
 int FUNC_7 (struct archive_read*,scalar_t__*,size_t) ;
 scalar_t__ FUNC_8 (struct archive_read*,struct _7z_stream_info*) ;
 int FUNC_9 (struct archive_read*,struct _7z_header_info*,int) ;

__attribute__((used)) static int
FUNC_10(struct archive_read *VAR_13, struct _7z_header_info *VAR_14,
    int VAR_15)
{
 struct _7zip *VAR_16 = (struct _7zip *)VAR_13->format->data;
 const unsigned char *VAR_17;
 struct _7z_folder *VAR_18;
 struct _7z_stream_info *VAR_19 = &(VAR_16->si);
 struct _7zip_entry *VAR_20;
 uint32_t VAR_21, VAR_22;
 unsigned VAR_23;
 int VAR_24, VAR_25, VAR_26;

 if (VAR_15) {



  if ((VAR_17 = FUNC_2(VAR_13, 1)) == ((void*)0))
   return (-1);
  if (*VAR_17 != VAR_11)
   return (-1);
 }




 if ((VAR_17 = FUNC_2(VAR_13, 1)) == ((void*)0))
  return (-1);
 if (*VAR_17 == VAR_8) {
  for (;;) {
   uint64_t VAR_27;
   if ((VAR_17 = FUNC_2(VAR_13, 1)) == ((void*)0))
    return (-1);
   if (*VAR_17 == 0)
    break;
   if (FUNC_6(VAR_13, &VAR_27) < 0)
    return (-1);
  }
  if ((VAR_17 = FUNC_2(VAR_13, 1)) == ((void*)0))
   return (-1);
 }




 if (*VAR_17 == VAR_12) {
  if (FUNC_8(VAR_13, &(VAR_16->si)) < 0)
   return (-1);
  if ((VAR_17 = FUNC_2(VAR_13, 1)) == ((void*)0))
   return (-1);
 }
 if (*VAR_17 == VAR_9)
  return (0);




 if (*VAR_17 != VAR_10)
  return (-1);

 if (FUNC_6(VAR_13, &(VAR_16->numFiles)) < 0)
  return (-1);
 if (VAR_6 < VAR_16->numFiles)
  return (-1);

 VAR_16->entries = FUNC_1((size_t)VAR_16->numFiles, sizeof(*VAR_16->entries));
 if (VAR_16->entries == ((void*)0))
  return (-1);
 VAR_20 = VAR_16->entries;

 VAR_25 = 0;
 for (;;) {
  int VAR_28;
  uint64_t VAR_29;
  size_t VAR_30;

  if ((VAR_17 = FUNC_2(VAR_13, 1)) == ((void*)0))
   return (-1);
  VAR_28 = *VAR_17;
  if (VAR_28 == VAR_9)
   break;

  if (FUNC_6(VAR_13, &VAR_29) < 0)
   return (-1);
  if (VAR_16->header_bytes_remaining < VAR_29)
   return (-1);
  VAR_30 = (size_t)VAR_29;

  switch (VAR_28) {
  case 130:
   if (VAR_14->emptyStreamBools != ((void*)0))
    return (-1);
   VAR_14->emptyStreamBools = FUNC_1((size_t)VAR_16->numFiles,
       sizeof(*VAR_14->emptyStreamBools));
   if (VAR_14->emptyStreamBools == ((void*)0))
    return (-1);
   if (FUNC_7(
       VAR_13, VAR_14->emptyStreamBools, (size_t)VAR_16->numFiles) < 0)
    return (-1);
   VAR_25 = 0;
   for (VAR_23 = 0; VAR_23 < VAR_16->numFiles; VAR_23++) {
    if (VAR_14->emptyStreamBools[VAR_23])
     VAR_25++;
   }
   break;
  case 131:
   if (VAR_25 <= 0) {

    if (FUNC_2(VAR_13, VAR_30) == ((void*)0))
     return (-1);
    break;
   }
   if (VAR_14->emptyFileBools != ((void*)0))
    return (-1);
   VAR_14->emptyFileBools = FUNC_1(VAR_25,
       sizeof(*VAR_14->emptyFileBools));
   if (VAR_14->emptyFileBools == ((void*)0))
    return (-1);
   if (FUNC_7(VAR_13, VAR_14->emptyFileBools, VAR_25) < 0)
    return (-1);
   break;
  case 135:
   if (VAR_25 <= 0) {

    if (FUNC_2(VAR_13, VAR_30) == ((void*)0))
     return (-1);
    break;
   }
   if (VAR_14->antiBools != ((void*)0))
    return (-1);
   VAR_14->antiBools = FUNC_1(VAR_25,
       sizeof(*VAR_14->antiBools));
   if (VAR_14->antiBools == ((void*)0))
    return (-1);
   if (FUNC_7(VAR_13, VAR_14->antiBools, VAR_25) < 0)
    return (-1);
   break;
  case 133:
  case 136:
  case 129:
   if (FUNC_9(VAR_13, VAR_14, VAR_28) < 0)
    return (-1);
   break;
  case 128:
  {
   unsigned char *VAR_31;
   size_t VAR_32, VAR_33;


   if ((VAR_17 = FUNC_2(VAR_13, 1)) == ((void*)0))
    return (-1);
   VAR_30--;

   if ((VAR_30 & 1) || VAR_30 < VAR_16->numFiles * 4)
    return (-1);

   if (VAR_16->entry_names != ((void*)0))
    return (-1);
   VAR_16->entry_names = FUNC_3(VAR_30);
   if (VAR_16->entry_names == ((void*)0))
    return (-1);
   VAR_31 = VAR_16->entry_names;
   VAR_33 = VAR_30;






   while (VAR_33) {
    size_t VAR_34;
    if (VAR_33 > VAR_5)
     VAR_34 = VAR_5;
    else
     VAR_34 = VAR_33;
    if ((VAR_17 = FUNC_2(VAR_13, VAR_34)) == ((void*)0))
     return (-1);
    FUNC_4(VAR_31, VAR_17, VAR_34);
    VAR_31 += VAR_34;
    VAR_33 -= VAR_34;
   }
   VAR_31 = VAR_16->entry_names;
   VAR_32 = VAR_30;

   for (VAR_23 = 0; VAR_23 < VAR_16->numFiles; VAR_23++) {
    VAR_20[VAR_23].utf16name = VAR_31;





    while (VAR_32 >= 2 && (VAR_31[0] || VAR_31[1])) {
     VAR_31 += 2;
     VAR_32 -= 2;
    }
    if (VAR_32 < 2)
     return (-1);
    VAR_20[VAR_23].name_len = VAR_31 - VAR_20[VAR_23].utf16name;
    VAR_31 += 2;
    VAR_32 -= 2;
   }
   break;
  }
  case 134:
  {
   int VAR_35;

   if ((VAR_17 = FUNC_2(VAR_13, 2)) == ((void*)0))
    return (-1);
   VAR_35 = *VAR_17;
   if (VAR_14->attrBools != ((void*)0))
    return (-1);
   VAR_14->attrBools = FUNC_1((size_t)VAR_16->numFiles,
       sizeof(*VAR_14->attrBools));
   if (VAR_14->attrBools == ((void*)0))
    return (-1);
   if (VAR_35)
    FUNC_5(VAR_14->attrBools, 1, (size_t)VAR_16->numFiles);
   else {
    if (FUNC_7(VAR_13, VAR_14->attrBools,
          (size_t)VAR_16->numFiles) < 0)
     return (-1);
   }
   for (VAR_23 = 0; VAR_23 < VAR_16->numFiles; VAR_23++) {
    if (VAR_14->attrBools[VAR_23]) {
     if ((VAR_17 = FUNC_2(VAR_13, 4)) == ((void*)0))
      return (-1);
     VAR_20[VAR_23].attr = FUNC_0(VAR_17);
    }
   }
   break;
  }
  case 132:
   if (VAR_30 == 0)
    break;
   VAR_7;
  default:
   if (FUNC_2(VAR_13, VAR_30) == ((void*)0))
    return (-1);
   break;
  }
 }




 VAR_18 = VAR_19->ci.folders;
 VAR_24 = VAR_26 = 0;
 VAR_21 = VAR_22 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_16->numFiles; VAR_23++) {
  if (VAR_14->emptyStreamBools == ((void*)0) || VAR_14->emptyStreamBools[VAR_23] == 0)
   VAR_20[VAR_23].flg |= VAR_4;

  VAR_20[VAR_23].mode = VAR_20[VAR_23].attr >> 16;
  if (VAR_20[VAR_23].flg & VAR_4) {
   if ((size_t)VAR_26 >= VAR_19->ss.unpack_streams)
    return (-1);
   if (VAR_20[VAR_23].mode == 0)
    VAR_20[VAR_23].mode = VAR_2 | 0666;
   if (VAR_19->ss.digestsDefined[VAR_26])
    VAR_20[VAR_23].flg |= VAR_3;
   VAR_20[VAR_23].ssIndex = VAR_26;
   VAR_26++;
  } else {
   int VAR_36;
   if (VAR_14->emptyFileBools == ((void*)0))
    VAR_36 = 1;
   else {
    if (VAR_14->emptyFileBools[VAR_24])
     VAR_36 = 0;
    else
     VAR_36 = 1;
    VAR_24++;
   }
   if (VAR_20[VAR_23].mode == 0) {
    if (VAR_36)
     VAR_20[VAR_23].mode = VAR_0 | 0777;
    else
     VAR_20[VAR_23].mode = VAR_2 | 0666;
   } else if (VAR_36 &&
       (VAR_20[VAR_23].mode & VAR_1) != VAR_0) {
    VAR_20[VAR_23].mode &= ~VAR_1;
    VAR_20[VAR_23].mode |= VAR_0;
   }
   if ((VAR_20[VAR_23].mode & VAR_1) == VAR_0 &&
       VAR_20[VAR_23].name_len >= 2 &&
       (VAR_20[VAR_23].utf16name[VAR_20[VAR_23].name_len-2] != '/' ||
        VAR_20[VAR_23].utf16name[VAR_20[VAR_23].name_len-1] != 0)) {
    VAR_20[VAR_23].utf16name[VAR_20[VAR_23].name_len] = '/';
    VAR_20[VAR_23].utf16name[VAR_20[VAR_23].name_len+1] = 0;
    VAR_20[VAR_23].name_len += 2;
   }
   VAR_20[VAR_23].ssIndex = -1;
  }
  if (VAR_20[VAR_23].attr & 0x01)
   VAR_20[VAR_23].mode &= ~0222;

  if ((VAR_20[VAR_23].flg & VAR_4) == 0 && VAR_22 == 0) {




   VAR_20[VAR_23].folderIndex = -1;
   continue;
  }
  if (VAR_22 == 0) {
   for (;;) {
    if (VAR_21 >= VAR_19->ci.numFolders)
     return (-1);
    if (VAR_18[VAR_21].numUnpackStreams)
     break;
    VAR_21++;
   }
  }
  VAR_20[VAR_23].folderIndex = VAR_21;
  if ((VAR_20[VAR_23].flg & VAR_4) == 0)
   continue;
  VAR_22++;
  if (VAR_22 >= VAR_18[VAR_21].numUnpackStreams) {
   VAR_21++;
   VAR_22 = 0;
  }
 }

 return (0);
}
