
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct dos_partition {scalar_t__ dp_typ; int dp_flag; unsigned int dp_start; } ;
struct disklabel {scalar_t__ d_magic; scalar_t__ d_magic2; scalar_t__ d_type; size_t d_npartitions; TYPE_1__* d_partitions; } ;
struct TYPE_6__ {char* secbuf; } ;
struct TYPE_5__ {unsigned int start; scalar_t__ slice; size_t part; int init; int type; } ;
struct TYPE_4__ {unsigned int p_offset; int p_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_3__* VAR_13 ;
 int FUNC_0 (void*,unsigned int,unsigned int) ;
 TYPE_2__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_16, unsigned VAR_17, unsigned VAR_18)
{
 struct dos_partition *VAR_19;
 struct disklabel *VAR_20;
 char *VAR_21;
 unsigned VAR_22;
 uint8_t VAR_23;
 const char *VAR_24;

 if (!VAR_15) {
  VAR_21 = VAR_13->secbuf;
  VAR_14.start = 0;
  if (FUNC_0(VAR_21, VAR_3, 1))
   return (-1);
  VAR_19 = (void *)(VAR_21 + VAR_4);
  VAR_23 = VAR_14.slice;
  if (VAR_23 < VAR_0) {
   for (VAR_22 = 0; VAR_22 < VAR_9; VAR_22++)
    if (VAR_19[VAR_22].dp_typ == VAR_5 &&
        (VAR_19[VAR_22].dp_flag & 0x80 || VAR_23 < VAR_0)) {
     VAR_23 = VAR_0 + VAR_22;
     if (VAR_19[VAR_22].dp_flag & 0x80 ||
         VAR_14.slice == VAR_1)
      break;
    }
   if (VAR_14.slice == VAR_12)
    VAR_14.slice = VAR_23;
  }
  if (VAR_23 != VAR_12) {
   if (VAR_23 != VAR_1)
    VAR_19 += VAR_23 - VAR_0;
   if (VAR_19->dp_typ != VAR_5) {
    VAR_24 = "slice";
    goto error;
   }
   VAR_14.start = VAR_19->dp_start;
  }
  if (FUNC_0(VAR_21, VAR_14.start + VAR_8, 1))
   return (-1);
  VAR_20 = (void *)(VAR_21 + VAR_7);
  if (VAR_20->d_magic != VAR_2 || VAR_20->d_magic2 != VAR_2) {
   if (VAR_14.part != VAR_10) {
    VAR_24 = "label";
    goto error;
   }
  } else {
   if (!VAR_14.init) {
    if (VAR_20->d_type == VAR_6)
     VAR_14.type = VAR_11;
    VAR_14.init++;
   }
   if (VAR_14.part >= VAR_20->d_npartitions ||
       !VAR_20->d_partitions[VAR_14.part].p_size) {
    VAR_24 = "partition";
    goto error;
   }
   VAR_14.start += VAR_20->d_partitions[VAR_14.part].p_offset;
   VAR_14.start -= VAR_20->d_partitions[VAR_10].p_offset;
  }
 }
 return (FUNC_0(VAR_16, VAR_14.start + VAR_17, VAR_18));
error:
 FUNC_1("Invalid %s\n", VAR_24);
 return (-1);
}
