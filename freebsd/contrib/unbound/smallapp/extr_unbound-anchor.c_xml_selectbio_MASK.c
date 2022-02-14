
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_data {int * cdigest; int * cdigtype; int * calgo; int * ctag; } ;
typedef int BIO ;


 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static BIO*
FUNC_1(struct xml_data* VAR_0, const char* VAR_1)
{
 BIO* VAR_2 = ((void*)0);
 if(FUNC_0(VAR_1, "KeyTag") == 0)
  VAR_2 = VAR_0->ctag;
 else if(FUNC_0(VAR_1, "Algorithm") == 0)
  VAR_2 = VAR_0->calgo;
 else if(FUNC_0(VAR_1, "DigestType") == 0)
  VAR_2 = VAR_0->cdigtype;
 else if(FUNC_0(VAR_1, "Digest") == 0)
  VAR_2 = VAR_0->cdigest;
 return VAR_2;
}
