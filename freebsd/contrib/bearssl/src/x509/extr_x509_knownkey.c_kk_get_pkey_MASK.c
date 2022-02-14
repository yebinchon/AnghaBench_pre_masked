
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int br_x509_pkey ;
struct TYPE_2__ {unsigned int usages; int const pkey; } ;
typedef TYPE_1__ br_x509_knownkey_context ;
typedef int br_x509_class ;



__attribute__((used)) static const br_x509_pkey *
FUNC_0(const br_x509_class *const *VAR_0, unsigned *VAR_1)
{
 const br_x509_knownkey_context *VAR_2;

 VAR_2 = (const br_x509_knownkey_context *)VAR_0;
 if (VAR_1 != ((void*)0)) {
  *VAR_1 = VAR_2->usages;
 }
 return &VAR_2->pkey;
}
