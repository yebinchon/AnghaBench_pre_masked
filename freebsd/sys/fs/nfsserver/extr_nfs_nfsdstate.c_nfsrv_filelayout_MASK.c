
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int qval; } ;
struct nfsrv_descript {TYPE_2__ nd_clientid; } ;
struct TYPE_3__ {int qval; } ;
struct nfslayout {scalar_t__ lay_layoutlen; scalar_t__ lay_xdr; int lay_fsid; TYPE_1__ lay_clientid; int lay_fh; int lay_flags; int lay_type; } ;
typedef int fsid_t ;
typedef char fhandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct nfslayout* FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__,int *) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static struct nfslayout *
FUNC_4(struct nfsrv_descript *VAR_12, int VAR_13, fhandle_t *VAR_14,
    fhandle_t *VAR_15, char *VAR_16, fsid_t VAR_17)
{
 uint32_t *VAR_18;
 struct nfslayout *VAR_19;
 uint64_t VAR_20;

 VAR_19 = FUNC_1(sizeof(struct nfslayout) + VAR_10, VAR_0,
     VAR_1 | VAR_2);
 VAR_19->lay_type = VAR_5;
 if (VAR_13 == VAR_4)
  VAR_19->lay_flags = VAR_7;
 else
  VAR_19->lay_flags = VAR_6;
 FUNC_0(VAR_14, &VAR_19->lay_fh, sizeof(*VAR_14));
 VAR_19->lay_clientid.qval = VAR_12->nd_clientid.qval;
 VAR_19->lay_fsid = VAR_17;


 VAR_18 = (uint32_t *)VAR_19->lay_xdr;
 FUNC_0(VAR_16, VAR_18, VAR_9);
 VAR_18 += (VAR_9 / VAR_8);
 *VAR_18++ = FUNC_3(VAR_3 & ~0xffff);
 *VAR_18++ = 0;
 VAR_20 = 0;
 FUNC_2(VAR_20, VAR_18); VAR_18 += 2;
 *VAR_18++ = FUNC_3(1);
 *VAR_18++ = FUNC_3(VAR_11);
 FUNC_0(VAR_15, VAR_18, sizeof(*VAR_15));
 VAR_19->lay_layoutlen = VAR_10;
 return (VAR_19);
}
