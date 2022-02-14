
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_3__ {int serno; } ;
typedef TYPE_1__ request_t ;
typedef int MSG_DEFAULT_REPLY ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*,int *) ;
 int FUNC_1 (struct mpt_softc*,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct mpt_softc *VAR_1, request_t *VAR_2,
 uint32_t VAR_3, MSG_DEFAULT_REPLY *VAR_4)
{

 FUNC_1(VAR_1,
     "Default Handler Called: req=%p:%u reply_descriptor=%x frame=%p\n",
     VAR_2, VAR_2->serno, VAR_3, VAR_4);

 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_1, VAR_4);

 FUNC_1(VAR_1, "Reply Frame Ignored\n");

 return ( VAR_0);
}
