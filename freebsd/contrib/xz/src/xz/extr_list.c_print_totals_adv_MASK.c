
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_version; scalar_t__ all_have_sizes; int memusage_max; int stream_padding; int checks; int uncompressed_size; int compressed_size; int blocks; int streams; int files; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_7 (int ,int ) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(void)
{
 FUNC_4('\n');
 FUNC_5(FUNC_0("Totals:"));
 FUNC_3(FUNC_0("  Number of files:    %s\n"),
   FUNC_7(VAR_1.files, 0));
 FUNC_2(VAR_1.streams, VAR_1.blocks,
   VAR_1.compressed_size, VAR_1.uncompressed_size,
   VAR_1.checks, VAR_1.stream_padding);

 if (FUNC_1() >= VAR_0) {
  FUNC_3(FUNC_0("  Memory needed:      %s MiB\n"), FUNC_7(
    FUNC_6(VAR_1.memusage_max), 0));
  FUNC_3(FUNC_0("  Sizes in headers:   %s\n"),
    VAR_1.all_have_sizes ? FUNC_0("Yes") : FUNC_0("No"));
  FUNC_3(FUNC_0("  Minimum XZ Utils version: %s\n"),
    FUNC_8(VAR_1.min_version));
 }

 return;
}
