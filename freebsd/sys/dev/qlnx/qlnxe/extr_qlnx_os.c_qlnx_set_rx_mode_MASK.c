
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int filter; int primary_mac; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(qlnx_host_t *VAR_6)
{
 int VAR_7 = 0;
 uint8_t VAR_8;

 VAR_7 = FUNC_2(VAR_6, VAR_5, VAR_6->primary_mac);
        if (VAR_7)
                return VAR_7;

 VAR_7 = FUNC_0(VAR_6);
        if (VAR_7)
                return VAR_7;

 VAR_8 = VAR_3 |
   VAR_1 |
   VAR_0;

 if (FUNC_3(VAR_6) == 0) {
  VAR_8 |= VAR_4;
  VAR_8 |= VAR_2;
 }
 VAR_6->filter = VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_8);

 return (VAR_7);
}
