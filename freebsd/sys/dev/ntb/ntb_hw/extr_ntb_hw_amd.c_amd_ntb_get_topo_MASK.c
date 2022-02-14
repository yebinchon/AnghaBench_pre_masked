
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amd_ntb_softc {int dummy; } ;
typedef enum amd_ntb_conn_type { ____Placeholder_amd_ntb_conn_type } amd_ntb_conn_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static enum amd_ntb_conn_type
FUNC_1(struct amd_ntb_softc *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_0(4, VAR_0);

 if (VAR_5 & VAR_1)
  return (VAR_3);

 return (VAR_2);
}
