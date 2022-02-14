
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ offset; int * page; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int * FUNC_3 (int *,scalar_t__,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (int ,int *,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(int VAR_9)
{
 off_t VAR_10;
 off_t VAR_11;

 if (!VAR_5[VAR_9].page)
  return;

 if (VAR_8) {
  if (VAR_5[VAR_9].size <= VAR_7) {
   FUNC_1(VAR_5[VAR_9].page);
   VAR_5[VAR_9].page = ((void*)0);
   return;
  }

  FUNC_6(VAR_9);


  VAR_10 = FUNC_2(VAR_6, 0, VAR_3);

  VAR_11 = FUNC_2(VAR_6, VAR_5[VAR_9].offset, VAR_4);
  if (VAR_11 == (off_t)-1)
   FUNC_0("failed to lseek");
  VAR_11 = FUNC_5(VAR_6, VAR_5[VAR_9].page, VAR_7);
  if (VAR_11 < 0)
   FUNC_0("failed to read page");


  FUNC_2(VAR_6, VAR_10, VAR_4);

  return;
 }

 FUNC_4(VAR_5[VAR_9].page, VAR_7);
 VAR_5[VAR_9].page = ((void*)0);

 if (VAR_5[VAR_9].size <= VAR_7)
  return;

 FUNC_6(VAR_9);

 VAR_5[VAR_9].page = FUNC_3(((void*)0), VAR_7, VAR_2, VAR_1,
      VAR_6, VAR_5[VAR_9].offset);
 if (VAR_5[VAR_9].page == VAR_0)
  FUNC_0("failed to mmap cpu %d at offset 0x%llx",
      VAR_9, VAR_5[VAR_9].offset);
}
