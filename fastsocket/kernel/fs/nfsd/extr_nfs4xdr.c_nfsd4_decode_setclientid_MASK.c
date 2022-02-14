
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct nfsd4_setclientid {int se_namelen; int se_callback_prog; int se_callback_netid_len; int se_callback_addr_len; int se_callback_ident; int se_callback_addr_val; int se_callback_netid_val; int se_name; TYPE_1__ se_verf; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundargs *VAR_2, struct nfsd4_setclientid *VAR_3)
{
 VAR_0;

 FUNC_2(12);
 FUNC_0(VAR_3->se_verf.data, 8);
 FUNC_1(VAR_3->se_namelen);

 FUNC_2(VAR_3->se_namelen + 8);
 FUNC_3(VAR_3->se_name, VAR_3->se_namelen);
 FUNC_1(VAR_3->se_callback_prog);
 FUNC_1(VAR_3->se_callback_netid_len);

 FUNC_2(VAR_3->se_callback_netid_len + 4);
 FUNC_3(VAR_3->se_callback_netid_val, VAR_3->se_callback_netid_len);
 FUNC_1(VAR_3->se_callback_addr_len);

 FUNC_2(VAR_3->se_callback_addr_len + 4);
 FUNC_3(VAR_3->se_callback_addr_val, VAR_3->se_callback_addr_len);
 FUNC_1(VAR_3->se_callback_ident);

 VAR_1;
}
