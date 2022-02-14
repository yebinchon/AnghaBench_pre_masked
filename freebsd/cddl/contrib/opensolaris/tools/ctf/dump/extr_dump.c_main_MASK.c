
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_30__ {int avail_in; int avail_out; int total_out; void* next_out; void* next_in; } ;
typedef TYPE_1__ z_stream ;
struct stat {int st_size; } ;
typedef int h ;
struct TYPE_31__ {scalar_t__ ctp_magic; scalar_t__ ctp_version; } ;
typedef TYPE_2__ ctf_preamble_t ;
struct TYPE_32__ {int cth_flags; int cth_stroff; int cth_strlen; } ;
typedef TYPE_3__ ctf_header_t ;
struct TYPE_33__ {int cd_ctflen; int cd_nsyms; TYPE_3__* cd_ctfdata; void* cd_strdata; void* cd_symdata; } ;
typedef TYPE_4__ ctf_data_t ;
typedef TYPE_3__* caddr_t ;
struct TYPE_35__ {int d_size; TYPE_3__* d_buf; } ;
struct TYPE_34__ {scalar_t__ sh_link; int sh_size; int sh_entsize; } ;
typedef TYPE_6__ GElf_Shdr ;
typedef int GElf_Ehdr ;
typedef int Elf_Scn ;
typedef TYPE_7__ Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,int *,char*) ;
 int VAR_25 ;
 int FUNC_10 (int,struct stat*) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,TYPE_6__*) ;
 int FUNC_13 (int,char**,char*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 void* FUNC_17 (int) ;
 TYPE_3__* FUNC_18 (int *,int,int ,int ,int,int ) ;
 int FUNC_19 (char const*,int,...) ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 char VAR_29 ;
 int FUNC_20 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_21 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_25 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_26 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_27 (TYPE_3__*,TYPE_4__*) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_28 (char*,...) ;
 int FUNC_29 (int,TYPE_3__*,int) ;
 int FUNC_30 (int) ;

int
FUNC_31(int VAR_32, char *VAR_33[])
{
 const char *VAR_34 = ((void*)0);
 const char *VAR_35 = ((void*)0);
 int VAR_36 = 0;
 int VAR_37, VAR_38, VAR_39;

 ctf_data_t VAR_40;
 const ctf_preamble_t *VAR_41;
 ctf_header_t *VAR_42 = ((void*)0);
 Elf *VAR_43;
 GElf_Ehdr VAR_44;

 (void) FUNC_8(VAR_5);

 for (VAR_27 = 0; VAR_28 < VAR_32; VAR_28++) {
  while ((VAR_37 = FUNC_13(VAR_32, VAR_33, "dfhlsStu:")) != (int)VAR_4) {
   switch (VAR_37) {
   case 'd':
    VAR_25 |= VAR_8;
    break;
   case 'f':
    VAR_25 |= VAR_9;
    break;
   case 'h':
    VAR_25 |= VAR_10;
    break;
   case 'l':
    VAR_25 |= VAR_11;
    break;
   case 's':
    VAR_25 |= VAR_13;
    break;
   case 'S':
    VAR_25 |= VAR_12;
    break;
   case 't':
    VAR_25 |= VAR_14;
    break;
   case 'u':
    VAR_35 = VAR_26;
    break;
   default:
    if (VAR_29 == '?')
     return (FUNC_23(VAR_31, 1));
    FUNC_28("illegal option -- %c\n", VAR_29);
    return (FUNC_23(VAR_30, 0));
   }
  }

  if (VAR_28 < VAR_32) {
   if (VAR_34 != ((void*)0))
    return (FUNC_23(VAR_30, 0));
   VAR_34 = VAR_33[VAR_28];
  }
 }

 if (VAR_34 == ((void*)0))
  return (FUNC_23(VAR_30, 0));

 if (VAR_25 == 0 && VAR_35 == ((void*)0))
  VAR_25 = VAR_7;

 if ((VAR_38 = FUNC_19(VAR_34, VAR_18)) == -1)
  FUNC_3("failed to open %s", VAR_34);

 if ((VAR_43 = FUNC_4(VAR_38, VAR_3, ((void*)0))) != ((void*)0) &&
     FUNC_11(VAR_43, &VAR_44) != ((void*)0)) {

  Elf_Data *VAR_45 = ((void*)0);
  Elf_Scn *VAR_46 = FUNC_9(VAR_43, &VAR_44, ".SUNW_ctf");
  Elf_Scn *VAR_47;
  GElf_Shdr VAR_48;

  if (VAR_46 == ((void*)0) || (VAR_45 = FUNC_6(VAR_46, ((void*)0))) == ((void*)0))
   FUNC_3("%s does not contain .SUNW_ctf data\n", VAR_34);

  VAR_40.cd_ctfdata = VAR_45->d_buf;
  VAR_40.cd_ctflen = VAR_45->d_size;







  if (FUNC_12(VAR_46, &VAR_48) != ((void*)0) &&
      VAR_48.sh_link != 0) {
   VAR_47 = FUNC_7(VAR_43, VAR_48.sh_link);
  } else {
   VAR_47 = FUNC_9(VAR_43, &VAR_44, ".symtab");
  }


  if (VAR_47 != ((void*)0)) {
   GElf_Shdr VAR_49;
   Elf_Scn *VAR_50;

   if (FUNC_12(VAR_47, &VAR_49) != ((void*)0)) {
    VAR_50 = FUNC_7(VAR_43, VAR_49.sh_link);

    VAR_40.cd_nsyms = VAR_49.sh_size / VAR_49.sh_entsize;
    VAR_40.cd_symdata = FUNC_6(VAR_47, ((void*)0));
    VAR_40.cd_strdata = FUNC_6(VAR_50, ((void*)0));
   }
  }
 } else {
  struct stat VAR_51;

  if (FUNC_10(VAR_38, &VAR_51) == -1)
   FUNC_3("failed to fstat %s", VAR_34);

  VAR_40.cd_ctflen = VAR_51.st_size;
  VAR_40.cd_ctfdata = FUNC_18(((void*)0), VAR_40.cd_ctflen, VAR_21,
      VAR_16, VAR_38, 0);
  if (VAR_40.cd_ctfdata == VAR_15)
   FUNC_3("failed to mmap %s", VAR_34);
 }






 if (VAR_40.cd_ctflen < sizeof (ctf_preamble_t))
  FUNC_3("%s does not contain a CTF preamble\n", VAR_34);

 void *VAR_52 = (void *) VAR_40.cd_ctfdata;
 VAR_41 = VAR_52;

 if (VAR_41->ctp_magic != VAR_1)
  FUNC_3("%s does not appear to contain CTF data\n", VAR_34);

 if (VAR_41->ctp_version == VAR_2) {
  VAR_52 = (void *) VAR_40.cd_ctfdata;
  VAR_42 = VAR_52;
  VAR_40.cd_ctfdata = (caddr_t)VAR_40.cd_ctfdata + sizeof (ctf_header_t);

  if (VAR_40.cd_ctflen < sizeof (ctf_header_t)) {
   FUNC_3("%s does not contain a v%d CTF header\n", VAR_34,
       VAR_2);
  }

 } else {
  FUNC_3("%s contains unsupported CTF version %d\n", VAR_34,
      VAR_41->ctp_version);
 }





 if (VAR_42->cth_flags & VAR_0) {
  z_stream VAR_53;
  void *VAR_54;
  int VAR_55;

  if ((VAR_54 = FUNC_17(VAR_42->cth_stroff + VAR_42->cth_strlen)) == ((void*)0))
   FUNC_3("failed to allocate decompression buffer");

  FUNC_1(&VAR_53, sizeof (z_stream));
  VAR_53.next_in = (void *)VAR_40.cd_ctfdata;
  VAR_53.avail_in = VAR_40.cd_ctflen;
  VAR_53.next_out = VAR_54;
  VAR_53.avail_out = VAR_42->cth_stroff + VAR_42->cth_strlen;

  if ((VAR_55 = FUNC_16(&VAR_53)) != VAR_23)
   FUNC_3("failed to initialize zlib: %s\n", FUNC_30(VAR_55));

  if ((VAR_55 = FUNC_14(&VAR_53, VAR_22)) != VAR_24)
   FUNC_3("failed to decompress CTF data: %s\n", FUNC_30(VAR_55));

  if ((VAR_55 = FUNC_15(&VAR_53)) != VAR_23)
   FUNC_3("failed to finish decompression: %s\n", FUNC_30(VAR_55));

  if (VAR_53.total_out != VAR_42->cth_stroff + VAR_42->cth_strlen)
   FUNC_3("CTF data is corrupt -- short decompression\n");

  VAR_40.cd_ctfdata = VAR_54;
  VAR_40.cd_ctflen = VAR_42->cth_stroff + VAR_42->cth_strlen;
 }

 if (VAR_25 & VAR_10)
  VAR_36 |= FUNC_20(VAR_42, &VAR_40);
 if (VAR_25 & (VAR_11))
  VAR_36 |= FUNC_21(VAR_42, &VAR_40);
 if (VAR_25 & (VAR_8 | VAR_12))
  VAR_36 |= FUNC_24(VAR_42, &VAR_40);
 if (VAR_25 & (VAR_9 | VAR_12))
  VAR_36 |= FUNC_25(VAR_42, &VAR_40);
 if (VAR_25 & (VAR_14 | VAR_12))
  VAR_36 |= FUNC_27(VAR_42, &VAR_40);
 if (VAR_25 & (VAR_13 | VAR_12))
  VAR_36 |= FUNC_26(VAR_42, &VAR_40);
 if (VAR_25 & VAR_12)
  VAR_36 |= FUNC_22();






 if (VAR_35 != ((void*)0)) {
  ctf_header_t VAR_56;

  FUNC_0(VAR_42, &VAR_56, sizeof (VAR_56));
  VAR_56.cth_flags &= ~VAR_0;

  if ((VAR_39 = FUNC_19(VAR_35, VAR_20|VAR_17|VAR_19, 0666)) < 0 ||
      FUNC_29(VAR_39, &VAR_56, sizeof (VAR_56)) != sizeof (VAR_56) ||
      FUNC_29(VAR_39, VAR_40.cd_ctfdata, VAR_40.cd_ctflen) != (int) VAR_40.cd_ctflen) {
   FUNC_28("failed to write CTF data to '%s'", VAR_35);
   VAR_36 |= VAR_6;
  }

  (void) FUNC_2(VAR_39);
 }

 if (VAR_43 != ((void*)0))
  (void) FUNC_5(VAR_43);

 (void) FUNC_2(VAR_38);
 return (VAR_36);
}
