
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int length; unsigned long* data; } ;
typedef TYPE_1__ ASN1_BIT_STRING ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int ,int *,int *) ;

__attribute__((used)) static unsigned long
FUNC_2(X509* VAR_1)
{
 unsigned long VAR_2 = 0;
 ASN1_BIT_STRING* VAR_3;
 if((VAR_3=FUNC_1(VAR_1, VAR_0, ((void*)0), ((void*)0)))) {
  if(VAR_3->length > 0) {
   VAR_2 = VAR_3->data[0];
   if(VAR_3->length > 1)
    VAR_2 |= VAR_3->data[1] << 8;
  }
  FUNC_0(VAR_3);
 }
 return VAR_2;
}
