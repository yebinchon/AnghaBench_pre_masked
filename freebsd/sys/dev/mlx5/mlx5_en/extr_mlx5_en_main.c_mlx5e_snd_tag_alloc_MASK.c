
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union if_snd_tag_alloc_params {TYPE_1__ hdr; } ;
struct m_snd_tag {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ifnet*,union if_snd_tag_alloc_params*,struct m_snd_tag**) ;
 int FUNC_1 (struct ifnet*,union if_snd_tag_alloc_params*,struct m_snd_tag**) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1,
    union if_snd_tag_alloc_params *VAR_2,
    struct m_snd_tag **VAR_3)
{

 switch (VAR_2->hdr.type) {




 case 128:
  return (FUNC_1(VAR_1, VAR_2, VAR_3));
 default:
  return (VAR_0);
 }
}
