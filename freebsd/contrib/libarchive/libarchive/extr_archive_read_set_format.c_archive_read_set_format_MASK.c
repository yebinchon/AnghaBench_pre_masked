
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {int archive; TYPE_1__* format; TYPE_1__* formats; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int ARCHIVE_ERRNO_PROGRAMMER ;
 int ARCHIVE_FATAL ;


 int ARCHIVE_FORMAT_BASE_MASK ;
 int ARCHIVE_OK ;
 int ARCHIVE_WARN ;
 int archive_read_support_format_by_code (struct archive*,int) ;
 int archive_set_error (int *,int ,char*) ;
 scalar_t__ strcmp (int ,char*) ;
 int strcpy (char*,char*) ;

int
archive_read_set_format(struct archive *_a, int code)
{
  int r1, r2, slots, i;
  char str[10];
  struct archive_read *a = (struct archive_read *)_a;

  if ((r1 = archive_read_support_format_by_code(_a, code)) < (ARCHIVE_OK))
    return r1;

  r1 = r2 = (ARCHIVE_OK);
  if (a->format)
    r2 = (ARCHIVE_WARN);
  switch (code & ARCHIVE_FORMAT_BASE_MASK)
  {
    case 139:
      strcpy(str, "7zip");
      break;
    case 138:
      strcpy(str, "ar");
      break;
    case 137:
      strcpy(str, "cab");
      break;
    case 136:
      strcpy(str, "cpio");
      break;
    case 135:
      strcpy(str, "iso9660");
      break;
    case 134:
      strcpy(str, "lha");
      break;
    case 133:
      strcpy(str, "mtree");
      break;
    case 132:
      strcpy(str, "rar");
      break;
    case 131:
      strcpy(str, "rar5");
      break;
    case 130:
      strcpy(str, "tar");
      break;
    case 129:
      strcpy(str, "xar");
      break;
    case 128:
      strcpy(str, "zip");
      break;
    default:
      archive_set_error(&a->archive, ARCHIVE_ERRNO_PROGRAMMER,
          "Invalid format code specified");
      return (ARCHIVE_FATAL);
  }

  slots = sizeof(a->formats) / sizeof(a->formats[0]);
  a->format = &(a->formats[0]);
  for (i = 0; i < slots; i++, a->format++) {
    if (!a->format->name || !strcmp(a->format->name, str))
      break;
  }
  if (!a->format->name || strcmp(a->format->name, str))
  {
    archive_set_error(&a->archive, ARCHIVE_ERRNO_PROGRAMMER,
        "Internal error: Unable to set format");
    r1 = (ARCHIVE_FATAL);
  }

  return (r1 < r2) ? r1 : r2;
}
