
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct aic7770_identity {int dummy; } ;
typedef int id ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 struct aic7770_identity* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static struct aic7770_identity *
FUNC_3(bus_space_tag_t VAR_1, bus_space_handle_t VAR_2) {
 uint32_t VAR_3;
 u_int VAR_4;
 int VAR_5;

 VAR_3 = 0;
 VAR_4 = sizeof(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_2(VAR_1, VAR_2, 0x80, 0x80 + VAR_5);
  VAR_3 |= FUNC_1(VAR_1, VAR_2, 0x80 + VAR_5)
     << ((VAR_4 - VAR_5 - 1) * VAR_0);
 }

 return (FUNC_0(VAR_3));
}
