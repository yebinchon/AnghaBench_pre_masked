
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nfsclrecalllayout {int dummy; } ;
struct TYPE_2__ {int seqid; } ;
struct nfscllayout {int nfsly_flags; TYPE_1__ nfsly_stateid; int nfsly_flayrw; int nfsly_flayread; } ;
struct nfsclds {int dummy; } ;
struct nfscldevinfo {int nfsdi_deviceid; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (struct nfsclrecalllayout*,int ) ;
 struct nfsclrecalllayout* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct nfsclds*) ;
 int FUNC_7 (int ,struct nfscllayout*,int,int ,int ,int ,int,int,int ,struct nfsclrecalllayout*) ;
 int FUNC_8 (char*,int) ;

void
FUNC_9(uint32_t VAR_7, uint32_t VAR_8, struct nfscldevinfo *VAR_9,
    struct nfscllayout *VAR_10, struct nfsclds *VAR_11)
{
 struct nfsclrecalllayout *VAR_12;
 uint32_t VAR_13;

 FUNC_8("DS being disabled, error=%d\n", VAR_8);

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_0, VAR_1);
 VAR_13 = 0;
 FUNC_2();
 if ((VAR_10->nfsly_flags & VAR_5) == 0) {
  if (!FUNC_0(&VAR_10->nfsly_flayread))
   VAR_13 |= VAR_2;
  if (!FUNC_0(&VAR_10->nfsly_flayrw))
   VAR_13 |= VAR_3;
  (void)FUNC_7(VAR_4, VAR_10, VAR_13,
      0, VAR_6, VAR_10->nfsly_stateid.seqid, VAR_8, VAR_7,
      VAR_9->nfsdi_deviceid, VAR_12);
  FUNC_3();
  FUNC_1(4, "nfscl_dserr recall iomode=%d\n", VAR_13);
 } else {
  FUNC_3();
  FUNC_4(VAR_12, VAR_0);
 }


 FUNC_6(VAR_11);
}
