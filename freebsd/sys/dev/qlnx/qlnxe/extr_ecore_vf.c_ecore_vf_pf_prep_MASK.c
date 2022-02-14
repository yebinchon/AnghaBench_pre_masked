
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef int u8 ;
typedef scalar_t__ u64 ;
typedef size_t u16 ;
struct vfpf_first_tlv {scalar_t__ reply_address; } ;
struct ecore_vf_iov {scalar_t__ pf2vf_reply_phys; int * offset; scalar_t__ pf2vf_reply; scalar_t__ vf2pf_request; int mutex; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int **,size_t,size_t) ;
 int * VAR_1 ;

__attribute__((used)) static void *FUNC_4(struct ecore_hwfn *VAR_2,
         u16 VAR_3, u16 VAR_4)
{
 struct ecore_vf_iov *VAR_5 = VAR_2->vf_iov_info;
 void *VAR_6;






 FUNC_2(&(VAR_5->mutex));

 FUNC_0(VAR_2, VAR_0, "preparing to send %s tlv over vf pf channel\n",
     VAR_1[VAR_3]);


 VAR_5->offset = (u8 *)VAR_5->vf2pf_request;


 FUNC_1(VAR_5->vf2pf_request, 0,
      sizeof(union vfpf_tlvs));
 FUNC_1(VAR_5->pf2vf_reply, 0,
      sizeof(union pfvf_tlvs));


 VAR_6 = FUNC_3(&VAR_5->offset, VAR_3, VAR_4);


 ((struct vfpf_first_tlv *)VAR_6)->reply_address =
  (u64)VAR_5->pf2vf_reply_phys;

 return VAR_6;
}
