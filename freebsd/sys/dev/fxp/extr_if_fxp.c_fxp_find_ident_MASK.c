
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct fxp_ident {scalar_t__ vendor; scalar_t__ device; int revid; int * name; } ;
typedef int device_t ;


 struct fxp_ident* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static const struct fxp_ident *
FUNC_3(device_t VAR_1)
{
 uint16_t VAR_2;
 uint16_t VAR_3;
 uint8_t VAR_4;
 const struct fxp_ident *VAR_5;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_1);
 for (VAR_5 = VAR_0; VAR_5->name != ((void*)0); VAR_5++) {
  if (VAR_5->vendor == VAR_2 && VAR_5->device == VAR_3 &&
      (VAR_5->revid == VAR_4 || VAR_5->revid == -1)) {
   return (VAR_5);
  }
 }
 return (((void*)0));
}
