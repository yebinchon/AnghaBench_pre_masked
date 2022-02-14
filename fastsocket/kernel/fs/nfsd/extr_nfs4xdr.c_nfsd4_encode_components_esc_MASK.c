
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static __be32 FUNC_4(char VAR_1, char *VAR_2,
       __be32 **VAR_3, int *VAR_4,
       char VAR_5, char VAR_6)
{
 __be32 *VAR_7 = *VAR_3;
 __be32 *VAR_8 = VAR_7;
 int VAR_9, VAR_10=0;
 char *VAR_11, *VAR_12, *VAR_13;

 FUNC_3("nfsd4_encode_components(%s)\n", VAR_2);
 if ((*VAR_4 -= 4) < 0)
  return VAR_0;
 FUNC_0(0);
 VAR_12 = VAR_11 = VAR_2;
 while (*VAR_12) {
  bool VAR_14 = 0;


  if (*VAR_11 == VAR_5) {
   for (; *VAR_12 && (*VAR_12 != VAR_6); VAR_12++)
                                        ;
   VAR_13 = VAR_12 + 1;
   if (*VAR_12 && (!*VAR_13 || *VAR_13 == VAR_1)) {
    VAR_11++;
    VAR_14 = 1;
   }
  }

  if (!VAR_14)
   for (; *VAR_12 && (*VAR_12 != VAR_1); VAR_12++)
                                   ;

  VAR_9 = VAR_12 - VAR_11;
  if (VAR_9) {
   if ((*VAR_4 -= ((FUNC_2(VAR_9) << 2) + 4)) < 0)
    return VAR_0;
   FUNC_0(VAR_9);
   FUNC_1(VAR_11, VAR_9);
   VAR_10++;
  }
  else
   VAR_12++;
  VAR_11 = VAR_12;
 }
 *VAR_3 = VAR_7;
 VAR_7 = VAR_8;
 FUNC_0(VAR_10);
 return 0;
}
