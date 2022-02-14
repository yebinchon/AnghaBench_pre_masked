
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int br_x509_pkey ;
struct TYPE_2__ {scalar_t__ err; unsigned int key_usages; int const pkey; } ;
typedef TYPE_1__ br_x509_minimal_context ;
typedef int br_x509_class ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const br_x509_pkey *
FUNC_0(const br_x509_class *const *VAR_2, unsigned *VAR_3)
{
 br_x509_minimal_context *VAR_4;

 VAR_4 = (br_x509_minimal_context *)(void *)VAR_2;
 if (VAR_4->err == VAR_1
  || VAR_4->err == VAR_0)
 {
  if (VAR_3 != ((void*)0)) {
   *VAR_3 = VAR_4->key_usages;
  }
  return &((br_x509_minimal_context *)(void *)VAR_2)->pkey;
 } else {
  return ((void*)0);
 }
}
