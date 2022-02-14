
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct isofile {int entry; TYPE_1__* cur_content; struct isofile* hardlink_target; } ;
struct TYPE_6__ {size_t vd; size_t self; size_t parent; size_t normal; } ;
struct isoent {size_t id_len; int dir_location; int dir_block; TYPE_3__ dr_len; int * identifier; struct isofile* file; scalar_t__ dir; struct isoent* parent; } ;
struct TYPE_5__ {scalar_t__ rr; } ;
struct iso9660 {TYPE_2__ opt; int volume_sequence_number; } ;
typedef enum vdd_type { ____Placeholder_vdd_type } vdd_type ;
typedef enum dir_rec_type { ____Placeholder_dir_rec_type } dir_rec_type ;
struct TYPE_4__ {int location; scalar_t__ size; int * next; } ;






 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int *,size_t) ;
 size_t FUNC_2 (unsigned char*,int,struct isoent*,struct iso9660*,int) ;
 int FUNC_3 (unsigned char*,unsigned char) ;
 int FUNC_4 (unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*,int ) ;

__attribute__((used)) static int
FUNC_7(unsigned char *VAR_4, size_t VAR_5, struct isoent *VAR_6,
    struct iso9660 *VAR_7, enum dir_rec_type VAR_8,
    enum vdd_type VAR_9)
{
 unsigned char *VAR_10;
 size_t VAR_11;
 size_t VAR_12;

 if (VAR_4 != ((void*)0)) {





  switch (VAR_8) {
  case 128:
   VAR_11 = VAR_6->dr_len.vd; break;
  case 129:
   VAR_11 = VAR_6->dr_len.self; break;
  case 130:
   VAR_11 = VAR_6->dr_len.parent; break;
  case 131:
  default:
   VAR_11 = VAR_6->dr_len.normal; break;
  }
  if (VAR_11 > VAR_5)
   return (0);
 }

 if (VAR_8 == 131 && VAR_6->identifier != ((void*)0))
  VAR_12 = VAR_6->id_len;
 else
  VAR_12 = 1;

 if (VAR_4 != ((void*)0)) {
  struct isoent *VAR_13;
  struct isofile *VAR_14;
  unsigned char VAR_15;

  if (VAR_8 == 130)
   VAR_13 = VAR_6->parent;
  else
   VAR_13 = VAR_6;
  VAR_14 = VAR_6->file;
  if (VAR_14->hardlink_target != ((void*)0))
   VAR_14 = VAR_14->hardlink_target;

  if (VAR_13->dir)
   VAR_15 = VAR_0;
  else {
   if (VAR_14->cur_content->next != ((void*)0))
    VAR_15 = VAR_1;
   else
    VAR_15 = 0;
  }

  VAR_10 = VAR_4 -1;

  FUNC_3(VAR_10+2, 0);

  if (VAR_13->dir)
   FUNC_5(VAR_10+3, VAR_13->dir_location);
  else
   FUNC_5(VAR_10+3, VAR_14->cur_content->location);

  if (VAR_13->dir)
   FUNC_5(VAR_10+11,
       VAR_13->dir_block * VAR_2);
  else
   FUNC_5(VAR_10+11, (uint32_t)VAR_14->cur_content->size);







  FUNC_6(VAR_10+19,
      FUNC_0(VAR_13->file->entry));

  VAR_10[26] = VAR_15;

  FUNC_3(VAR_10+27, 0);

  FUNC_3(VAR_10+28, 0);

  FUNC_4(VAR_10+29, VAR_7->volume_sequence_number);

  FUNC_3(VAR_10+33, (unsigned char)VAR_12);

  switch (VAR_8) {
  case 128:
  case 129:
   FUNC_3(VAR_10+34, 0);
   break;
  case 130:
   FUNC_3(VAR_10+34, 1);
   break;
  case 131:
   if (VAR_6->identifier != ((void*)0))
    FUNC_1(VAR_10+34, VAR_6->identifier, VAR_12);
   else
    FUNC_3(VAR_10+34, 0);
   break;
  }
 } else
  VAR_10 = ((void*)0);
 VAR_11 = 33 + VAR_12;

 if (VAR_11 & 0x01) {
  VAR_11 ++;
  if (VAR_4 != ((void*)0))
   VAR_10[VAR_11] = 0;
 }


 if (VAR_8 == 128) {
  if (VAR_4 != ((void*)0))

   FUNC_3(VAR_4, (unsigned char)VAR_11);
  else
   VAR_6->dr_len.vd = (int)VAR_11;
  return ((int)VAR_11);
 }


 if (VAR_7->opt.rr && VAR_9 != VAR_3)
  VAR_11 = FUNC_2(VAR_10, (int)VAR_11,
      VAR_6, VAR_7, VAR_8);

 if (VAR_4 != ((void*)0))

  FUNC_3(VAR_4, (unsigned char)VAR_11);
 else {




  switch (VAR_8) {
  case 128:



   break;
  case 129:
   VAR_6->dr_len.self = (int)VAR_11; break;
  case 130:
   VAR_6->dr_len.parent = (int)VAR_11; break;
  case 131:
   VAR_6->dr_len.normal = (int)VAR_11; break;
  }
 }

 return ((int)VAR_11);
}
