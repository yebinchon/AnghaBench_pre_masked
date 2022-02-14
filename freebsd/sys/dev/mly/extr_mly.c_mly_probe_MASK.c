
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_ident {scalar_t__ vendor; scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct mly_ident* VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
    struct mly_ident *VAR_4;

    FUNC_0(1);

    for (VAR_4 = VAR_2; VAR_4->vendor != 0; VAR_4++) {
 if ((VAR_4->vendor == FUNC_5(VAR_3)) &&
     (VAR_4->device == FUNC_2(VAR_3)) &&
     ((VAR_4->subvendor == 0) || ((VAR_4->subvendor == FUNC_4(VAR_3)) &&
         (VAR_4->subdevice == FUNC_3(VAR_3))))) {

     FUNC_1(VAR_3, VAR_4->desc);
     return(VAR_0);
 }
    }
    return(VAR_1);
}
