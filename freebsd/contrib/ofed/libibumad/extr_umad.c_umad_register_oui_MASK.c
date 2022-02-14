
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint8_t ;
struct ib_user_mad_reg_req {int qpn; int mgmt_class; int mgmt_class_version; long rmpp_version; int id; int method_mask; int oui; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,int,int,int,int,long*) ;
 int FUNC_2 (struct ib_user_mad_reg_req*,int) ;
 int FUNC_3 (int,int ,void*) ;
 int FUNC_4 (int ,long*,int) ;
 int FUNC_5 (int ,int ,int) ;

int FUNC_6(int VAR_3, int VAR_4, uint8_t VAR_5,
        uint8_t VAR_6[3], long VAR_7[])
{
 struct ib_user_mad_reg_req VAR_8;

 FUNC_1("fd %d mgmt_class %u rmpp_version %d oui 0x%x%x%x method_mask %p",
       VAR_3, VAR_4, (int)VAR_5, (int)VAR_6[0], (int)VAR_6[1],
       (int)VAR_6[2], VAR_7);

 if (VAR_4 < 0x30 || VAR_4 > 0x4f) {
  FUNC_0("mgmt class %d not in vendor range 2", VAR_4);
  return -VAR_0;
 }

 VAR_8.qpn = 1;
 VAR_8.mgmt_class = VAR_4;
 VAR_8.mgmt_class_version = 1;
 FUNC_4(VAR_8.oui, VAR_6, sizeof VAR_8.oui);
 VAR_8.rmpp_version = VAR_5;

 if (VAR_7)
  FUNC_4(VAR_8.method_mask, VAR_7, sizeof VAR_8.method_mask);
 else
  FUNC_5(VAR_8.method_mask, 0, sizeof VAR_8.method_mask);

 FUNC_2(&VAR_8, sizeof VAR_8);

 if (!FUNC_3(VAR_3, VAR_2, (void *)&VAR_8)) {
  FUNC_0
      ("fd %d registered to use agent %d qp %d class 0x%x oui %p",
       VAR_3, VAR_8.id, VAR_8.qpn, VAR_8.mgmt_class, VAR_6);
  return VAR_8.id;
 }

 FUNC_0("fd %d registering qp %d class 0x%x version %d oui %p failed: %m",
       VAR_3, VAR_8.qpn, VAR_8.mgmt_class, VAR_8.mgmt_class_version, VAR_6);
 return -VAR_1;
}
