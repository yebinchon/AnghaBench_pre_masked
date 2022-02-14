
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ib_user_mad_reg_req {int qpn; int mgmt_class; int mgmt_class_version; int id; int oui; int * method_mask; int rmpp_version; } ;
typedef int __be32 ;


 int FUNC_0 (char*,int,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,int,int ,long*) ;
 int FUNC_2 (struct ib_user_mad_reg_req*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,void*) ;
 int FUNC_5 (int *,...) ;
 int FUNC_6 (int *,int ,int) ;

int FUNC_7(int VAR_3, int VAR_4, int VAR_5,
    uint8_t VAR_6, long VAR_7[])
{
 struct ib_user_mad_reg_req VAR_8;
 __be32 VAR_9 = FUNC_3(VAR_1);
 int VAR_10;

 FUNC_1
     ("fd %d mgmt_class %u mgmt_version %u rmpp_version %d method_mask %p",
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_8.qpn = VAR_10 = (VAR_4 == 0x1 || VAR_4 == 0x81) ? 0 : 1;
 VAR_8.mgmt_class = VAR_4;
 VAR_8.mgmt_class_version = VAR_5;
 VAR_8.rmpp_version = VAR_6;

 if (VAR_7)
  FUNC_5(VAR_8.method_mask, VAR_7, sizeof VAR_8.method_mask);
 else
  FUNC_6(VAR_8.method_mask, 0, sizeof VAR_8.method_mask);

 FUNC_5(&VAR_8.oui, (char *)&VAR_9 + 1, sizeof VAR_8.oui);

 FUNC_2(&VAR_8, sizeof VAR_8);

 if (!FUNC_4(VAR_3, VAR_2, (void *)&VAR_8)) {
  FUNC_0("fd %d registered to use agent %d qp %d", VAR_3, VAR_8.id, VAR_10);
  return VAR_8.id;
 }

 FUNC_0("fd %d registering qp %d class 0x%x version %d failed: %m",
       VAR_3, VAR_10, VAR_4, VAR_5);
 return -VAR_0;
}
