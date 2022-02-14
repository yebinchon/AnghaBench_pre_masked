
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uoff_t ;
struct nfsnode {int n_cookies; } ;
struct nfsdmap {int ndm_eocookie; int * ndm_cookies; } ;
typedef scalar_t__ off_t ;
typedef int nfsuint64 ;


 int FUNC_0 (int,char*) ;
 struct nfsdmap* FUNC_1 (int *) ;
 int FUNC_2 (struct nfsdmap*,struct nfsdmap*,int ) ;
 int FUNC_3 (int *,struct nfsdmap*,int ) ;
 struct nfsdmap* FUNC_4 (struct nfsdmap*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsdmap* FUNC_5 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

nfsuint64 *
FUNC_6(struct nfsnode *VAR_6, off_t VAR_7, int VAR_8)
{
 struct nfsdmap *VAR_9, *VAR_10;
 int VAR_11;
 nfsuint64 *VAR_12 = ((void*)0);

 VAR_11 = (uoff_t)VAR_7 / VAR_3;
 if (VAR_11 == 0 || VAR_7 < 0) {
  FUNC_0(!VAR_8, ("nfs getcookie add at <= 0"));
  return (&VAR_5);
 }
 VAR_11--;
 VAR_9 = FUNC_1(&VAR_6->n_cookies);
 if (!VAR_9) {
  if (VAR_8) {
   VAR_9 = FUNC_5(sizeof (struct nfsdmap),
    VAR_0, VAR_1);
   VAR_9->ndm_eocookie = 0;
   FUNC_3(&VAR_6->n_cookies, VAR_9, VAR_4);
  } else
   goto out;
 }
 while (VAR_11 >= VAR_2) {
  VAR_11 -= VAR_2;
  if (FUNC_4(VAR_9, VAR_4)) {
   if (!VAR_8 && VAR_9->ndm_eocookie < VAR_2 &&
       VAR_11 >= VAR_9->ndm_eocookie)
    goto out;
   VAR_9 = FUNC_4(VAR_9, VAR_4);
  } else if (VAR_8) {
   VAR_10 = FUNC_5(sizeof (struct nfsdmap),
    VAR_0, VAR_1);
   VAR_10->ndm_eocookie = 0;
   FUNC_2(VAR_9, VAR_10, VAR_4);
   VAR_9 = VAR_10;
  } else
   goto out;
 }
 if (VAR_11 >= VAR_9->ndm_eocookie) {
  if (VAR_8)
   VAR_9->ndm_eocookie = VAR_11 + 1;
  else
   goto out;
 }
 VAR_12 = &VAR_9->ndm_cookies[VAR_11];
out:
 return (VAR_12);
}
