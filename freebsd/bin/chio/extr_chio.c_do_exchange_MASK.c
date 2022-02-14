
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct changer_exchange {scalar_t__ ce_srctype; scalar_t__ ce_fdsttype; scalar_t__ ce_sdsttype; int ce_flags; void* ce_sdstunit; void* ce_srcunit; void* ce_fdstunit; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,char const*,char*) ;
 int FUNC_2 (char*,scalar_t__*,void**) ;
 int FUNC_3 (int ,char*,char*,char const*) ;
 char* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,struct changer_exchange*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (struct changer_exchange*,int ,int) ;
 void* FUNC_8 (char*) ;
 void* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int VAR_6 ;
 int FUNC_11 (char*,char const*) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_7, int VAR_8, char **VAR_9)
{
 struct changer_exchange VAR_10;
 int VAR_11;
 ++VAR_9; --VAR_8;

 if (VAR_8 < 4) {
  FUNC_11("%s: too few arguments", VAR_7);
  goto usage;
 } else if (VAR_8 > 8) {
  FUNC_11("%s: too many arguments", VAR_7);
  goto usage;
 }
 (void) FUNC_7(&VAR_10, 0, sizeof(VAR_10));


 VAR_10.ce_srctype = FUNC_8(*VAR_9);
 ++VAR_9; --VAR_8;


 if (VAR_2 == VAR_10.ce_srctype) {
  FUNC_2(*VAR_9, &VAR_10.ce_srctype, &VAR_10.ce_srcunit);
 } else {

  VAR_10.ce_srcunit = FUNC_9(*VAR_9);
 }
 ++VAR_9; --VAR_8;


 VAR_10.ce_fdsttype = FUNC_8(*VAR_9);
 ++VAR_9; --VAR_8;


 if (VAR_2 == VAR_10.ce_fdsttype) {
  FUNC_2(*VAR_9, &VAR_10.ce_fdsttype, &VAR_10.ce_fdstunit);
 } else {

  VAR_10.ce_fdstunit = FUNC_9(*VAR_9);
 }
 ++VAR_9; --VAR_8;






 if ((VAR_8 == 0) || FUNC_6(*VAR_9)) {
  VAR_10.ce_sdsttype = VAR_10.ce_srctype;
  VAR_10.ce_sdstunit = VAR_10.ce_srcunit;
  goto do_special;
 }


 VAR_10.ce_sdsttype = FUNC_8(*VAR_9);
 ++VAR_9; --VAR_8;

 if (VAR_2 == VAR_10.ce_sdsttype)
  FUNC_1(1,"%s %s: voltag only makes sense as an element source",
       VAR_7, *VAR_9);


 VAR_10.ce_sdstunit = FUNC_9(*VAR_9);
 ++VAR_9; --VAR_8;

 do_special:

 while (VAR_8) {
  VAR_11 = FUNC_10(*VAR_9);
  ++VAR_9; --VAR_8;
  switch (VAR_11) {
  case 129:
   VAR_10.ce_flags |= VAR_0;
   break;

  case 128:
   VAR_10.ce_flags |= VAR_1;
   break;

  default:
   FUNC_1(1, "%s: inappropriate modifier `%s'",
       VAR_7, *VAR_9);

  }
 }


 if (FUNC_5(VAR_4, VAR_3, &VAR_10))
  FUNC_0(1, "%s: CHIOEXCHANGE", VAR_5);

 return (0);

 usage:
 (void) FUNC_3(VAR_6,
     "usage: %s %s <src ET> <src EU> <dst1 ET> <dst1 EU>\n"
     "       [<dst2 ET> <dst2 EU>] [inv1] [inv2]\n",
     FUNC_4(), VAR_7);
 return (1);
}
