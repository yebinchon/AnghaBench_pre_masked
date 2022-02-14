
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfsd4_open {int op_rflags; int* op_bmval; int op_delegate_type; int op_recall; int op_stateowner; int op_delegate_stateid; int op_cinfo; int op_stateid; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nfsd4_compoundres*,int *) ;
 int FUNC_6 (scalar_t__**,int *) ;

__attribute__((used)) static __be32
FUNC_7(struct nfsd4_compoundres *VAR_3, __be32 VAR_4, struct nfsd4_open *VAR_5)
{
 __be32 *VAR_6;
 VAR_0;

 if (VAR_4)
  goto out;

 FUNC_5(VAR_3, &VAR_5->op_stateid);
 FUNC_3(40);
 FUNC_6(&VAR_6, &VAR_5->op_cinfo);
 FUNC_4(VAR_5->op_rflags);
 FUNC_4(2);
 FUNC_4(VAR_5->op_bmval[0]);
 FUNC_4(VAR_5->op_bmval[1]);
 FUNC_4(VAR_5->op_delegate_type);
 FUNC_0();

 switch (VAR_5->op_delegate_type) {
 case 130:
  break;
 case 129:
  FUNC_5(VAR_3, &VAR_5->op_delegate_stateid);
  FUNC_3(20);
  FUNC_4(VAR_5->op_recall);




  FUNC_4(VAR_1);
  FUNC_4(0);
  FUNC_4(0);
  FUNC_4(0);
  FUNC_0();
  break;
 case 128:
  FUNC_5(VAR_3, &VAR_5->op_delegate_stateid);
  FUNC_3(32);
  FUNC_4(0);




  FUNC_4(VAR_2);
  FUNC_4(~(u32)0);
  FUNC_4(~(u32)0);




  FUNC_4(VAR_1);
  FUNC_4(0);
  FUNC_4(0);
  FUNC_4(0);
  FUNC_0();
  break;
 default:
  FUNC_1();
 }

out:
 FUNC_2(VAR_5->op_stateowner);
 return VAR_4;
}
