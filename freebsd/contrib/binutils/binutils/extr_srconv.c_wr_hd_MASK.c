
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_ofile {int nsources; } ;
struct IT_hd {char* ver; int au; int spcsz; char* cpu; int afl; int ep; char* os; char* sys; int mn; int address; scalar_t__ sad; scalar_t__ sa; scalar_t__ uan; int segsh; int segsz; int si; scalar_t__ code; int nu; int cd; int mt; scalar_t__ spare1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct IT_hd*) ;
 char* VAR_10 ;

__attribute__((used)) static void
FUNC_8 (struct coff_ofile *VAR_11)
{
  struct IT_hd VAR_12;

  VAR_12.spare1 = 0;
  if (FUNC_2 (VAR_4) & VAR_1)
    VAR_12.mt = VAR_2;
  else
    VAR_12.mt = VAR_3;

  VAR_12.cd = VAR_0;

  VAR_12.nu = VAR_11->nsources;
  VAR_12.code = 0;
  VAR_12.ver = "0200";

  switch (FUNC_1 (VAR_4))
    {
    case 132:
      VAR_12.au = 8;
      VAR_12.si = 0;
      VAR_12.spcsz = 32;
      VAR_12.segsz = 0;
      VAR_12.segsh = 0;
      switch (FUNC_4 (VAR_4))
 {
 case 130:
   VAR_12.cpu = "H8300";
   VAR_12.afl = 2;
   VAR_5 = 2;
   VAR_10 = "C_H8/300";
   break;
 case 129:
   VAR_12.cpu = "H8300H";
   VAR_12.afl = 4;
   VAR_5 = 4;
   VAR_10 = "C_H8/300H";
   break;
 case 128:
   VAR_12.cpu = "H8300S";
   VAR_12.afl = 4;
   VAR_5 = 4;
   VAR_10 = "C_H8/300S";
   break;
 default:
   FUNC_0();
 }
      VAR_9 = VAR_7;
      break;
    case 131:
      VAR_12.au = 8;
      VAR_12.si = 0;
      VAR_12.afl = 4;
      VAR_12.spcsz = 32;
      VAR_12.segsz = 0;
      VAR_12.segsh = 0;
      VAR_12.cpu = "SH";
      VAR_5 = 4;
      VAR_10 = "C_SH";
      VAR_9 = VAR_8;
      break;
    default:
      FUNC_0 ();
    }

  if (! (FUNC_2(VAR_4) & VAR_1))
    {
      VAR_12.ep = 0;
    }
  else
    {
      VAR_12.ep = 1;
      VAR_12.uan = 0;
      VAR_12.sa = 0;
      VAR_12.sad = 0;
      VAR_12.address = FUNC_5 (VAR_4);
    }

  VAR_12.os = "";
  VAR_12.sys = "";
  VAR_12.mn = FUNC_6 (FUNC_3 (VAR_4));

  FUNC_7 (VAR_6, &VAR_12);
}
