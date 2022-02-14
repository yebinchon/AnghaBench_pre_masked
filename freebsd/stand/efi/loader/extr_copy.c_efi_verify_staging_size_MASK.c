
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINTN ;
typedef int UINT32 ;
struct TYPE_9__ {int (* GetMemoryMap ) (int*,TYPE_1__*,int*,int*,int *) ;} ;
struct TYPE_8__ {scalar_t__ PhysicalStart; int NumberOfPages; scalar_t__ Type; } ;
typedef int EFI_STATUS ;
typedef scalar_t__ EFI_PHYSICAL_ADDRESS ;
typedef TYPE_1__ EFI_MEMORY_DESCRIPTOR ;


 TYPE_7__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int*,TYPE_1__*,int*,int*,int *) ;

__attribute__((used)) static void
FUNC_7(unsigned long *VAR_7)
{
 UINTN VAR_8;
 EFI_MEMORY_DESCRIPTOR *VAR_9 = ((void*)0), *VAR_10;
 EFI_PHYSICAL_ADDRESS VAR_11, VAR_12;
 UINTN VAR_13, VAR_14;
 UINT32 VAR_15;
 EFI_STATUS VAR_16;
 int VAR_17, VAR_18;
 unsigned long VAR_19 = 0;

 VAR_8 = 0;

 for (;;) {
  VAR_16 = VAR_0->GetMemoryMap(&VAR_8, VAR_9, &VAR_13, &VAR_14, &VAR_15);
  if (!FUNC_0(VAR_16))
   break;

  if (VAR_16 != VAR_1) {
   FUNC_5("Can't read memory map: %lu\n",
       FUNC_1(VAR_16));
   goto out;
  }

  FUNC_3(VAR_9);




  VAR_9 = FUNC_4(VAR_8 + (10 * VAR_14));
  if (VAR_9 == ((void*)0)) {
   FUNC_5("Unable to allocate memory\n");
   goto out;
  }
 }

 VAR_18 = VAR_8 / VAR_14;
 for (VAR_17 = 0, VAR_10 = VAR_9; VAR_17 < VAR_18;
      VAR_17++, VAR_10 = FUNC_2(VAR_10, VAR_14)) {
  VAR_11 = VAR_10->PhysicalStart;
  VAR_12 = VAR_11 + VAR_10->NumberOfPages * VAR_3;

  if (VAR_6 < VAR_11 ||
      VAR_6 >= VAR_12)
   continue;

  VAR_19 = VAR_10->NumberOfPages -
   ((VAR_6 - VAR_11) >> VAR_2);
  break;
 }

 if (VAR_19 == 0) {
  FUNC_5("Can't find valid memory map for staging area!\n");
  goto out;
 }

 VAR_17++;
 VAR_10 = FUNC_2(VAR_10, VAR_14);

 for ( ; VAR_17 < VAR_18;
      VAR_17++, VAR_10 = FUNC_2(VAR_10, VAR_14)) {
  if (VAR_10->Type != VAR_4 &&
      VAR_10->Type != VAR_5)
   break;

  if (VAR_10->PhysicalStart != VAR_12)
   break;

  VAR_12 = VAR_10->PhysicalStart + VAR_10->NumberOfPages * VAR_3;

  VAR_19 += VAR_10->NumberOfPages;
 }

 if (*VAR_7 > VAR_19) {
  FUNC_5("Staging area's size is reduced: %ld -> %ld!\n",
      *VAR_7, VAR_19);
  *VAR_7 = VAR_19;
 }
out:
 FUNC_3(VAR_9);
}
