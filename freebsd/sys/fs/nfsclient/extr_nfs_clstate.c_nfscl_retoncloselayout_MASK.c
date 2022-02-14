
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct nfsclrecalllayout {int dummy; } ;
struct TYPE_7__ {int seqid; } ;
struct nfscllayout {int nfsly_flags; TYPE_1__ nfsly_stateid; int nfsly_flayrw; int nfsly_flayread; } ;
struct nfsclclient {int dummy; } ;
struct TYPE_9__ {int n_flag; } ;
struct TYPE_8__ {scalar_t__ v_type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 TYPE_5__* FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct nfscllayout* FUNC_5 (struct nfsclclient*,int *,int) ;
 int FUNC_6 (int ,struct nfscllayout*,int ,int ,int ,int ,int ,int ,int *,struct nfsclrecalllayout*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(vnode_t VAR_10, struct nfsclclient *VAR_11, uint8_t *VAR_12,
    int VAR_13, struct nfsclrecalllayout **VAR_14)
{
 struct nfscllayout *VAR_15;
 uint32_t VAR_16;

 if (VAR_10->v_type != VAR_7 || !FUNC_2(FUNC_3(FUNC_7(VAR_10))) ||
     VAR_9 == 0 || VAR_8 == 0 ||
     (FUNC_4(VAR_10)->n_flag & VAR_5) != 0)
  return;
 VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_13);
 if (VAR_15 != ((void*)0) && (VAR_15->nfsly_flags & (VAR_4 |
     VAR_3)) == VAR_4) {
  VAR_16 = 0;
  if (!FUNC_0(&VAR_15->nfsly_flayread))
   VAR_16 |= VAR_0;
  if (!FUNC_0(&VAR_15->nfsly_flayrw))
   VAR_16 |= VAR_1;
  (void)FUNC_6(VAR_2, VAR_15, VAR_16,
      0, VAR_6, VAR_15->nfsly_stateid.seqid, 0, 0, ((void*)0),
      *VAR_14);
  FUNC_1(4, "retoncls recall iomode=%d\n", VAR_16);
  *VAR_14 = ((void*)0);
 }
}
