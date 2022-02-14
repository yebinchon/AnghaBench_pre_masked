
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef void* uint32_t ;
struct TYPE_4__ {int qval; } ;
struct nfsrv_descript {TYPE_2__ nd_clientid; } ;
struct TYPE_3__ {int qval; } ;
struct nfslayout {int lay_mirrorcnt; scalar_t__ lay_layoutlen; scalar_t__ lay_xdr; int lay_fsid; TYPE_1__ lay_clientid; void* lay_fh; int lay_flags; int lay_type; } ;
typedef int fsid_t ;
typedef char fhandle_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,void**,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_11 ;
 struct nfslayout* FUNC_3 (scalar_t__,int ,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,void**) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static struct nfslayout *
FUNC_7(struct nfsrv_descript *VAR_13, int VAR_14, int VAR_15,
    fhandle_t *VAR_16, fhandle_t *VAR_17, char *VAR_18, fsid_t VAR_19)
{
 uint32_t *VAR_20;
 struct nfslayout *VAR_21;
 uint64_t VAR_22;
 int VAR_23;

 VAR_21 = FUNC_3(sizeof(struct nfslayout) + FUNC_2(VAR_15),
     VAR_2, VAR_3 | VAR_4);
 VAR_21->lay_type = VAR_6;
 if (VAR_14 == VAR_5)
  VAR_21->lay_flags = VAR_8;
 else
  VAR_21->lay_flags = VAR_7;
 FUNC_0(VAR_16, &VAR_21->lay_fh, sizeof(*VAR_16));
 VAR_21->lay_clientid.qval = VAR_13->nd_clientid.qval;
 VAR_21->lay_fsid = VAR_19;
 VAR_21->lay_mirrorcnt = VAR_15;


 VAR_20 = (uint32_t *)VAR_21->lay_xdr;
 VAR_22 = 0;
 FUNC_5(VAR_22, VAR_20); VAR_20 += 2;
 *VAR_20++ = FUNC_6(VAR_15);
 for (VAR_23 = 0; VAR_23 < VAR_15; VAR_23++) {
  *VAR_20++ = FUNC_6(1);
  FUNC_0(VAR_18, VAR_20, VAR_10);
  VAR_20 += (VAR_10 / VAR_9);
  VAR_18 += VAR_10;
  *VAR_20++ = FUNC_6(1);
  *VAR_20++ = 0;
  *VAR_20++ = 0x55555555;
  *VAR_20++ = 0x55555555;
  *VAR_20++ = 0x55555555;
  *VAR_20++ = FUNC_6(1);
  *VAR_20++ = FUNC_6(VAR_11);
  FUNC_0(VAR_17, VAR_20, sizeof(*VAR_17));
  VAR_20 += (FUNC_1(VAR_11) / VAR_9);
  VAR_17++;
  if (VAR_12 != 0) {
   *VAR_20++ = FUNC_6(FUNC_4(VAR_1));
   *VAR_20 = 0;
   FUNC_0(VAR_1, VAR_20++, FUNC_4(VAR_1));
   *VAR_20++ = FUNC_6(FUNC_4(VAR_1));
   *VAR_20 = 0;
   FUNC_0(VAR_1, VAR_20++, FUNC_4(VAR_1));
  } else {
   *VAR_20++ = FUNC_6(FUNC_4(VAR_0));
   FUNC_0(VAR_0, VAR_20++, VAR_9);
   *VAR_20++ = FUNC_6(FUNC_4(VAR_0));
   FUNC_0(VAR_0, VAR_20++, VAR_9);
  }
 }
 *VAR_20++ = FUNC_6(0);
 *VAR_20 = FUNC_6(60);
 VAR_21->lay_layoutlen = FUNC_2(VAR_15);
 return (VAR_21);
}
