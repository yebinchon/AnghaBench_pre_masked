
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfhret {int vers; long fhsize; int auth; scalar_t__ stat; int nfh; } ;
typedef int caddr_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (int *,long*) ;
 int FUNC_1 (int *,int ,long) ;
 int FUNC_2 (int *,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(XDR *VAR_4, struct nfhret *VAR_5)
{
 int VAR_6;
 long VAR_7, VAR_8, VAR_9 = 0;

 if (!FUNC_2(VAR_4, &VAR_5->stat))
  return (0);
 if (VAR_5->stat)
  return (1);
 switch (VAR_5->vers) {
 case 1:
  VAR_5->fhsize = VAR_3;
  return (FUNC_1(VAR_4, (caddr_t)VAR_5->nfh, VAR_3));
 case 3:
  if (!FUNC_0(VAR_4, &VAR_5->fhsize))
   return (0);
  if (VAR_5->fhsize <= 0 || VAR_5->fhsize > VAR_2)
   return (0);
  if (!FUNC_1(VAR_4, (caddr_t)VAR_5->nfh, VAR_5->fhsize))
   return (0);
  if (!FUNC_0(VAR_4, &VAR_8))
   return (0);
  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   if (!FUNC_0(VAR_4, &VAR_7))
    return (0);
   if (VAR_5->auth == -1) {
    VAR_5->auth = VAR_7;
    VAR_9++;
   } else if (VAR_7 == VAR_5->auth) {
    VAR_9++;
   }
  }




  if (VAR_8 == 0 && VAR_5->auth == -1)
   VAR_5->auth = VAR_0;
  if (!VAR_9 && (VAR_8 > 0 || VAR_5->auth != VAR_0))
   VAR_5->stat = VAR_1;
  return (1);
 }
 return (0);
}
