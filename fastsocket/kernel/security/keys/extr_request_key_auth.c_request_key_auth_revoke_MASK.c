
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_key_auth {int * cred; } ;
struct TYPE_2__ {struct request_key_auth* data; } ;
struct key {int serial; TYPE_1__ payload; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct key *VAR_0)
{
 struct request_key_auth *VAR_1 = VAR_0->payload.data;

 FUNC_0("{%d}", VAR_0->serial);

 if (VAR_1->cred) {
  FUNC_1(VAR_1->cred);
  VAR_1->cred = ((void*)0);
 }
}
