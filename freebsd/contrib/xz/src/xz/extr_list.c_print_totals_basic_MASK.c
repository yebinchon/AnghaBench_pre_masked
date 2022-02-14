
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int line ;
struct TYPE_2__ {int streams; int blocks; int files; int uncompressed_size; int compressed_size; int checks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char,int) ;
 char* FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*) ;
 TYPE_1__ VAR_4 ;
 char* FUNC_6 (int ,int ,int ,int,int) ;
 char* FUNC_7 (int,int) ;

__attribute__((used)) static void
FUNC_8(void)
{

 char VAR_5[80];
 FUNC_2(VAR_5, '-', sizeof(VAR_5));
 VAR_5[sizeof(VAR_5) - 1] = '\0';
 FUNC_5(VAR_5);


 char VAR_6[VAR_0];
 FUNC_0(VAR_6, VAR_4.checks, 0);



 FUNC_4("%5s %7s  %11s  %11s  %5s  %-7s ",
   FUNC_7(VAR_4.streams, 0),
   FUNC_7(VAR_4.blocks, 1),
   FUNC_6(VAR_4.compressed_size,
    VAR_1, VAR_2, 0, 2),
   FUNC_6(VAR_4.uncompressed_size,
    VAR_1, VAR_2, 0, 3),
   FUNC_1(VAR_4.compressed_size,
    VAR_4.uncompressed_size),
   VAR_6);
 FUNC_4(FUNC_3("%s file\n", "%s files\n",
   VAR_4.files <= VAR_3 ? VAR_4.files
    : (VAR_4.files % 1000000) + 1000000),
   FUNC_7(VAR_4.files, 0));

 return;
}
