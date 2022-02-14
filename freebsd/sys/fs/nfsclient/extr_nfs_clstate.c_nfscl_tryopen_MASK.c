
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct ucred {int dummy; } ;
struct nfsmount {int dummy; } ;
struct nfsclopen {int dummy; } ;
struct nfscldeleg {int dummy; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ucred*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct nfsmount*,int ,int *,int,int *,int,int ,struct nfsclopen*,int *,int,struct nfscldeleg**,int,int ,struct ucred*,int *,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct nfsmount *VAR_4, vnode_t VAR_5, u_int8_t *VAR_6, int VAR_7,
    u_int8_t *VAR_8, int VAR_9, u_int32_t VAR_10, struct nfsclopen *VAR_11,
    u_int8_t *VAR_12, int VAR_13, struct nfscldeleg **VAR_14,
    int VAR_15, u_int32_t VAR_16, struct ucred *VAR_17, NFSPROC_T *VAR_18)
{
 int VAR_19;

 do {
  VAR_19 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
      0, 0);
  if (VAR_19 == VAR_2)
   (void) FUNC_1(VAR_3, VAR_19, "nfstryop");
 } while (VAR_19 == VAR_2);
 if (VAR_19 == VAR_1 || VAR_19 == VAR_0) {

  FUNC_0(VAR_17);
  do {
      VAR_19 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
   VAR_16, VAR_17, VAR_18, 1, 0);
      if (VAR_19 == VAR_2)
   (void) FUNC_1(VAR_3, VAR_19, "nfstryop");
  } while (VAR_19 == VAR_2);
 }
 return (VAR_19);
}
