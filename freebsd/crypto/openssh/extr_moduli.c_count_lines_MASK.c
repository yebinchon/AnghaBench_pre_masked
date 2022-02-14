
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (char*,int,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned long
FUNC_4(FILE *VAR_3)
{
 unsigned long VAR_4 = 0;
 char VAR_5[VAR_0 + 1];

 if (FUNC_2(VAR_3, 0, VAR_1) != 0) {
  FUNC_0("input file is not seekable");
  return VAR_2;
 }
 while (FUNC_1(VAR_5, VAR_0 + 1, VAR_3) != ((void*)0))
  VAR_4++;
 FUNC_3(VAR_3);
 FUNC_0("input file has %lu lines", VAR_4);
 return VAR_4;
}
