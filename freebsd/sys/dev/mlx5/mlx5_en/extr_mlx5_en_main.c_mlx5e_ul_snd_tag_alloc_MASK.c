
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ flowtype; int flowid; } ;
union if_snd_tag_alloc_params {TYPE_2__ hdr; } ;
typedef int u32 ;
struct TYPE_5__ {int num_channels; } ;
struct mlx5e_priv {struct mlx5e_channel* channel; TYPE_1__ params; scalar_t__ gone; } ;
struct m_snd_tag {int dummy; } ;
struct TYPE_8__ {struct m_snd_tag m_snd_tag; } ;
struct mlx5e_channel {TYPE_4__ tag; TYPE_3__* sq; } ;
struct ifnet {struct mlx5e_priv* if_softc; } ;
struct TYPE_7__ {scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct m_snd_tag*) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_3,
    union if_snd_tag_alloc_params *VAR_4,
    struct m_snd_tag **VAR_5)
{
 struct mlx5e_priv *VAR_6;
 struct mlx5e_channel *VAR_7;

 VAR_6 = VAR_3->if_softc;

 if (FUNC_2(VAR_6->gone || VAR_4->hdr.flowtype == VAR_2)) {
  return (VAR_1);
 } else {

  u32 VAR_8 = VAR_6->params.num_channels;
   VAR_8 = (VAR_4->hdr.flowid % 128) % VAR_8;







  VAR_7 = VAR_6->channel + VAR_8;


  if (FUNC_2(VAR_7->sq[0].running == 0))
   return (VAR_0);
  FUNC_0(&VAR_7->tag.m_snd_tag);
  *VAR_5 = &VAR_7->tag.m_snd_tag;
  return (0);
 }
}
