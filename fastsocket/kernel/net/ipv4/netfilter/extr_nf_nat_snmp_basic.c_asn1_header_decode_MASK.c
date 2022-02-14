
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {unsigned char* pointer; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct asn1_ctx*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct asn1_ctx*,unsigned int*,unsigned int*) ;

__attribute__((used)) static unsigned char FUNC_2(struct asn1_ctx *VAR_1,
     unsigned char **VAR_2,
     unsigned int *VAR_3,
     unsigned int *VAR_4,
     unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 if (!FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5))
  return 0;

 VAR_6 = VAR_7 = 0;
 if (!FUNC_1(VAR_1, &VAR_6, &VAR_7))
  return 0;


 if (*VAR_4 == VAR_0 && !VAR_6)
  return 0;

 if (VAR_6)
  *VAR_2 = VAR_1->pointer + VAR_7;
 else
  *VAR_2 = ((void*)0);
 return 1;
}
