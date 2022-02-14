
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_immutable {int max_mad_size; int core_cap_flags; int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_2, u8 VAR_3,
           struct ib_port_immutable *VAR_4)
{
 struct ib_port_attr VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->pkey_tbl_len = VAR_5.pkey_tbl_len;
 VAR_4->gid_tbl_len = VAR_5.gid_tbl_len;
 VAR_4->core_cap_flags = VAR_1;
 VAR_4->max_mad_size = VAR_0;

 return 0;
}
