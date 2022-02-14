
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int idx; } ;
typedef TYPE_1__ xz_file_info ;
struct TYPE_6__ {char* src_name; } ;
typedef TYPE_2__ file_pair ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char const*) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (char const*,int) ;
 char* FUNC_11 (int ,int ,int ,int,int) ;
 char* FUNC_12 (int ,int) ;

__attribute__((used)) static bool
FUNC_13(const xz_file_info *VAR_3, file_pair *VAR_4)
{
 static bool VAR_5 = 0;
 if (!VAR_5) {
  VAR_5 = 1;




  FUNC_9(FUNC_0("Strms  Blocks   Compressed Uncompressed  Ratio  "
    "Check   Filename"));
 }

 char VAR_6[VAR_0];
 FUNC_1(VAR_6, FUNC_4(VAR_3->idx), 0);

 const char *VAR_7[7] = {
  FUNC_12(FUNC_6(VAR_3->idx), 0),
  FUNC_12(FUNC_3(VAR_3->idx), 1),
  FUNC_11(FUNC_5(VAR_3->idx),
   VAR_1, VAR_2, 0, 2),
  FUNC_11(FUNC_7(VAR_3->idx),
   VAR_1, VAR_2, 0, 3),
  FUNC_2(FUNC_5(VAR_3->idx),
   FUNC_7(VAR_3->idx)),
  VAR_6,
  VAR_4->src_name,
 };
 FUNC_8("%*s %*s  %*s  %*s  %*s  %-*s %s\n",
   FUNC_10(VAR_7[0], 5), VAR_7[0],
   FUNC_10(VAR_7[1], 7), VAR_7[1],
   FUNC_10(VAR_7[2], 11), VAR_7[2],
   FUNC_10(VAR_7[3], 11), VAR_7[3],
   FUNC_10(VAR_7[4], 5), VAR_7[4],
   FUNC_10(VAR_7[5], 7), VAR_7[5],
   VAR_7[6]);

 return 0;
}
