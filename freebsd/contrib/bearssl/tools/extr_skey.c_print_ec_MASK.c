
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * pk8pem; int * pk8der; int * rawpem; int * rawder; scalar_t__ print_C; scalar_t__ print_text; } ;
typedef TYPE_1__ outspec ;
typedef int br_ec_public_key ;
struct TYPE_9__ {int curve; int xlen; int x; } ;
typedef TYPE_2__ br_ec_private_key ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,unsigned int*,TYPE_2__ const*) ;
 int FUNC_1 () ;
 size_t FUNC_2 (unsigned char*,TYPE_2__ const*,int *) ;
 size_t FUNC_3 (unsigned char*,TYPE_2__ const*,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,...) ;
 int VAR_1 ;
 int FUNC_8 (int *,unsigned char*,size_t) ;
 int FUNC_9 (int *,unsigned char*,size_t,char*) ;
 int FUNC_10 (unsigned char*) ;
 unsigned char* FUNC_11 (size_t) ;

__attribute__((used)) static int
FUNC_12(const br_ec_private_key *VAR_2, outspec *VAR_3)
{
 br_ec_public_key VAR_4;
 unsigned VAR_5[VAR_0];
 unsigned char *VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (VAR_3->print_text) {
  FUNC_6("x", VAR_2->x, VAR_2->xlen);
 }
 if (VAR_3->print_C) {
  FUNC_5("EC_X", VAR_2->x, VAR_2->xlen);
  FUNC_7("\nstatic const br_ec_private_key EC = {\n");
  FUNC_7("\t%d,\n", VAR_2->curve);
  FUNC_7("\t(unsigned char *)EC_X, sizeof EC_X\n");
  FUNC_7("};\n");
 }

 if (VAR_3->rawder == ((void*)0) && VAR_3->rawpem == ((void*)0)
  && VAR_3->pk8der == ((void*)0) && VAR_3->pk8pem == ((void*)0))
 {
  return 1;
 }
 if (FUNC_0(FUNC_1(), &VAR_4, VAR_5, VAR_2) == 0) {
  FUNC_4(VAR_1,
   "ERROR: cannot re-encode (unsupported curve)\n");
  return 0;
 }

 VAR_8 = 1;
 if (VAR_3->rawder != ((void*)0) || VAR_3->rawpem != ((void*)0)) {
  VAR_7 = FUNC_3(((void*)0), VAR_2, &VAR_4);
  if (VAR_7 == 0) {
   FUNC_4(VAR_1, "ERROR: cannot re-encode"
    " (unsupported curve)\n");
   return 0;
  }
  VAR_6 = FUNC_11(VAR_7);
  if (FUNC_3(VAR_6, VAR_2, &VAR_4) != VAR_7) {
   FUNC_4(VAR_1, "ERROR: re-encode failure\n");
   FUNC_10(VAR_6);
   return 0;
  }
  if (VAR_3->rawder != ((void*)0)) {
   VAR_8 &= FUNC_8(VAR_3->rawder, VAR_6, VAR_7);
  }
  if (VAR_3->rawpem != ((void*)0)) {
   VAR_8 &= FUNC_9(VAR_3->rawpem,
    VAR_6, VAR_7, "EC PRIVATE KEY");
  }
  FUNC_10(VAR_6);
 }
 if (VAR_3->pk8der != ((void*)0) || VAR_3->pk8pem != ((void*)0)) {
  VAR_7 = FUNC_2(((void*)0), VAR_2, &VAR_4);
  if (VAR_7 == 0) {
   FUNC_4(VAR_1, "ERROR: cannot re-encode"
    " (unsupported curve)\n");
   return 0;
  }
  VAR_6 = FUNC_11(VAR_7);
  if (FUNC_2(VAR_6, VAR_2, &VAR_4) != VAR_7) {
   FUNC_4(VAR_1, "ERROR: re-encode failure\n");
   FUNC_10(VAR_6);
   return 0;
  }
  if (VAR_3->pk8der != ((void*)0)) {
   VAR_8 &= FUNC_8(VAR_3->pk8der, VAR_6, VAR_7);
  }
  if (VAR_3->pk8pem != ((void*)0)) {
   VAR_8 &= FUNC_9(VAR_3->pk8pem,
    VAR_6, VAR_7, "PRIVATE KEY");
  }
  FUNC_10(VAR_6);
 }
 return VAR_8;
}
