
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* errbuf; } ;
typedef TYPE_1__ kvm_t ;


 char* VAR_0 ;

char *
FUNC_0(kvm_t *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (VAR_0);
 return (VAR_1->errbuf);
}
