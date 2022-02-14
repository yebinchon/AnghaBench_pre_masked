
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct ar_hdr {char* ar_uid; char* ar_gid; char* ar_mode; char* ar_size; char* ar_name; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_11__ {unsigned char* e_rawhdr; TYPE_2__* e_arhdr; } ;
struct TYPE_13__ {int e_flags; uintptr_t e_rawsize; TYPE_1__ e_hdr; scalar_t__ e_rawfile; struct TYPE_13__* e_parent; } ;
struct TYPE_12__ {size_t ar_size; struct TYPE_12__* ar_rawname; struct TYPE_12__* ar_name; scalar_t__ ar_flags; scalar_t__ ar_mode; scalar_t__ ar_gid; scalar_t__ ar_uid; } ;
typedef TYPE_2__ Elf_Arhdr ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 uintptr_t VAR_4 ;
 scalar_t__ FUNC_2 (char*,int,int,size_t*) ;
 TYPE_2__* FUNC_3 (struct ar_hdr*) ;
 TYPE_2__* FUNC_4 (struct ar_hdr*,TYPE_3__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;

Elf_Arhdr *
FUNC_8(Elf *VAR_5)
{
 Elf *VAR_6;
 Elf_Arhdr *VAR_7;
 char *VAR_8;
 size_t VAR_9, VAR_10;
 struct ar_hdr *VAR_11;

 if ((VAR_6 = VAR_5->e_parent) == ((void*)0)) {
  FUNC_1(VAR_0, 0);
  return (((void*)0));
 }

 FUNC_5((VAR_5->e_flags & VAR_2) == 0);

 VAR_11 = (struct ar_hdr *) (uintptr_t) VAR_5->e_hdr.e_rawhdr;

 FUNC_5((uintptr_t) VAR_11 >= (uintptr_t) VAR_6->e_rawfile + VAR_4);
 FUNC_5((uintptr_t) VAR_11 <= (uintptr_t) VAR_6->e_rawfile +
     VAR_6->e_rawsize - sizeof(struct ar_hdr));

 if ((VAR_7 = FUNC_7(sizeof(Elf_Arhdr))) == ((void*)0)) {
  FUNC_1(VAR_3, 0);
  return (((void*)0));
 }

 VAR_5->e_hdr.e_arhdr = VAR_7;
 VAR_5->e_flags |= VAR_2;

 VAR_7->ar_name = VAR_7->ar_rawname = ((void*)0);

 if ((VAR_7->ar_name = FUNC_4(VAR_11, VAR_6)) ==
     ((void*)0))
  goto error;

 if (FUNC_2(VAR_11->ar_uid, sizeof(VAR_11->ar_uid), 10,
     &VAR_9) == 0)
  goto error;
 VAR_7->ar_uid = (uid_t) VAR_9;

 if (FUNC_2(VAR_11->ar_gid, sizeof(VAR_11->ar_gid), 10,
     &VAR_9) == 0)
  goto error;
 VAR_7->ar_gid = (gid_t) VAR_9;

 if (FUNC_2(VAR_11->ar_mode, sizeof(VAR_11->ar_mode), 8,
     &VAR_9) == 0)
  goto error;
 VAR_7->ar_mode = (mode_t) VAR_9;

 if (FUNC_2(VAR_11->ar_size, sizeof(VAR_11->ar_size), 10,
     &VAR_9) == 0)
  goto error;




 if (FUNC_0(VAR_11->ar_name)) {
  VAR_8 = VAR_11->ar_name +
      VAR_1;
  if (FUNC_2(VAR_8, sizeof(VAR_11->ar_name) -
      VAR_1, 10, &VAR_10) == 0)
   goto error;
  VAR_9 -= VAR_10;
 }

 VAR_7->ar_size = VAR_9;

 if ((VAR_7->ar_rawname = FUNC_3(VAR_11)) == ((void*)0))
  goto error;

 VAR_7->ar_flags = 0;

 return (VAR_7);

 error:
 if (VAR_7) {
  if (VAR_7->ar_name)
   FUNC_6(VAR_7->ar_name);
  if (VAR_7->ar_rawname)
   FUNC_6(VAR_7->ar_rawname);
  FUNC_6(VAR_7);
 }

 VAR_5->e_flags &= ~VAR_2;
 VAR_5->e_hdr.e_rawhdr = (unsigned char *) VAR_11;

 return (((void*)0));
}
