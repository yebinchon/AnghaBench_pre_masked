
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct ptable_entry {scalar_t__ type; int index; scalar_t__ start; scalar_t__ end; } ;
struct ptable {int dummy; } ;
struct print_args {char* prefix; scalar_t__ verbose; TYPE_3__* dev; } ;
struct open_disk {int sectorsize; } ;
struct TYPE_4__ {int d_unit; int d_dev; } ;
struct disk_devdesc {int d_partition; int d_slice; TYPE_1__ dd; } ;
typedef int line ;
struct TYPE_5__ {int d_unit; int d_dev; scalar_t__ d_opendata; } ;
struct TYPE_6__ {TYPE_2__ dd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct disk_devdesc*) ;
 scalar_t__ FUNC_1 (struct disk_devdesc*,scalar_t__,int ) ;
 char* FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ptable*) ;
 int FUNC_6 (struct ptable*,struct print_args*,int (*) (void*,char const*,struct ptable_entry const*)) ;
 struct ptable* FUNC_7 (struct disk_devdesc*,scalar_t__,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (char*,int,char*,char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(void *VAR_3, const char *VAR_4, const struct ptable_entry *VAR_5)
{
 struct disk_devdesc VAR_6;
 struct print_args *VAR_7, VAR_8;
 struct open_disk *VAR_9;
 struct ptable *VAR_10;
 char VAR_11[80];
 int VAR_12;
 u_int VAR_13;
 uint64_t VAR_14;

 VAR_7 = (struct print_args *)VAR_3;
 VAR_9 = (struct open_disk *)VAR_7->dev->dd.d_opendata;
 VAR_13 = VAR_9->sectorsize;
 VAR_14 = VAR_5->end - VAR_5->start + 1;
 FUNC_8(VAR_11, sizeof(VAR_11), "  %s%s: %s", VAR_7->prefix, VAR_4,
     FUNC_4(VAR_5->type));
 if (FUNC_3(VAR_11))
  return (1);

 if (VAR_7->verbose) {

  if (FUNC_9(VAR_11) < 24)
   (void) FUNC_3("\t");

  FUNC_8(VAR_11, sizeof(VAR_11), "\t%s",
      FUNC_2(VAR_14, VAR_13));
  if (FUNC_3(VAR_11))
   return (1);
 }
 if (FUNC_3("\n"))
  return (1);

 VAR_12 = 0;
 if (VAR_5->type == VAR_1) {

  VAR_6.dd.d_dev = VAR_7->dev->dd.d_dev;
  VAR_6.dd.d_unit = VAR_7->dev->dd.d_unit;
  VAR_6.d_slice = VAR_5->index;
  VAR_6.d_partition = VAR_0;
  if (FUNC_1(&VAR_6, VAR_14, VAR_13) == 0) {
   VAR_10 = FUNC_7(&VAR_6, VAR_14, VAR_13, VAR_2);
   if (VAR_10 != ((void*)0)) {
    FUNC_8(VAR_11, sizeof(VAR_11), "  %s%s",
        VAR_7->prefix, VAR_4);
    VAR_8.dev = VAR_7->dev;
    VAR_8.prefix = VAR_11;
    VAR_8.verbose = VAR_7->verbose;
    VAR_12 = FUNC_6(VAR_10, &VAR_8, FUNC_10);
    FUNC_5(VAR_10);
   }
   FUNC_0(&VAR_6);
  }
 }

 return (VAR_12);
}
