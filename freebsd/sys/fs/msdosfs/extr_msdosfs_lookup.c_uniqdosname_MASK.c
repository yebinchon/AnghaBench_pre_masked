
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_char ;
struct msdosfsmount {int pm_flags; int pm_devvp; } ;
struct direntry {scalar_t__* deName; int deAttributes; } ;
struct denode {struct msdosfsmount* de_pmp; } ;
struct componentname {int cn_namelen; scalar_t__ cn_nameptr; } ;
struct buf {char* b_data; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__*,int *,int) ;
 int FUNC_1 (int ,int ,int,int ,struct buf**) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct denode*,int,int *,int ,int*) ;
 scalar_t__ FUNC_4 (int const*,int *,int ,int,struct msdosfsmount*) ;

int
FUNC_5(struct denode *VAR_7, struct componentname *VAR_8, u_char *VAR_9)
{
 struct msdosfsmount *VAR_10 = VAR_7->de_pmp;
 struct direntry *VAR_11;
 int VAR_12;
 int VAR_13;
 u_long VAR_14;
 daddr_t VAR_15;
 struct buf *VAR_16;
 int VAR_17;

 if (VAR_10->pm_flags & VAR_4)
  return (FUNC_4((const u_char *)VAR_8->cn_nameptr, VAR_9,
      VAR_8->cn_namelen, 0, VAR_10) ? 0 : VAR_3);

 for (VAR_12 = 1;; VAR_12++) {



  if (!FUNC_4((const u_char *)VAR_8->cn_nameptr, VAR_9,
      VAR_8->cn_namelen, VAR_12, VAR_10))
   return VAR_12 == 1 ? VAR_3 : VAR_2;




  for (VAR_14 = VAR_17 = 0; !VAR_17; VAR_14++) {
   if ((VAR_17 = FUNC_3(VAR_7, VAR_14, &VAR_15, 0, &VAR_13)) != 0) {
    if (VAR_17 == VAR_1)
     return 0;
    return VAR_17;
   }
   VAR_17 = FUNC_1(VAR_10->pm_devvp, VAR_15, VAR_13, VAR_5, &VAR_16);
   if (VAR_17) {
    return VAR_17;
   }
   for (VAR_11 = (struct direntry *)VAR_16->b_data;
        (char *)VAR_11 < VAR_16->b_data + VAR_13;
        VAR_11++) {
    if (VAR_11->deName[0] == VAR_6) {



     FUNC_2(VAR_16);
     return 0;
    }



    if (VAR_11->deAttributes & VAR_0)
     continue;
    if (!FUNC_0(VAR_11->deName, VAR_9, 11)) {
     VAR_17 = VAR_2;
     break;
    }
   }
   FUNC_2(VAR_16);
  }
 }
}
