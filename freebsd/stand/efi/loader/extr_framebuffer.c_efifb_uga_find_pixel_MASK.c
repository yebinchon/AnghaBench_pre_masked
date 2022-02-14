
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef size_t u_int ;
typedef int ssize_t ;
struct TYPE_15__ {int (* Read ) (TYPE_4__*,int ,int ,scalar_t__,size_t,scalar_t__*) ;} ;
struct TYPE_18__ {TYPE_1__ Mem; } ;
struct TYPE_17__ {int (* Blt ) (TYPE_3__*,TYPE_2__*,int ,int ,size_t,int ,size_t,int,int,int ) ;} ;
struct TYPE_16__ {scalar_t__ Reserved; int Blue; int Green; int Red; } ;
typedef TYPE_2__ EFI_UGA_PIXEL ;
typedef TYPE_3__ EFI_UGA_DRAW_PROTOCOL ;
typedef int EFI_STATUS ;
typedef TYPE_4__ EFI_PCI_IO_PROTOCOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_2 (size_t,int) ;
 int FUNC_3 (scalar_t__*) ;
 size_t FUNC_4 (scalar_t__,size_t) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,int ,int ,size_t,int ,size_t,int,int,int ) ;
 int FUNC_7 (TYPE_4__*,int ,int ,scalar_t__,size_t,scalar_t__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,int ,int ,size_t,int ,size_t,int,int,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ,scalar_t__,size_t,scalar_t__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*,int ,int ,size_t,int ,size_t,int,int,int ) ;

__attribute__((used)) static ssize_t
FUNC_11(EFI_UGA_DRAW_PROTOCOL *VAR_4, u_int VAR_5,
    EFI_PCI_IO_PROTOCOL *VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 EFI_UGA_PIXEL VAR_9, VAR_10;
 uint8_t *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14 = 1024;
 ssize_t VAR_15;
 EFI_STATUS VAR_16;
 u_int VAR_17;

 VAR_16 = VAR_4->Blt(VAR_4, &VAR_9, VAR_3,
     0, VAR_5, 0, 0, 1, 1, 0);
 if (FUNC_0(VAR_16)) {
  FUNC_5("UGA BLT operation failed (video->buffer)");
  return (-1);
 }
 VAR_10 = ~VAR_9;
 VAR_10 = ~VAR_9;
 VAR_10 = ~VAR_9;
 VAR_10 = 0;

 VAR_11 = FUNC_2(VAR_14, 2);
 if (VAR_11 == ((void*)0)) {
  FUNC_5("Unable to allocate memory");
  return (-1);
 }
 VAR_12 = VAR_11 + VAR_14;

 VAR_15 = 0;
 while (VAR_8 > 0) {
  VAR_13 = FUNC_4(VAR_8, VAR_14);

  VAR_16 = VAR_6->Mem.Read(VAR_6, VAR_1,
      VAR_0, VAR_7 + VAR_15, VAR_13 >> 2,
      VAR_11);
  if (FUNC_0(VAR_16)) {
   FUNC_5("Error reading frame buffer (before)");
   goto fail;
  }
  VAR_16 = VAR_4->Blt(VAR_4, &VAR_10, VAR_2,
      0, 0, 0, VAR_5, 1, 1, 0);
  if (FUNC_0(VAR_16)) {
   FUNC_5("UGA BLT operation failed (modify)");
   goto fail;
  }
  VAR_16 = VAR_6->Mem.Read(VAR_6, VAR_1,
      VAR_0, VAR_7 + VAR_15, VAR_13 >> 2,
      VAR_12);
  if (FUNC_0(VAR_16)) {
   FUNC_5("Error reading frame buffer (after)");
   goto fail;
  }
  VAR_16 = VAR_4->Blt(VAR_4, &VAR_9, VAR_2,
      0, 0, 0, VAR_5, 1, 1, 0);
  if (FUNC_0(VAR_16)) {
   FUNC_5("UGA BLT operation failed (restore)");
   goto fail;
  }
  for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
   if (VAR_11[VAR_17] != VAR_12[VAR_17]) {
    FUNC_3(VAR_11);
    return (VAR_15 + (VAR_17 & ~3));
   }
  }
  VAR_15 += VAR_13;
  VAR_8 -= VAR_13;
 }
 FUNC_5("No change detected in frame buffer");

 fail:
 FUNC_5(" -- error %lu\n", FUNC_1(VAR_16));
 FUNC_3(VAR_11);
 return (-1);
}
