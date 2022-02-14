
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {unsigned long s_blocksize_bits; TYPE_2__* s_bdev; } ;
struct TYPE_8__ {char* member_0; char arg_required; int clrmask; int setmask; char* option_name; int * values; } ;
typedef TYPE_3__ opt_desc_t ;
struct TYPE_9__ {char** s_qf_names; unsigned int s_jquota_fmt; } ;
struct TYPE_7__ {TYPE_1__* bd_inode; } ;
struct TYPE_6__ {unsigned long i_size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__* FUNC_1 (struct super_block*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__,int ) ;
 int * VAR_19 ;
 int FUNC_4 (struct super_block*,char**,TYPE_3__*,char**,unsigned long*) ;
 int FUNC_5 (struct super_block*,char*,char*,...) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 unsigned long FUNC_7 (char*,char**,int ) ;
 scalar_t__ FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int * VAR_20 ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_21, char *VAR_22,
      unsigned long *VAR_23,



      unsigned long *VAR_24,
      char **VAR_25,
      unsigned int *VAR_26,
      char **VAR_27,
      unsigned int *VAR_28)
{
 int VAR_29;
 char *VAR_30 = ((void*)0);
 char *VAR_31;
 opt_desc_t VAR_32[] = {

  {"tails",.arg_required = 't',.values = VAR_20},
  {"notail",.clrmask =
   (1 << VAR_7) | (1 << VAR_11)},
  {"conv",.setmask = 1 << VAR_5},
  {"attrs",.setmask = 1 << VAR_4},
  {"noattrs",.clrmask = 1 << VAR_4},
  {"expose_privroot", .setmask = 1 << VAR_6},




  {"user_xattr",.setmask = 1 << VAR_12},
  {"nouser_xattr",.clrmask = 1 << VAR_12},





  {"acl",.setmask = 1 << VAR_12},
  {"noacl",.clrmask = 1 << VAR_12},

  {.option_name = "nolog"},
  {"replayonly",.setmask = 1 << VAR_14},
  {"block-allocator",.arg_required = 'a',.values = VAR_16},
  {"data",.arg_required = 'd',.values = VAR_19},
  {"barrier",.arg_required = 'b',.values = VAR_17},
  {"resize",.arg_required = 'r',.values = ((void*)0)},
  {"jdev",.arg_required = 'j',.values = ((void*)0)},
  {"nolargeio",.arg_required = 'w',.values = ((void*)0)},
  {"commit",.arg_required = 'c',.values = ((void*)0)},
  {"usrquota",.setmask = 1 << VAR_10},
  {"grpquota",.setmask = 1 << VAR_10},
  {"noquota",.clrmask = 1 << VAR_10},
  {"errors",.arg_required = 'e',.values = VAR_18},
  {"usrjquota",.arg_required =
   'u' | (1 << VAR_8),.values = ((void*)0)},
  {"grpjquota",.arg_required =
   'g' | (1 << VAR_8),.values = ((void*)0)},
  {"jqfmt",.arg_required = 'f',.values = ((void*)0)},
  {.option_name = ((void*)0)}
 };

 *VAR_24 = 0;
 if (!VAR_22 || !*VAR_22)


  return 1;

 for (VAR_31 = VAR_22; VAR_31;) {
  VAR_29 = FUNC_4(VAR_21, &VAR_31, VAR_32, &VAR_30, VAR_23);
  if (VAR_29 == -1)

   return 0;

  if (VAR_29 == 'r') {
   char *VAR_33;

   VAR_33 = ((void*)0);


   if (!FUNC_9(VAR_30, "auto")) {

    *VAR_24 =
        VAR_21->s_bdev->bd_inode->i_size >> VAR_21->
        s_blocksize_bits;
   } else {
    *VAR_24 = FUNC_7(VAR_30, &VAR_33, 0);
    if (*VAR_33 != '\0') {

     FUNC_5(VAR_21, "super-6507",
        "bad value %s for "
        "-oresize\n", VAR_30);
     return 0;
    }
   }
  }

  if (VAR_29 == 'c') {
   char *VAR_34 = ((void*)0);
   unsigned long VAR_35 = FUNC_7(VAR_30, &VAR_34, 0);

   if (*VAR_34 != '\0' || VAR_35 >= (unsigned int)-1) {
    FUNC_5(VAR_21, "super-6508",
       "bad value %s for -ocommit\n",
       VAR_30);
    return 0;
   }
   *VAR_26 = (unsigned int)VAR_35;
  }

  if (VAR_29 == 'w') {
   FUNC_5(VAR_21, "super-6509", "nolargeio option "
      "is no longer supported");
   return 0;
  }

  if (VAR_29 == 'j') {
   if (VAR_30 && *VAR_30 && VAR_25) {
    if (*VAR_25) {
     FUNC_5(VAR_21, "super-6510",
        "journal device was "
        "already specified to "
        "be %s", *VAR_25);
     return 0;
    }
    *VAR_25 = VAR_30;
   }
  }
  if (VAR_29 == 'u' || VAR_29 == 'g' || VAR_29 == 'f') {
   FUNC_5(VAR_21, "reiserfs-2503", "journaled "
      "quota options not supported.");
   return 0;
  }

 }
 return 1;
}
