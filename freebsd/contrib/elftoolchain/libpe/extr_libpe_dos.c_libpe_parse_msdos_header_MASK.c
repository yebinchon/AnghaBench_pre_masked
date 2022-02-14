
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint32_t ;
typedef int ssize_t ;
typedef int off_t ;
typedef int coff ;
struct TYPE_7__ {int pe_flags; int pe_fsize; int pe_stub_ex; int pe_fd; TYPE_1__* pe_dh; int * pe_stub; } ;
struct TYPE_6__ {int dh_lastsize; int dh_nblock; int dh_nreloc; int dh_hdrsize; int dh_minalloc; int dh_maxalloc; int dh_ss; int dh_sp; int dh_checksum; int dh_ip; int dh_cs; int dh_relocpos; int dh_noverlay; int* dh_reserved1; int dh_oemid; int dh_oeminfo; int* dh_reserved2; int dh_lfanew; int * dh_magic; } ;
typedef TYPE_1__ PE_DosHdr ;
typedef int PE_CoffHdr ;
typedef TYPE_2__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int ,char*,int) ;

int
FUNC_9(PE *VAR_8, char *VAR_9)
{
 PE_DosHdr *VAR_10;
 char VAR_11[sizeof(PE_CoffHdr)];
 uint32_t VAR_12;
 int VAR_13;

 if ((VAR_8->pe_stub = FUNC_6(sizeof(PE_DosHdr))) == ((void*)0)) {
  VAR_7 = VAR_0;
  return (-1);
 }
 FUNC_7(VAR_8->pe_stub, VAR_9, sizeof(PE_DosHdr));

 if ((VAR_10 = FUNC_6(sizeof(*VAR_10))) == ((void*)0)) {
  VAR_7 = VAR_0;
  return (-1);
 }
 VAR_8->pe_dh = VAR_10;


 FUNC_7(VAR_10->dh_magic, VAR_9, 2);
 VAR_9 += 2;
 FUNC_0(VAR_9, VAR_10->dh_lastsize);
 FUNC_0(VAR_9, VAR_10->dh_nblock);
 FUNC_0(VAR_9, VAR_10->dh_nreloc);
 FUNC_0(VAR_9, VAR_10->dh_hdrsize);
 FUNC_0(VAR_9, VAR_10->dh_minalloc);
 FUNC_0(VAR_9, VAR_10->dh_maxalloc);
 FUNC_0(VAR_9, VAR_10->dh_ss);
 FUNC_0(VAR_9, VAR_10->dh_sp);
 FUNC_0(VAR_9, VAR_10->dh_checksum);
 FUNC_0(VAR_9, VAR_10->dh_ip);
 FUNC_0(VAR_9, VAR_10->dh_cs);
 FUNC_0(VAR_9, VAR_10->dh_relocpos);
 FUNC_0(VAR_9, VAR_10->dh_noverlay);


 if (VAR_10->dh_relocpos != 0x40) {
  VAR_8->pe_flags |= VAR_2;
  return (0);
 }

 for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  FUNC_0(VAR_9, VAR_10->dh_reserved1[VAR_13]);
 FUNC_0(VAR_9, VAR_10->dh_oemid);
 FUNC_0(VAR_9, VAR_10->dh_oeminfo);
 for (VAR_13 = 0; VAR_13 < 10; VAR_13++)
  FUNC_0(VAR_9, VAR_10->dh_reserved2[VAR_13]);
 FUNC_1(VAR_9, VAR_10->dh_lfanew);


 if (VAR_10->dh_lfanew > VAR_8->pe_fsize - 4) {
  VAR_8->pe_flags |= VAR_2;
  return (0);
 }

 if (VAR_10->dh_lfanew < sizeof(PE_DosHdr) &&
     (VAR_8->pe_flags & VAR_4)) {
  VAR_8->pe_flags |= VAR_2;
  return (0);
 }

 if (VAR_10->dh_lfanew > sizeof(PE_DosHdr)) {
  VAR_8->pe_stub_ex = VAR_10->dh_lfanew - sizeof(PE_DosHdr);
  if (VAR_8->pe_flags & VAR_4) {

   if (FUNC_4(VAR_8) < 0) {
    VAR_8->pe_flags |= VAR_2;
    return (0);
   }
  }
 }

 if ((VAR_8->pe_flags & VAR_4) == 0) {

  if (FUNC_5(VAR_8->pe_fd, (off_t) VAR_10->dh_lfanew, VAR_6) < 0) {
   VAR_8->pe_flags |= VAR_3;
   return (0);
  }
 }

 if (FUNC_8(VAR_8->pe_fd, &VAR_12, 4) != 4 ||
     FUNC_2(VAR_12) != VAR_5) {
  VAR_8->pe_flags |= VAR_3;
  return (0);
 }

 if (FUNC_8(VAR_8->pe_fd, VAR_11, sizeof(VAR_11)) != (ssize_t) sizeof(VAR_11)) {
  VAR_8->pe_flags |= VAR_1;
  return (0);
 }

 return (FUNC_3(VAR_8, VAR_11));
}
