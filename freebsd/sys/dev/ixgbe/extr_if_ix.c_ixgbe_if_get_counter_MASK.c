
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct adapter {int ierrors; int iqdrops; int omcasts; int imcasts; int obytes; int ibytes; int opackets; int ipackets; } ;
typedef int ift_counter ;
typedef int if_t ;
typedef int if_ctx_t ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;

__attribute__((used)) static uint64_t
FUNC_3(if_ctx_t VAR_0, ift_counter VAR_1)
{
 struct adapter *VAR_2 = FUNC_2(VAR_0);
 if_t VAR_3 = FUNC_1(VAR_0);

 switch (VAR_1) {
 case 133:
  return (VAR_2->ipackets);
 case 129:
  return (VAR_2->opackets);
 case 136:
  return (VAR_2->ibytes);
 case 131:
  return (VAR_2->obytes);
 case 134:
  return (VAR_2->imcasts);
 case 130:
  return (VAR_2->omcasts);
 case 137:
  return (0);
 case 132:
  return (VAR_2->iqdrops);
 case 128:
  return (0);
 case 135:
  return (VAR_2->ierrors);
 default:
  return (FUNC_0(VAR_3, VAR_1));
 }
}
