
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* poll_status ) (TYPE_2__*) ;} ;
struct TYPE_5__ {TYPE_1__ enc_vec; } ;
typedef TYPE_2__ enc_softc_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 enc_softc_t *VAR_1;

 VAR_1 = VAR_0;
 if (VAR_1->enc_vec.poll_status != ((void*)0))
  VAR_1->enc_vec.poll_status(VAR_1);
}
