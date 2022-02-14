
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_18__ {char header_size; unsigned char log2_bs; int uncompressed_size; } ;
struct TYPE_16__ {char* s; } ;
struct TYPE_11__ {char* s; size_t length; } ;
struct isofile {TYPE_9__ zisofs; int entry; TYPE_7__ symlink; TYPE_6__* cur_content; TYPE_5__* hardlink_target; TYPE_2__ basename; } ;
struct isoent {int dir_location; struct isoent* parent; TYPE_8__* rr_child; scalar_t__ dir; struct isofile* file; scalar_t__ virtual; struct isoent* rr_parent; } ;
struct TYPE_12__ {scalar_t__ rr; } ;
struct TYPE_10__ {struct isoent* rootent; } ;
struct iso9660 {int location_rrip_er; TYPE_3__ opt; TYPE_1__ primary; } ;
struct ctl_extr_rec {int dr_len; } ;
typedef int mode_t ;
typedef scalar_t__ int64_t ;
typedef enum dir_rec_type { ____Placeholder_dir_rec_type } dir_rec_type ;
struct TYPE_17__ {int dir_location; } ;
struct TYPE_15__ {int location; } ;
struct TYPE_14__ {TYPE_4__* cur_content; } ;
struct TYPE_13__ {int location; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct ctl_extr_rec*,int ) ;
 unsigned char* FUNC_15 (struct ctl_extr_rec*,int) ;
 unsigned char* FUNC_16 (unsigned char*,int,struct isoent*,struct ctl_extr_rec*) ;
 int FUNC_17 (struct ctl_extr_rec*) ;
 int FUNC_18 (struct ctl_extr_rec*,int) ;
 int FUNC_19 (unsigned char*,char const*,size_t) ;
 int FUNC_20 (unsigned char*,int ,int ,int ) ;
 int FUNC_21 (unsigned char*,int) ;
 int FUNC_22 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_23 (char*,char*) ;

__attribute__((used)) static int
FUNC_24(unsigned char *VAR_21, int VAR_22,
    struct isoent *VAR_23, struct iso9660 *VAR_24, enum dir_rec_type VAR_25)
{

 unsigned char VAR_26;
 int VAR_27;
 struct ctl_extr_rec VAR_28;
 struct isoent *VAR_29, *VAR_30;
 struct isofile *VAR_31;

 VAR_21 = FUNC_16(VAR_21, VAR_22, VAR_23, &VAR_28);

 if (VAR_25 == VAR_4) {
  VAR_29 = VAR_23->rr_parent;
  VAR_30 = VAR_23->parent;
  if (VAR_29 != ((void*)0))
   VAR_23 = VAR_29;
  else
   VAR_23 = VAR_23->parent;
 } else {
  VAR_29 = ((void*)0);
  VAR_30 = VAR_23;
 }
 VAR_31 = VAR_23->file;

 if (VAR_25 != VAR_3) {
  VAR_26 = 0x01 | 0x80;
  if (VAR_29 != ((void*)0))
   VAR_26 |= 0x20;
 } else {
  VAR_26 = 0x01 | 0x08 | 0x80;
  if (FUNC_6(VAR_31->entry) == VAR_2)
   VAR_26 |= 0x04;
  if (VAR_23->rr_parent != ((void*)0))
   VAR_26 |= 0x40;
  if (VAR_23->rr_child != ((void*)0))
   VAR_26 |= 0x10;
  if (FUNC_6(VAR_31->entry) == VAR_1 ||
      FUNC_6(VAR_31->entry) == VAR_0)
   VAR_26 |= 0x02;
 }


 if (VAR_25 == VAR_5 && VAR_23 == VAR_23->parent) {
  VAR_27 = 7;
  if (VAR_21 != ((void*)0)) {
   VAR_21[1] = 'S';
   VAR_21[2] = 'P';
   VAR_21[3] = VAR_27;
   VAR_21[4] = 1;
   VAR_21[5] = 0xBE;
   VAR_21[6] = 0xEF;
   VAR_21[7] = 0;
   VAR_21 += VAR_27;
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 VAR_27 = 5;
 if (FUNC_17(&VAR_28) < VAR_27)
  VAR_21 = FUNC_15(&VAR_28, VAR_27);
 if (VAR_21 != ((void*)0)) {
  VAR_21[1] = 'R';
  VAR_21[2] = 'R';
  VAR_21[3] = VAR_27;
  VAR_21[4] = 1;
  VAR_21[5] = VAR_26;
  VAR_21 += VAR_27;
 }
 FUNC_18(&VAR_28, VAR_27);


 if (VAR_26 & 0x08) {
  size_t VAR_32 = VAR_31->basename.length;
  const char *VAR_33 = VAR_31->basename.s;
  size_t VAR_34;

  if (FUNC_17(&VAR_28) < 6)
   VAR_21 = FUNC_15(&VAR_28, 6);
  if (VAR_21 != ((void*)0)) {
   VAR_21[1] = 'N';
   VAR_21[2] = 'M';
   VAR_21[4] = 1;
  }
  VAR_34 = FUNC_17(&VAR_28);
  if (VAR_34 > 0xff)
   VAR_34 = 0xff;
  while (VAR_32 + 5 > VAR_34) {
   VAR_27 = (int)VAR_34;
   if (VAR_21 != ((void*)0)) {
    VAR_21[3] = VAR_27;
    VAR_21[5] = 0x01;

    FUNC_19(VAR_21+6, VAR_33, VAR_27 - 5);
    VAR_21 += VAR_27;
   }
   VAR_32 -= VAR_27 - 5;
   VAR_33 += VAR_27 - 5;
   FUNC_18(&VAR_28, VAR_27);
   if (FUNC_17(&VAR_28) < 6) {
    VAR_21 = FUNC_15(&VAR_28, 6);
    VAR_34 = FUNC_17(&VAR_28);
    if (VAR_34 > 0xff)
     VAR_34 = 0xff;
   }
   if (VAR_21 != ((void*)0)) {
    VAR_21[1] = 'N';
    VAR_21[2] = 'M';
    VAR_21[4] = 1;
   }
  }
  VAR_27 = 5 + (int)VAR_32;
  if (VAR_21 != ((void*)0)) {
   VAR_21[3] = VAR_27;
   VAR_21[5] = 0;
   FUNC_19(VAR_21+6, VAR_33, VAR_32);
   VAR_21 += VAR_27;
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 if (VAR_26 & 0x01) {
  VAR_27 = 44;
  if (FUNC_17(&VAR_28) < VAR_27)
   VAR_21 = FUNC_15(&VAR_28, VAR_27);
  if (VAR_21 != ((void*)0)) {
   mode_t VAR_35;
   int64_t VAR_36;
   int64_t VAR_37;

   VAR_35 = FUNC_8(VAR_31->entry);
   VAR_36 = FUNC_13(VAR_31->entry);
   VAR_37 = FUNC_7(VAR_31->entry);
   if (VAR_24->opt.rr == VAR_6) {






    VAR_35 |= 0444;

    if (VAR_35 & 0111)


     VAR_35 |= 0111;

    VAR_35 &= ~0222;

    VAR_35 &= ~07000;
   }

   VAR_21[1] = 'P';
   VAR_21[2] = 'X';
   VAR_21[3] = VAR_27;
   VAR_21[4] = 1;

   FUNC_21(VAR_21+5, VAR_35);

   FUNC_21(VAR_21+13,
       FUNC_11(VAR_31->entry));
   FUNC_21(VAR_21+21, (uint32_t)VAR_36);
   FUNC_21(VAR_21+29, (uint32_t)VAR_37);

   if (VAR_30->dir)
    FUNC_21(VAR_21+37, VAR_30->dir_location);
   else if (VAR_31->hardlink_target != ((void*)0))
    FUNC_21(VAR_21+37,
        VAR_31->hardlink_target->cur_content->location);
   else
    FUNC_21(VAR_21+37,
        VAR_31->cur_content->location);
   VAR_21 += VAR_27;
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 if (VAR_26 & 0x04) {
  const char *VAR_38;
  char VAR_39;

  if (FUNC_17(&VAR_28) < 7)
   VAR_21 = FUNC_15(&VAR_28, 7);
  VAR_38 = VAR_31->symlink.s;
  VAR_39 = '\0';
  if (VAR_21 != ((void*)0)) {
   VAR_21[1] = 'S';
   VAR_21[2] = 'L';
   VAR_21[4] = 1;
  }
  for (;;) {
   unsigned char *VAR_40, *VAR_41, *VAR_42, VAR_43 = 0;
   int VAR_44, VAR_45;

   VAR_45 = FUNC_17(&VAR_28);
   if (VAR_45 > 0xff)
    VAR_45 = 0xff;
   if (VAR_21 != ((void*)0))
    VAR_40 = &VAR_21[6];
   else
    VAR_40 = ((void*)0);
   VAR_41 = VAR_42 = ((void*)0);
   VAR_44 = 0;
   while (*VAR_38 && VAR_44 + 11 < VAR_45) {
    if (VAR_39 == '\0' && VAR_38[0] == '/') {
     if (VAR_40 != ((void*)0)) {
      VAR_41 = VAR_40++;
      *VAR_41 = 0x08;
      *VAR_40++ = 0;
     }
     VAR_44 += 2;
     VAR_38++;
     VAR_39 = '/';
     VAR_42 = ((void*)0);
     continue;
    }
    if (((VAR_39 == '\0' || VAR_39 == '/') &&
          VAR_38[0] == '.' && VAR_38[1] == '.' &&
         (VAR_38[2] == '/' || VAR_38[2] == '\0')) ||
        (VAR_38[0] == '/' &&
          VAR_38[1] == '.' && VAR_38[2] == '.' &&
         (VAR_38[3] == '/' || VAR_38[3] == '\0'))) {






     if (VAR_40 != ((void*)0)) {
      VAR_41 = VAR_40++;
      *VAR_41 = 0x04;
      *VAR_40++ = 0;
     }
     VAR_44 += 2;
     if (VAR_38[0] == '/')
      VAR_38 += 3;
     else
      VAR_38 += 2;
     VAR_39 = '.';
     VAR_42 = ((void*)0);
     continue;
    }
    if (((VAR_39 == '\0' || VAR_39 == '/') &&
          VAR_38[0] == '.' &&
         (VAR_38[1] == '/' || VAR_38[1] == '\0')) ||
        (VAR_38[0] == '/' && VAR_38[1] == '.' &&
         (VAR_38[2] == '/' || VAR_38[2] == '\0'))) {






     if (VAR_40 != ((void*)0)) {
      VAR_41 = VAR_40++;
      *VAR_41 = 0x02;
      *VAR_40++ = 0;
     }
     VAR_44 += 2;
     if (VAR_38[0] == '/')
      VAR_38 += 2;
     else
      VAR_38 ++;
     VAR_39 = '.';
     VAR_42 = ((void*)0);
     continue;
    }
    if (VAR_38[0] == '/' || VAR_42 == ((void*)0)) {
     if (VAR_40 != ((void*)0)) {
      VAR_41 = VAR_40++;
      *VAR_41 = 0;
      VAR_42 = VAR_40++;
      *VAR_42 = 0;
     } else
      VAR_42 = &VAR_43;
     VAR_44 += 2;
     if (VAR_38[0] == '/') {
      VAR_39 = *VAR_38++;
      continue;
     }
    }
    VAR_39 = *VAR_38++;
    if (VAR_40 != ((void*)0)) {
     *VAR_40++ = VAR_39;
     (*VAR_42) ++;
    }
    VAR_44++;
   }
   if (*VAR_38) {
    VAR_27 = 5 + VAR_44;
    if (VAR_21 != ((void*)0)) {



     *VAR_41 |= 0x01;
     VAR_21[3] = VAR_27;
     VAR_21[5] = 0x01;


     VAR_21 += VAR_27;
    }
    FUNC_18(&VAR_28, VAR_27);
    if (FUNC_17(&VAR_28) < 11)
     VAR_21 = FUNC_15(&VAR_28, 11);
    if (VAR_21 != ((void*)0)) {

     VAR_21[1] = 'S';
     VAR_21[2] = 'L';
     VAR_21[4] = 1;
    }
   } else {
    VAR_27 = 5 + VAR_44;
    if (VAR_21 != ((void*)0)) {
     VAR_21[3] = VAR_27;
     VAR_21[5] = 0;
     VAR_21 += VAR_27;
    }
    FUNC_18(&VAR_28, VAR_27);
    break;
   }
  }
 }


 if (VAR_26 & 0x80) {
  unsigned char VAR_46;

  VAR_27 = 5;
  VAR_46 = 0;

  if (FUNC_3(VAR_31->entry) &&
      FUNC_2(VAR_31->entry) <=
      FUNC_9(VAR_31->entry)) {
   VAR_27 += 7;
   VAR_46 |= 0x01;
  }

  if (FUNC_10(VAR_31->entry)) {
   VAR_27 += 7;
   VAR_46 |= 0x02;
  }
  if (FUNC_1(VAR_31->entry)) {
   VAR_27 += 7;
   VAR_46 |= 0x04;
  }
  if (FUNC_5(VAR_31->entry)) {
   VAR_27 += 7;
   VAR_46 |= 0x08;
  }
  if (FUNC_17(&VAR_28) < VAR_27)
   VAR_21 = FUNC_15(&VAR_28, VAR_27);
  if (VAR_21 != ((void*)0)) {
   VAR_21[1] = 'T';
   VAR_21[2] = 'F';
   VAR_21[3] = VAR_27;
   VAR_21[4] = 1;
   VAR_21[5] = VAR_46;
   VAR_21 += 5;

   if (VAR_46 & 0x01) {
    FUNC_22(VAR_21+1,
        FUNC_2(VAR_31->entry));
    VAR_21 += 7;
   }

   if (VAR_46 & 0x02) {
    FUNC_22(VAR_21+1,
        FUNC_9(VAR_31->entry));
    VAR_21 += 7;
   }

   if (VAR_46 & 0x04) {
    FUNC_22(VAR_21+1,
        FUNC_0(VAR_31->entry));
    VAR_21 += 7;
   }

   if (VAR_46 & 0x08) {
    FUNC_22(VAR_21+1,
        FUNC_4(VAR_31->entry));
    VAR_21 += 7;
   }
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 if (VAR_26 & 0x40) {
  VAR_27 = 4;
  if (FUNC_17(&VAR_28) < VAR_27)
   VAR_21 = FUNC_15(&VAR_28, VAR_27);
  if (VAR_21 != ((void*)0)) {
   VAR_21[1] = 'R';
   VAR_21[2] = 'E';
   VAR_21[3] = VAR_27;
   VAR_21[4] = 1;
   VAR_21 += VAR_27;
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 if (VAR_26 & 0x20) {
  VAR_27 = 12;
  if (FUNC_17(&VAR_28) < VAR_27)
   VAR_21 = FUNC_15(&VAR_28, VAR_27);
  if (VAR_21 != ((void*)0)) {
   VAR_21[1] = 'P';
   VAR_21[2] = 'L';
   VAR_21[3] = VAR_27;
   VAR_21[4] = 1;
   FUNC_21(VAR_21 + 5,
       VAR_29->dir_location);
   VAR_21 += VAR_27;
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 if (VAR_26 & 0x10) {
  VAR_27 = 12;
  if (FUNC_17(&VAR_28) < VAR_27)
   VAR_21 = FUNC_15(&VAR_28, VAR_27);
  if (VAR_21 != ((void*)0)) {
   VAR_21[1] = 'C';
   VAR_21[2] = 'L';
   VAR_21[3] = VAR_27;
   VAR_21[4] = 1;
   FUNC_21(VAR_21 + 5,
       VAR_23->rr_child->dir_location);
   VAR_21 += VAR_27;
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 if (VAR_26 & 0x02) {
  VAR_27 = 20;
  if (FUNC_17(&VAR_28) < VAR_27)
   VAR_21 = FUNC_15(&VAR_28, VAR_27);
  if (VAR_21 != ((void*)0)) {
   uint64_t VAR_47;

   VAR_21[1] = 'P';
   VAR_21[2] = 'N';
   VAR_21[3] = VAR_27;
   VAR_21[4] = 1;
   VAR_47 = (uint64_t)FUNC_12(VAR_31->entry);
   FUNC_21(VAR_21 + 5, (uint32_t)(VAR_47 >> 32));
   FUNC_21(VAR_21 + 13, (uint32_t)(VAR_47 & 0xFFFFFFFF));
   VAR_21 += VAR_27;
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 if (VAR_31->zisofs.header_size) {
  VAR_27 = 16;
  if (FUNC_17(&VAR_28) < VAR_27)
   VAR_21 = FUNC_15(&VAR_28, VAR_27);
  if (VAR_21 != ((void*)0)) {
   VAR_21[1] = 'Z';
   VAR_21[2] = 'F';
   VAR_21[3] = VAR_27;
   VAR_21[4] = 1;
   VAR_21[5] = 'p';
   VAR_21[6] = 'z';
   VAR_21[7] = VAR_31->zisofs.header_size;
   VAR_21[8] = VAR_31->zisofs.log2_bs;
   FUNC_21(VAR_21 + 9, VAR_31->zisofs.uncompressed_size);
   VAR_21 += VAR_27;
  }
  FUNC_18(&VAR_28, VAR_27);
 }


 if (VAR_25 == VAR_5 && VAR_23 == VAR_23->parent) {
  VAR_27 = VAR_8;
  if (VAR_21 != ((void*)0))
   FUNC_20(VAR_21+1, VAR_24->location_rrip_er,
       0, VAR_7);
  FUNC_18(&VAR_28, VAR_27);
 }

 FUNC_14(&VAR_28, 0);

 return (VAR_28.dr_len);
}
