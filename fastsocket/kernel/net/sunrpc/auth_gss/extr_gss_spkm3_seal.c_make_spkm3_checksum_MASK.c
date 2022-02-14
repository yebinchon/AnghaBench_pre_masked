
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int * data; int len; } ;
struct xdr_buf {scalar_t__ len; } ;
struct scatterlist {int length; } ;
struct hash_desc {int tfm; int flags; } ;
typedef int s32 ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hash_desc*,int *) ;
 int FUNC_5 (struct hash_desc*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct hash_desc*,struct scatterlist*,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct scatterlist*,char*,unsigned int) ;
 int VAR_3 ;
 int FUNC_10 (struct xdr_buf*,unsigned int,scalar_t__,int ,struct hash_desc*) ;

s32
FUNC_11(s32 VAR_4, struct xdr_netobj *VAR_5, char *VAR_6,
      unsigned int VAR_7, struct xdr_buf *VAR_8,
      unsigned int VAR_9, struct xdr_netobj *VAR_10)
{
 char *VAR_11;
 struct hash_desc VAR_12;
 struct scatterlist VAR_13[1];
 int VAR_14;

 switch (VAR_4) {
  case 128:
   VAR_11 = "hmac(md5)";
   break;
  default:
   FUNC_8("RPC:       spkm3_make_checksum:"
     " unsupported checksum %d", VAR_4);
   return VAR_2;
 }

 if (VAR_5->data == ((void*)0) || VAR_5->len <= 0) return VAR_2;

 VAR_12.tfm = FUNC_1(VAR_11, 0, VAR_0);
 if (FUNC_0(VAR_12.tfm))
  return VAR_2;
 VAR_10->len = FUNC_3(VAR_12.tfm);
 VAR_12.flags = VAR_1;

 VAR_14 = FUNC_6(VAR_12.tfm, VAR_5->data, VAR_5->len);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_5(&VAR_12);
 if (VAR_14)
  goto out;

 FUNC_9(VAR_13, VAR_6, VAR_7);
 FUNC_7(&VAR_12, VAR_13, VAR_13->length);

 FUNC_10(VAR_8, VAR_9, VAR_8->len - VAR_9,
   VAR_3, &VAR_12);
 FUNC_4(&VAR_12, VAR_10->data);

out:
 FUNC_2(VAR_12.tfm);

 return VAR_14 ? VAR_2 : 0;
}
