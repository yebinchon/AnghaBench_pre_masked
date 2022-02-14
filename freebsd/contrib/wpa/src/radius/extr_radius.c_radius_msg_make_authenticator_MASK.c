
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {TYPE_1__* hdr; } ;
struct TYPE_2__ {int authenticator; } ;


 int FUNC_0 (int *,int) ;

int FUNC_1(struct radius_msg *VAR_0)
{
 return FUNC_0((u8 *) &VAR_0->hdr->authenticator,
        sizeof(VAR_0->hdr->authenticator));
}
