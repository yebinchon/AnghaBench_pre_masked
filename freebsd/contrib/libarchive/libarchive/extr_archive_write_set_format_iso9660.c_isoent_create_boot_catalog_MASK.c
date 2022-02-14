
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int size; } ;
struct isofile {TYPE_2__ content; int boot; int entry; } ;
struct isoent {int virtual; } ;
struct TYPE_12__ {int s; } ;
struct TYPE_8__ {int s; } ;
struct TYPE_14__ {int id; scalar_t__ system_type; TYPE_5__ boot_filename; void* media_type; TYPE_4__* boot; struct isoent* catalog; TYPE_1__ catalog_filename; } ;
struct TYPE_13__ {int boot_type; scalar_t__ publisher; } ;
struct iso9660 {int publisher_identifier; TYPE_7__ el_torito; TYPE_6__ opt; int birth_time; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct archive_entry {int dummy; } ;
struct TYPE_11__ {TYPE_3__* file; } ;
struct TYPE_10__ {struct archive_entry* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;




 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (int *,int ,char*,...) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 struct isoent* FUNC_14 (struct isofile*) ;
 scalar_t__ FUNC_15 (struct archive_write*,struct isoent**) ;
 int FUNC_16 (struct iso9660*,struct isofile*) ;
 int FUNC_17 (struct isofile*) ;
 scalar_t__ FUNC_18 (struct archive_write*,struct isofile*) ;
 struct isofile* FUNC_19 (struct archive_write*,int *) ;

__attribute__((used)) static int
FUNC_20(struct archive_write *VAR_16, struct isoent *VAR_17)
{
 struct iso9660 *VAR_18 = VAR_16->format_data;
 struct isofile *VAR_19;
 struct isoent *VAR_20;
 struct archive_entry *VAR_21;

 (void)VAR_17;



 VAR_19 = FUNC_19(VAR_16, ((void*)0));
 if (VAR_19 == ((void*)0)) {
  FUNC_10(&VAR_16->archive, VAR_11,
      "Can't allocate memory");
  return (VAR_2);
 }
 FUNC_6(VAR_19->entry,
     VAR_18->el_torito.catalog_filename.s);
 FUNC_7(VAR_19->entry, VAR_15);
 FUNC_4(VAR_19->entry, VAR_18->birth_time, 0);
 FUNC_0(VAR_19->entry, VAR_18->birth_time, 0);
 FUNC_1(VAR_19->entry, VAR_18->birth_time, 0);
 FUNC_8(VAR_19->entry, FUNC_13());
 FUNC_2(VAR_19->entry, FUNC_12());
 FUNC_3(VAR_19->entry, VAR_0 | 0444);
 FUNC_5(VAR_19->entry, 1);

 if (FUNC_18(VAR_16, VAR_19) < VAR_4) {
  FUNC_17(VAR_19);
  return (VAR_2);
 }
 VAR_19->boot = VAR_5;
 VAR_19->content.size = VAR_15;
 FUNC_16(VAR_18, VAR_19);

 VAR_20 = FUNC_14(VAR_19);
 if (VAR_20 == ((void*)0)) {
  FUNC_10(&VAR_16->archive, VAR_11,
      "Can't allocate memory");
  return (VAR_2);
 }
 VAR_20->virtual = 1;


 if (FUNC_15(VAR_16, &VAR_20) != VAR_3)
  return (VAR_2);

 VAR_18->el_torito.catalog = VAR_20;



 switch (VAR_18->opt.boot_type) {
 default:
 case 131:

  VAR_21 = VAR_18->el_torito.boot->file->entry;
  if (FUNC_9(VAR_21) == VAR_12)
   VAR_18->el_torito.media_type =
       VAR_6;
  else if (FUNC_9(VAR_21) == VAR_13)
   VAR_18->el_torito.media_type =
       VAR_7;
  else if (FUNC_9(VAR_21) == VAR_14)
   VAR_18->el_torito.media_type =
       VAR_8;
  else


   VAR_18->el_torito.media_type =
       VAR_10;
  break;
 case 128:
  VAR_18->el_torito.media_type = VAR_10;
  break;
 case 129:
  VAR_18->el_torito.media_type = VAR_9;
  break;
 case 130:
  VAR_21 = VAR_18->el_torito.boot->file->entry;
  if (FUNC_9(VAR_21) <= VAR_12)
   VAR_18->el_torito.media_type =
       VAR_6;
  else if (FUNC_9(VAR_21) <= VAR_13)
   VAR_18->el_torito.media_type =
       VAR_7;
  else if (FUNC_9(VAR_21) <= VAR_14)
   VAR_18->el_torito.media_type =
       VAR_8;
  else {
   FUNC_10(&VAR_16->archive, VAR_1,
       "Boot image file(``%s'') size is too big "
       "for fd type.",
       VAR_18->el_torito.boot_filename.s);
   return (VAR_2);
  }
  break;
 }






 VAR_18->el_torito.system_type = 0;




 if (VAR_18->opt.publisher)
  FUNC_11(&(VAR_18->el_torito.id),
      &(VAR_18->publisher_identifier));


 return (VAR_3);
}
