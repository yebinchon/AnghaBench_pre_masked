
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct internal_extra_pe_aouthdr {int BaseOfData; int AddressOfEntryPoint; int BaseOfCode; int NumberOfRvaAndSizes; TYPE_1__* DataDirectory; scalar_t__ ImageBase; void* LoaderFlags; int SizeOfHeapCommit; int SizeOfHeapReserve; int SizeOfStackCommit; int SizeOfStackReserve; void* DllCharacteristics; void* Subsystem; void* CheckSum; void* SizeOfHeaders; void* SizeOfImage; void* Reserved1; void* MinorSubsystemVersion; void* MajorSubsystemVersion; void* MinorImageVersion; void* MajorImageVersion; void* MinorOperatingSystemVersion; void* MajorOperatingSystemVersion; void* FileAlignment; void* SectionAlignment; int SizeOfUninitializedData; scalar_t__ SizeOfInitializedData; scalar_t__ SizeOfCode; void* MinorLinkerVersion; void* MajorLinkerVersion; void* Magic; } ;
struct internal_aouthdr {int entry; int text_start; int data_start; scalar_t__ dsize; scalar_t__ tsize; int bsize; void* magic; void* vstamp; struct internal_extra_pe_aouthdr pe; } ;
typedef int bfd ;
struct TYPE_6__ {scalar_t__ vstamp; int data_start; int text_start; int entry; int bsize; int dsize; int tsize; scalar_t__ magic; } ;
struct TYPE_5__ {int ** DataDirectory; int NumberOfRvaAndSizes; int LoaderFlags; int SizeOfHeapCommit; int SizeOfHeapReserve; int SizeOfStackCommit; int SizeOfStackReserve; scalar_t__ DllCharacteristics; scalar_t__ Subsystem; int CheckSum; int SizeOfHeaders; int SizeOfImage; int Reserved1; scalar_t__ MinorSubsystemVersion; scalar_t__ MajorSubsystemVersion; scalar_t__ MinorImageVersion; scalar_t__ MajorImageVersion; scalar_t__ MinorOperatingSystemVersion; scalar_t__ MajorOperatingSystemVersion; int FileAlignment; int SectionAlignment; int ImageBase; } ;
struct TYPE_4__ {int Size; void* VirtualAddress; } ;
typedef TYPE_2__ PEAOUTHDR ;
typedef TYPE_3__ AOUTHDR ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 void* FUNC_11 (int *,scalar_t__) ;
 void* FUNC_12 (int *,int ) ;
 void* FUNC_13 (int *,scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int *,int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_16 (int ,int *,int) ;
 int VAR_4 ;

void
FUNC_17 (bfd * VAR_5,
     void * VAR_6,
     void * VAR_7)
{
  PEAOUTHDR * VAR_8 = (PEAOUTHDR *) VAR_6;
  AOUTHDR * VAR_9 = (AOUTHDR *) VAR_6;
  struct internal_aouthdr *VAR_10
    = (struct internal_aouthdr *) VAR_7;
  struct internal_extra_pe_aouthdr *VAR_11 = &VAR_10->pe;

  VAR_10->magic = FUNC_11 (VAR_5, VAR_9->magic);
  VAR_10->vstamp = FUNC_11 (VAR_5, VAR_9->vstamp);
  VAR_10->tsize = FUNC_5 (VAR_5, VAR_9->tsize);
  VAR_10->dsize = FUNC_2 (VAR_5, VAR_9->dsize);
  VAR_10->bsize = FUNC_0 (VAR_5, VAR_9->bsize);
  VAR_10->entry = FUNC_3 (VAR_5, VAR_9->entry);
  VAR_10->text_start =
    FUNC_4 (VAR_5, VAR_9->text_start);


  VAR_10->data_start =
    FUNC_1 (VAR_5, VAR_9->data_start);
  VAR_11->BaseOfData = VAR_10->data_start;


  VAR_11->Magic = VAR_10->magic;
  VAR_11->MajorLinkerVersion = FUNC_13 (VAR_5, VAR_9->vstamp);
  VAR_11->MinorLinkerVersion = FUNC_13 (VAR_5, VAR_9->vstamp + 1);
  VAR_11->SizeOfCode = VAR_10->tsize ;
  VAR_11->SizeOfInitializedData = VAR_10->dsize ;
  VAR_11->SizeOfUninitializedData = VAR_10->bsize ;
  VAR_11->AddressOfEntryPoint = VAR_10->entry;
  VAR_11->BaseOfCode = VAR_10->text_start;
  VAR_11->ImageBase = FUNC_6 (VAR_5, VAR_8->ImageBase);
  VAR_11->SectionAlignment = FUNC_12 (VAR_5, VAR_8->SectionAlignment);
  VAR_11->FileAlignment = FUNC_12 (VAR_5, VAR_8->FileAlignment);
  VAR_11->MajorOperatingSystemVersion =
    FUNC_11 (VAR_5, VAR_8->MajorOperatingSystemVersion);
  VAR_11->MinorOperatingSystemVersion =
    FUNC_11 (VAR_5, VAR_8->MinorOperatingSystemVersion);
  VAR_11->MajorImageVersion = FUNC_11 (VAR_5, VAR_8->MajorImageVersion);
  VAR_11->MinorImageVersion = FUNC_11 (VAR_5, VAR_8->MinorImageVersion);
  VAR_11->MajorSubsystemVersion = FUNC_11 (VAR_5, VAR_8->MajorSubsystemVersion);
  VAR_11->MinorSubsystemVersion = FUNC_11 (VAR_5, VAR_8->MinorSubsystemVersion);
  VAR_11->Reserved1 = FUNC_12 (VAR_5, VAR_8->Reserved1);
  VAR_11->SizeOfImage = FUNC_12 (VAR_5, VAR_8->SizeOfImage);
  VAR_11->SizeOfHeaders = FUNC_12 (VAR_5, VAR_8->SizeOfHeaders);
  VAR_11->CheckSum = FUNC_12 (VAR_5, VAR_8->CheckSum);
  VAR_11->Subsystem = FUNC_11 (VAR_5, VAR_8->Subsystem);
  VAR_11->DllCharacteristics = FUNC_11 (VAR_5, VAR_8->DllCharacteristics);
  VAR_11->SizeOfStackReserve =
    FUNC_10 (VAR_5, VAR_8->SizeOfStackReserve);
  VAR_11->SizeOfStackCommit =
    FUNC_9 (VAR_5, VAR_8->SizeOfStackCommit);
  VAR_11->SizeOfHeapReserve =
    FUNC_8 (VAR_5, VAR_8->SizeOfHeapReserve);
  VAR_11->SizeOfHeapCommit =
    FUNC_7 (VAR_5, VAR_8->SizeOfHeapCommit);
  VAR_11->LoaderFlags = FUNC_12 (VAR_5, VAR_8->LoaderFlags);
  VAR_11->NumberOfRvaAndSizes = FUNC_12 (VAR_5, VAR_8->NumberOfRvaAndSizes);

  {
    int VAR_12;


    if (VAR_11->NumberOfRvaAndSizes > 16)
      {
       FUNC_15)
   (FUNC_14("%B: aout header specifies an invalid number of data-directory entries: %d"),
    VAR_5, VAR_11->NumberOfRvaAndSizes);


 VAR_11->NumberOfRvaAndSizes = 0;
      }

    for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
      {

 int VAR_13 =
   FUNC_12 (VAR_5, VAR_8->DataDirectory[VAR_12][1]);

 VAR_11->DataDirectory[VAR_12].Size = VAR_13;

 if (VAR_13)
   VAR_11->DataDirectory[VAR_12].VirtualAddress =
     FUNC_12 (VAR_5, VAR_8->DataDirectory[VAR_12][0]);
 else
   VAR_11->DataDirectory[VAR_12].VirtualAddress = 0;
      }
  }

  if (VAR_10->entry)
    {
      VAR_10->entry += VAR_11->ImageBase;

      VAR_10->entry &= 0xffffffff;

    }

  if (VAR_10->tsize)
    {
      VAR_10->text_start += VAR_11->ImageBase;

      VAR_10->text_start &= 0xffffffff;

    }



  if (VAR_10->dsize)
    {
      VAR_10->data_start += VAR_11->ImageBase;
      VAR_10->data_start &= 0xffffffff;
    }
}
