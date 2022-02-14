
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int bufsize; void* buffer; int errbuf; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 void* FUNC_1 (void*,int ) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_1, u_int VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_1(VAR_1->buffer, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1->errbuf, VAR_0, "out of memory");
  return (0);
 }
 VAR_1->buffer = VAR_3;
 VAR_1->bufsize = VAR_2;
 return (1);
}
