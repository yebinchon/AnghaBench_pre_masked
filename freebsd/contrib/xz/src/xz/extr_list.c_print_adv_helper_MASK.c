
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (int ,int ,int ,int,int ) ;
 char* FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(uint64_t VAR_3, uint64_t VAR_4,
  uint64_t VAR_5, uint64_t VAR_6,
  uint32_t VAR_7, uint64_t VAR_8)
{
 char VAR_9[VAR_0];
 FUNC_1(VAR_9, VAR_7, 1);

 FUNC_3(FUNC_0("  Streams:            %s\n"),
   FUNC_5(VAR_3, 0));
 FUNC_3(FUNC_0("  Blocks:             %s\n"),
   FUNC_5(VAR_4, 0));
 FUNC_3(FUNC_0("  Compressed size:    %s\n"),
   FUNC_4(VAR_5,
    VAR_1, VAR_2, 1, 0));
 FUNC_3(FUNC_0("  Uncompressed size:  %s\n"),
   FUNC_4(VAR_6,
    VAR_1, VAR_2, 1, 0));
 FUNC_3(FUNC_0("  Ratio:              %s\n"),
   FUNC_2(VAR_5, VAR_6));
 FUNC_3(FUNC_0("  Check:              %s\n"), VAR_9);
 FUNC_3(FUNC_0("  Stream padding:     %s\n"),
   FUNC_4(VAR_8,
    VAR_1, VAR_2, 1, 0));
 return;
}
