
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_8__ {TYPE_2__ sa4; } ;
typedef TYPE_3__ sockaddr_u ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char const*) ;

sockaddr_u
FUNC_2(const char* VAR_1) {
 sockaddr_u VAR_2;
 VAR_2.sa4.sin_family = VAR_0;
 VAR_2.sa4.sin_addr.s_addr = FUNC_1(VAR_1);
 FUNC_0(&VAR_2, 123);

 return VAR_2;
}
