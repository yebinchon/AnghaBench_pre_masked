
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ixl_vsi {int noproto; int oqdrops; int iqdrops; int omcasts; int imcasts; int obytes; int ibytes; int oerrors; int opackets; int ierrors; int ipackets; } ;
struct iavf_sc {struct ixl_vsi vsi; } ;
typedef int ift_counter ;
typedef int if_t ;
typedef int if_ctx_t ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct iavf_sc* FUNC_2 (int ) ;

__attribute__((used)) static uint64_t
FUNC_3(if_ctx_t VAR_0, ift_counter VAR_1)
{
 struct iavf_sc *VAR_2 = FUNC_2(VAR_0);
 struct ixl_vsi *VAR_3 = &VAR_2->vsi;
 if_t VAR_4 = FUNC_1(VAR_0);

 switch (VAR_1) {
 case 135:
  return (VAR_3->ipackets);
 case 137:
  return (VAR_3->ierrors);
 case 129:
  return (VAR_3->opackets);
 case 131:
  return (VAR_3->oerrors);
 case 139:

  return (0);
 case 138:
  return (VAR_3->ibytes);
 case 132:
  return (VAR_3->obytes);
 case 136:
  return (VAR_3->imcasts);
 case 130:
  return (VAR_3->omcasts);
 case 134:
  return (VAR_3->iqdrops);
 case 128:
  return (VAR_3->oqdrops);
 case 133:
  return (VAR_3->noproto);
 default:
  return (FUNC_0(VAR_4, VAR_1));
 }
}
