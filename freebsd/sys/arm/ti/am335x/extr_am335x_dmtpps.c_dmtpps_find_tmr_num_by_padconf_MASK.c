
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padinfo {int tmr_num; int * ballname; } ;
typedef int muxmode ;


 unsigned int VAR_0 ;
 struct padinfo* VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char const**,unsigned int*) ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_2;
 unsigned int VAR_3;
 const char * VAR_4;
 struct padinfo *VAR_5;
 char VAR_6[12];

 for (VAR_5 = VAR_1; VAR_5->ballname != ((void*)0); VAR_5++) {
  VAR_2 = FUNC_2(VAR_5->ballname, &VAR_4, &VAR_3);
  FUNC_0(VAR_6, sizeof(VAR_6), "timer%d", VAR_5->tmr_num);
  if (VAR_2 == 0 && (VAR_3 & VAR_0) != 0 &&
      FUNC_1(VAR_6, VAR_4) == 0)
   return (VAR_5->tmr_num);
 }

 return (0);
}
