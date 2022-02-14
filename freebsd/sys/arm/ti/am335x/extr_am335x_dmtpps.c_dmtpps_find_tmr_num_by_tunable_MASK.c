
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padinfo {int tmr_num; int * ballname; } ;
typedef int muxmode ;
typedef int iname ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ VAR_1 ;
 struct padinfo* VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,int,char*,int) ;
 scalar_t__ FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,char*,int ) ;

__attribute__((used)) static int
FUNC_6(void)
{
 struct padinfo *VAR_3;
 char VAR_4[20];
 char VAR_5[12];
 const char * VAR_6;
 int VAR_7;

 if (!FUNC_0("hw.am335x_dmtpps.input", VAR_4, sizeof(VAR_4)))
  return (0);
 VAR_6 = FUNC_1(VAR_4);
 for (VAR_3 = VAR_2; VAR_3->ballname != ((void*)0); VAR_3++) {
  if (FUNC_4(VAR_6, VAR_3->ballname) != 0)
   continue;
  FUNC_3(VAR_5, sizeof(VAR_5), "timer%d", VAR_3->tmr_num);
  VAR_7 = FUNC_5(VAR_3->ballname, VAR_5,
      VAR_0);
  if (VAR_7 != 0) {
   FUNC_2("am335x_dmtpps: unable to configure capture pin "
       "for %s to input mode\n", VAR_5);
   return (-1);
  } else if (VAR_1) {
   FUNC_2("am335x_dmtpps: configured pin %s as input "
       "for %s\n", VAR_4, VAR_5);
  }
  return (VAR_3->tmr_num);
 }


 FUNC_2("am335x_dmtpps: unknown pin name '%s'\n", VAR_4);
 return (-1);
}
