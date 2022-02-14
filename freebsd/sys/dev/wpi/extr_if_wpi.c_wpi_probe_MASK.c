
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_ident {scalar_t__ vendor; scalar_t__ device; int * name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct wpi_ident* VAR_2 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 const struct wpi_ident *VAR_4;

 for (VAR_4 = VAR_2; VAR_4->name != ((void*)0); VAR_4++) {
  if (FUNC_2(VAR_3) == VAR_4->vendor &&
      FUNC_1(VAR_3) == VAR_4->device) {
   FUNC_0(VAR_3, VAR_4->name);
   return (VAR_0);
  }
 }
 return VAR_1;
}
