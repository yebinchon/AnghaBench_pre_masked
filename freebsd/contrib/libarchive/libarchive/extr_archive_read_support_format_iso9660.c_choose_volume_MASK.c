
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vd {scalar_t__ location; int size; } ;
struct iso9660 {char seenJoliet; int current_position; scalar_t__ seenRockridge; struct vd joliet; struct vd primary; int opt_support_joliet; } ;
struct file_info {int dummy; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_1__ archive; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct archive_read*,int ,int *) ;
 int FUNC_1 (struct archive_read*,int) ;
 scalar_t__ FUNC_2 (struct archive_read*,struct iso9660*,struct file_info*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 struct file_info* FUNC_4 (struct archive_read*,int *,void const*,int ) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_5, struct iso9660 *VAR_6)
{
 struct file_info *VAR_7;
 int64_t VAR_8;
 struct vd *VAR_9;
 const void *VAR_10;
 char VAR_11;

 VAR_9 = &(VAR_6->primary);
 if (!VAR_6->opt_support_joliet)
  VAR_6->seenJoliet = 0;
 if (VAR_6->seenJoliet &&
  VAR_9->location > VAR_6->joliet.location)

  VAR_9 = &(VAR_6->joliet);

 VAR_8 = VAR_4 * (int64_t)VAR_9->location;
 VAR_8 = FUNC_1(VAR_5, VAR_8);
 if (VAR_8 < 0)
  return ((int)VAR_8);
 VAR_6->current_position = VAR_8;

 VAR_10 = FUNC_0(VAR_5, VAR_9->size, ((void*)0));
 if (VAR_10 == ((void*)0)) {
  FUNC_3(&VAR_5->archive, VAR_0,
      "Failed to read full block when scanning "
      "ISO9660 directory list");
  return (VAR_1);
 }






 VAR_11 = VAR_6->seenJoliet;
 VAR_6->seenJoliet = 0;
 VAR_7 = FUNC_4(VAR_5, ((void*)0), VAR_10, VAR_9->size);
 if (VAR_7 == ((void*)0))
  return (VAR_1);
 VAR_6->seenJoliet = VAR_11;





 if (VAR_9 == &(VAR_6->primary) && VAR_6->seenRockridge
     && VAR_6->seenJoliet)
  VAR_6->seenJoliet = 0;

 if (VAR_9 == &(VAR_6->primary) && !VAR_6->seenRockridge
     && VAR_6->seenJoliet) {

  VAR_9 = &(VAR_6->joliet);
  VAR_8 = VAR_4 * (int64_t)VAR_9->location;
  VAR_8 -= VAR_6->current_position;
  VAR_8 = FUNC_1(VAR_5, VAR_8);
  if (VAR_8 < 0)
   return ((int)VAR_8);
  VAR_6->current_position += VAR_8;

  VAR_10 = FUNC_0(VAR_5, VAR_9->size, ((void*)0));
  if (VAR_10 == ((void*)0)) {
   FUNC_3(&VAR_5->archive, VAR_0,
       "Failed to read full block when scanning "
       "ISO9660 directory list");
   return (VAR_1);
  }
  VAR_6->seenJoliet = 0;
  VAR_7 = FUNC_4(VAR_5, ((void*)0), VAR_10, VAR_9->size);
  if (VAR_7 == ((void*)0))
   return (VAR_1);
  VAR_6->seenJoliet = VAR_11;
 }


 if (FUNC_2(VAR_5, VAR_6, VAR_7) != VAR_3)
  return (VAR_1);
 if (VAR_6->seenRockridge) {
  VAR_5->archive.archive_format = VAR_2;
  VAR_5->archive.archive_format_name =
      "ISO9660 with Rockridge extensions";
 }

 return (VAR_3);
}
