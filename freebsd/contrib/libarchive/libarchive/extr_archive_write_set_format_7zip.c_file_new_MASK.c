
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {unsigned int name_len; int dir; TYPE_1__* times; int flg; int size; int mode; scalar_t__* utf16name; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_entry {int dummy; } ;
struct _7zip {int sconv; } ;
struct TYPE_2__ {int time_ns; int time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 scalar_t__ FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 scalar_t__ FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*) ;
 scalar_t__ FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*) ;
 scalar_t__ FUNC_11 (struct archive_entry*,char const**,size_t*,int ) ;
 int FUNC_12 (struct archive_entry*,int ) ;
 int FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (int *,scalar_t__,char*) ;
 struct file* FUNC_16 (int,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_17 (struct file*) ;
 scalar_t__* FUNC_18 (size_t) ;
 int FUNC_19 (scalar_t__*,char const*,size_t) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(struct archive_write *VAR_15, struct archive_entry *VAR_16,
    struct file **VAR_17)
{
 struct _7zip *VAR_18;
 struct file *VAR_19;
 const char *VAR_20;
 size_t VAR_21;
 int VAR_22 = VAR_5;

 VAR_18 = (struct _7zip *)VAR_15->format_data;
 *VAR_17 = ((void*)0);

 VAR_19 = FUNC_16(1, sizeof(*VAR_19));
 if (VAR_19 == ((void*)0)) {
  FUNC_15(&VAR_15->archive, VAR_11,
      "Can't allocate memory");
  return (VAR_4);
 }

 if (0 > FUNC_11(VAR_16, &VAR_20, &VAR_21, VAR_18->sconv)) {
  if (VAR_14 == VAR_11) {
   FUNC_17(VAR_19);
   FUNC_15(&VAR_15->archive, VAR_11,
       "Can't allocate memory for UTF-16LE");
   return (VAR_4);
  }
  FUNC_15(&VAR_15->archive, VAR_3,
      "A filename cannot be converted to UTF-16LE;"
      "You should disable making Joliet extension");
  VAR_22 = VAR_6;
 }
 VAR_19->utf16name = FUNC_18(VAR_21 + 2);
 if (VAR_19->utf16name == ((void*)0)) {
  FUNC_17(VAR_19);
  FUNC_15(&VAR_15->archive, VAR_11,
      "Can't allocate memory for Name");
  return (VAR_4);
 }
 FUNC_19(VAR_19->utf16name, VAR_20, VAR_21);
 VAR_19->utf16name[VAR_21+0] = 0;
 VAR_19->utf16name[VAR_21+1] = 0;
 VAR_19->name_len = (unsigned)VAR_21;
 VAR_19->mode = FUNC_7(VAR_16);
 if (FUNC_6(VAR_16) == VAR_2)
  VAR_19->size = FUNC_13(VAR_16);
 else
  FUNC_12(VAR_16, 0);
 if (FUNC_6(VAR_16) == VAR_0)
  VAR_19->dir = 1;
 else if (FUNC_6(VAR_16) == VAR_1)
  VAR_19->size = FUNC_20(FUNC_14(VAR_16));
 if (FUNC_9(VAR_16)) {
  VAR_19->flg |= VAR_13;
  VAR_19->times[VAR_12].time = FUNC_8(VAR_16);
  VAR_19->times[VAR_12].time_ns = FUNC_10(VAR_16);
 }
 if (FUNC_1(VAR_16)) {
  VAR_19->flg |= VAR_8;
  VAR_19->times[VAR_7].time = FUNC_0(VAR_16);
  VAR_19->times[VAR_7].time_ns = FUNC_2(VAR_16);
 }
 if (FUNC_4(VAR_16)) {
  VAR_19->flg |= VAR_10;
  VAR_19->times[VAR_9].time = FUNC_3(VAR_16);
  VAR_19->times[VAR_9].time_ns = FUNC_5(VAR_16);
 }

 *VAR_17 = VAR_19;
 return (VAR_22);
}
